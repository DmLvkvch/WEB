const Direction = {
    W:"W", A:"A", S:"S", D:"D"
};

class Unit{
    constructor(){
        this.coord = {x:0, y:0};
        this.direction = null;
        this.map = null;
    }

    fire(){
        let b = null;
        if(this.direction===Direction.W){
            b = new Bullet(this.coord.x, this.coord.y-1, this.direction);
        }
        else if(this.direction===Direction.S){
            b = new Bullet(this.coord.x, this.coord.y+1, this.direction);
        }
        else if(this.direction===Direction.D){
            b = new Bullet(this.coord.x+1, this.coord.y, this.direction);
        }
        else{
            b = new Bullet(this.coord.x-1, this.coord.y, this.direction);
        }
        b.map = this.map;
        return b;
    }

    moveDown(){
        if(this.direction===Direction.W) {
            if(this.canMove(this.coord.x, this.coord.y+1))
                this.coord.y++;
        }
        else if(this.direction === Direction.S) {
            if(this.canMove(this.coord.x, this.coord.y-1))
                this.coord.y--;
        }
        else if(this.direction===Direction.A){
            if(this.canMove(this.coord.x+1, this.coord.y))
                this.coord.x++;
        }
        else{
            if(this.canMove(this.coord.x-1, this.coord.y))
                this.coord.x--;
        }
    }

    moveUp(){
        if(this.direction===Direction.S){
            if(this.canMove(this.coord.x, this.coord.y+1)) {
                this.coord.y++;
                return true;
            }
        }
        else if(this.direction===Direction.W) {
            if(this.canMove(this.coord.x, this.coord.y-1)) {
                this.coord.y--;
                return true;
            }
        }
        else if(this.direction===Direction.A){
            if(this.canMove(this.coord.x-1, this.coord.y)) {
                this.coord.x--;
                return true;
            }
        }
        else {
            if(this.canMove(this.coord.x+1, this.coord.y)) {
                this.coord.x++;
                return true;
            }
        }
        return false;
    }

    moveRight(){
        if(this.direction===Direction.W){
            this.direction = Direction.D;
        }
        else if(this.direction===Direction.D){
            this.direction = Direction.S;
        }
        else if(this.direction===Direction.S){
            this.direction = Direction.A;
        }
        else if(this.direction===Direction.A){
            this.direction = Direction.W;
        }
    }

    moveLeft(){
        for (let i = 0; i < 3; i++) {
            this.moveRight();
        }
    }

    canMove(x, y) {
        return !(this.isOutOfBounds(x, y)) && !this.checkCollisions(x, y);
    }

    checkCollisions(x, y) {
        if (this.isOutOfBounds(x, y)) {
            return false;
        } else {
            return map.map[x][y] !== 0;
        }
    }

    isOutOfBounds(x, y){
        return !(x >= 0 && x <= 19 && y >= 0 && y <= 19);

    }
}

class Bullet extends Unit{
    constructor(x, y, dir){
        super();
        //this.map = null;
        this.coord.x = x;
        this.coord.y = y;
        this.speed = 250;
        this.direction = dir;
    }


    draw(ctx){
        let i = this.coord.x;
        let j = this.coord.y;
        ctx.fillStyle = 'red';
        if(this.direction===Direction.W)
            ctx.fillRect(i+0.35, j, 0.25, 0.25);
        if(this.direction===Direction.S)
            ctx.fillRect(i+0.35, j, 0.25, 0.25);
        if(this.direction===Direction.D)
            ctx.fillRect(i, j+0.35, 0.25, 0.25);
        if(this.direction===Direction.A)
            ctx.fillRect(i, j+0.35, 0.25, 0.25);
    }

    onTouch(x, y){
        return this.map.map[x][y] instanceof Block;
    }

    move() {
        this.moveUp();
    }
}


class Player extends Unit{
    constructor(){
        super();
        this.direction = Direction.W;
        //this.map = null;
        this.killed = false;
    }

    kill(){

    }

    onTouch(x, y){
        if(this.coord.x===x && this.coord.y===y){
            this.killed = true;
        }
        return this.killed;
    }

    draw(ctx){
        let img = null;
        let i = this.coord.x;
        let j = this.coord.y;
        if(this.map.map[i][j].direction===Direction.W) {
            img = document.getElementById('pl');
        }
        else if(this.map.map[i][j].direction===Direction.D){
            img = document.getElementById('pl1');
        }
        else if(this.map.map[i][j].direction===Direction.S){
            img = document.getElementById('pl2');
        }
        else if(this.map.map[i][j].direction===Direction.A){
            img = document.getElementById('pl3');
        }
        ctx.drawImage(img, i, j, 1, 1)
    }
}

class Enemy extends Unit{
    constructor(){
        super();
        //this.map = null;
        this.direction = Direction.S;
        this.path = null;
    }

    scan() {
        if (this.direction === Direction.W) {
            let pos = -999;
            let tmp = 0;
            for (let i = this.coord.y; i >= 0; i--) {
                /*
                if(!(this.map.map[this.coord.x][i] instanceof Player) && this.map.map[this.coord.x][i]!==0 && !(this.map.map[this.coord.x][i] instanceof Enemy)) {
                    return null;
                }
                 */
                if (this.map.map[this.coord.x][i] instanceof Block && !(this.map.map[this.coord.x][i] instanceof Enemy)) {
                    tmp = i;
                    break;
                }

                if (this.map.map[this.coord.x][i] instanceof Player) {
                    pos = i;
                }
            }
            if (pos < tmp) {
                return null;
            }

        } else if (this.direction === Direction.S) {
            let pos = 999;
            let tmp = 0;
            for (let i = this.coord.y; i < 20; i++) {
                /*
                if(!(this.map.map[this.coord.x][i] instanceof Player) && this.map.map[this.coord.x][i]!==0 && !(this.map.map[this.coord.x][i] instanceof Enemy)){
                    return null;
                }

                 */
                if (this.map.map[this.coord.x][i] instanceof Block && !(this.map.map[this.coord.x][i] instanceof Enemy)) {
                    tmp = i;
                    break;
                }

                if (this.map.map[this.coord.x][i] instanceof Player) {
                    pos = i;
                }
            }
            if (pos > tmp) {
                return null;
            }
        } else if (this.direction === Direction.D) {
            let pos = 999;
            let tmp = 0;
            for (let i = this.coord.x; i < 20; i++) {
                /*
                if(!(this.map.map[i][this.coord.y] instanceof Player) && this.map.map[i][this.coord.y]!==0 &&!(this.map.map[i][this.coord.y] instanceof Enemy)){
                    return null;
                }

                 */
                if (this.map.map[i][this.coord.y] instanceof Block && !(this.map.map[i][this.coord.y] instanceof Enemy)) {
                    tmp = i;
                    break;
                }

                if (this.map.map[i][this.coord.y] instanceof Player) {
                    pos = i;
                }
            }
            if (pos > tmp) {
                return null;
            }
        } else if (this.direction === Direction.A) {
            let pos = -999;
            let tmp = 0;
            for (let i = this.coord.x; i >= 0; i--) {
                /*
                if(!(this.map.map[i][this.coord.y] instanceof Player) && this.map.map[i][this.coord.y]!==0 && !(this.map.map[i][this.coord.y] instanceof Enemy)){
                    return null;
                }
                 */
                if (this.map.map[i][this.coord.y] instanceof Block && !(this.map.map[i][this.coord.y] instanceof Enemy)) {
                    tmp = i;
                    break;
                }

                if (this.map.map[i][this.coord.y] instanceof Player) {
                    pos = i;
                }
            }
            if (pos < tmp) {
                return null;
            }
        }
        return this.fire();
    }

    kill(){

    }

    onTouch(x, y){
        if(this.coord.x===x && this.coord.y===y){
            this.killed = true;
        }
        return this.killed;
    }

    draw(ctx){
        let img = null;
        let i = this.coord.x;
        let j = this.coord.y;
        if(this.map.map[i][j].direction===Direction.W) {
            img = document.getElementById('en');
        }
        else if(this.map.map[i][j].direction===Direction.D){
            img = document.getElementById('en1');
        }
        else if(this.map.map[i][j].direction===Direction.S){
            img = document.getElementById('en2');
        }
        else if(this.map.map[i][j].direction===Direction.A){
            img = document.getElementById('en3');
        }
        ctx.drawImage(img, i, j, 1, 1)
    }

    move(end){
        let path = this.findPath(this.map.map, [this.coord.x, this.coord.y], [end.x, end.y]);
        if(path.length===0)
            return;
        this.path = path;
        if(this.path[1][0]===this.coord.x){
            if(this.path[1][1]<this.coord.y){
                this.direction = Direction.W
            }
            else if(this.path[1][1]>=this.coord.y){
                this.direction = Direction.S
            }
        }
        else if(this.path[1][1]===this.coord.y){
            if(this.path[1][0]<this.coord.x){
                this.direction = Direction.A
            }
            else if(this.path[1][0]>=this.coord.y){
                this.direction = Direction.D
            }
        }
        if(path.length===2)
            return;
        this.coord.x = this.path[1][0];
        this.coord.y = this.path[1][1];
    }

    findPath(world, pathStart, pathEnd) {
        let	abs = Math.abs;
        let worldWidth = this.map.map[0].length;
        let worldHeight = this.map.map.length;
        let worldSize =	worldWidth * worldHeight;
        let findNeighbours = function(){}; // empty

        function ManhattanDistance(Point, Goal) {
            return abs(Point.x - Goal.x) + abs(Point.y - Goal.y);
        }

        function Neighbours(map, x, y) {
            let	N = y - 1,
                S = y + 1,
                E = x + 1,
                W = x - 1,
                myN = N > -1 && canWalkHere(map, x, N),
                myS = S < worldHeight && canWalkHere(map, x, S),
                myE = E < worldWidth && canWalkHere(map, E, y),
                myW = W > -1 && canWalkHere(map, W, y),
                result = [];
            if(myN)
                result.push({x:x, y:N});
            if(myE)
                result.push({x:E, y:y});
            if(myS)
                result.push({x:x, y:S});
            if(myW)
                result.push({x:W, y:y});
            findNeighbours(myN, myS, myE, myW, N, S, E, W, result);
            return result;
        }

        function canWalkHere(map, x, y) {
            return ((map[x] != null) &&
                (map[x][y] != null) &&
                (!(map[x][y] instanceof Block)));
        }

        function Node(Parent, Point) {
            return {
                Parent: Parent,
                value: Point.x + (Point.y * worldWidth),
                x: Point.x,
                y: Point.y,
                f: 0,
                g: 0
            };
        }

        function calculatePath(map) {
            let	mypathStart = Node(null, {x:pathStart[0], y:pathStart[1]});
            let mypathEnd = Node(null, {x:pathEnd[0], y:pathEnd[1]});
            let AStar = new Array(worldSize);
            let Open = [mypathStart];
            let Closed = [];
            let result = [];
            let myNeighbours;
            let myNode;
            let myPath;
            let length, max, min, i, j;
            while(length = Open.length) {
                max = worldSize;
                min = -1;
                for(i = 0; i < length; i++) {
                    if(Open[i].f < max)
                    {
                        max = Open[i].f;
                        min = i;
                    }
                }
                myNode = Open.splice(min, 1)[0];
                if(myNode.value === mypathEnd.value) {
                    myPath = Closed[Closed.push(myNode) - 1];
                    do {
                        result.push([myPath.x, myPath.y]);
                    }
                    while (myPath = myPath.Parent);
                    AStar = Closed = Open = [];
                    result.reverse();
                }
                else{
                    myNeighbours = Neighbours(map, myNode.x, myNode.y);
                    for(i = 0, j = myNeighbours.length; i < j; i++) {
                        myPath = Node(myNode, myNeighbours[i]);
                        if (!AStar[myPath.value]) {
                            myPath.g = myNode.g + ManhattanDistance(myNeighbours[i], myNode);
                            myPath.f = myPath.g + ManhattanDistance(myNeighbours[i], mypathEnd);
                            Open.push(myPath);
                            AStar[myPath.value] = true;
                        }
                    }
                    Closed.push(myNode);
                }
            }
            return result;
        }
        return calculatePath(world);
    }
}

class Block extends Unit{
    constructor(map){
        super(map);
    }
}
