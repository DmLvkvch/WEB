let    player = null;
let    ctx       = document.getElementById('game').getContext('2d');
let scale = 20;
ctx.scale(scale,scale);
ctx.fillStyle = "#000";
ctx.fillRect(0, 0, 400, 400);
let     time      = 0; // Прошедшее время
let    level     = 1;
let    updateInterval = null;
let    map = null;
let    enemy = null;
let    obj = [];
start();
function init() {
    // soundManager.load(['grassStep.mp3', 'pop.mp3']);
    // mapManager.load("map1.json");
    map = new Map();
    player = new Player();
    player.coord.x = 10;
    player.coord.y = 18;
    enemy = new Enemy();
    enemy.coord.x = 10;
    enemy.coord.y = 1;
    player.map = map;
    enemy.map = map;
    obj.push(player);
    obj.push(enemy);
    addWalls();
    put();
}
function start() {
    init();
}


function clear() {
    for (let i = 0; i < map.map.length; i++) {
        map.map[i] = new Array(20).fill(0);
    }
}


function put() {
    clear();
    for (let i = 0; i < obj .length; i++) {
        map.map[obj[i].coord.x][obj[i].coord.y] = obj[i];
    }
}

function addvertWall(x, y, y1) {
    for(let i = y;i<y1;i++){
        let block = new Block();
        block.coord.x = x;
        block.coord.y = i;
        obj.push(block);
    }
}

function addhorWall(x, x1, y) {
    for(let i = x;i<x1;i++){
        let block = new Block();
        block.coord.x = i;
        block.coord.y = y;
        obj.push(block);
    }
}

function addWalls() {
    this.addvertWall(3,  3, 7);
    this.addvertWall(4,  3, 7);

    this.addvertWall(15,  3, 7);
    this.addvertWall(16,  3, 7);

    this.addvertWall(7,  3, 7);
    this.addvertWall(12,  3, 7);

    this.addvertWall(8,  10, 15);
    this.addvertWall(11,  10, 15);

    this.addvertWall(9,  12, 15);
    this.addvertWall(10,  12, 15);

    this.addhorWall(5,  8, 14);
    this.addhorWall(12,  15, 14);

    this.addhorWall(5,  8, 14);
    this.addhorWall(12,  15, 14);

    this.addvertWall(2,  10, 17);
    this.addvertWall(17,  10, 17);
}

function repaint(){
    enemy.move({x:player.coord.x, y:player.coord.y});
    map.draw(ctx);
    for(let i = 0;i<obj.length;i++)
        if(!(obj[i] instanceof Block))
            obj[i].draw(ctx);
}

document.addEventListener('keydown', (event)=>{
    let keyId = event.keyCode;
    if(keyId === 37){
        player.moveLeft();
    }else if (keyId === 39){
        player.moveRight();
    }
    else if (keyId === 40){
        player.moveDown();
    }
    else if (keyId === 38) {
        player.moveUp();
    }
    else if(keyId===32){
        let bul = player.fire();
        obj.push(bul);
        //inteval = setInterval(f, bul.speed);
    }
    repaint()
});
/*
function f() {
    if(enemy.onTouch(obj[obj.length-1].coord.x, obj[obj.length-1].coord.y)){
        clearInterval(inteval);
        obj.splice(obj.length-1, 1);
    }
    if(player.onTouch(obj[obj.length-1].coord.x, obj[obj.length-1].coord.y)){
        clearInterval(inteval);
        obj.splice(obj.length-1, 1);
    }
    if(!obj[obj.length-1].moveUp()) {
        clearInterval(inteval);
        obj.splice(obj.length-1, 1);
        put();
        repaint();
        return;
    }
    obj[obj.length-1].move();

    put();
    repaint();
}

function repaint() {
    enemy.move({x:player.coord.x, y:player.coord.y});
    main.map.draw(main.ctx);
    for(let i = 0;i<main.obj.length;i++)
        if(!(main.obj[i] instanceof Block))
            main.obj[i].draw(main.ctx);
}
*/
