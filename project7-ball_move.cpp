#include<graphics.h>
using namespace std;
void displayBg(){
    while(1){
    setcolor(CYAN);
    rectangle(0, 0, 1000, 100);
    setfillstyle(SOLID_FILL, CYAN);
    floodfill(100, 80, CYAN);
    rectangle(900, 100, 1000, 800);
    setfillstyle(SOLID_FILL, CYAN);
    floodfill(910, 780, CYAN);
    rectangle(0, 200, 800, 300);
    setfillstyle(SOLID_FILL, CYAN);
    floodfill(100, 220, CYAN);
    rectangle(0, 300, 100, 800);
    setfillstyle(SOLID_FILL, CYAN);
    floodfill(80, 400, CYAN);
    rectangle(100, 600, 300, 800);
    setfillstyle(SOLID_FILL, CYAN);
    floodfill(200, 700, CYAN);
    rectangle(200, 400, 1000, 500);
    setfillstyle(SOLID_FILL, CYAN);
    floodfill(300, 450, CYAN);
    rectangle(400, 500, 500, 700);
    setfillstyle(SOLID_FILL, CYAN);
    floodfill(450, 600, CYAN);
    rectangle(600, 600, 700, 800);
    setfillstyle(SOLID_FILL, CYAN);
    floodfill(650, 700, CYAN);
    rectangle(700, 700, 800, 800);
    setfillstyle(SOLID_FILL, CYAN);
    floodfill(750, 750, CYAN);
    rectangle(800, 500, 900, 600);
    setfillstyle(SOLID_FILL, CYAN);
    floodfill(850, 550, CYAN);
    setcolor(RED);
    Sleep(40);
    }
}
void ball(){
    int x = 100, y =150;

    cleardevice();
    setcolor(RED);
    circle(x, y, 30);
    setfillstyle(SOLID_FILL, RED);
    floodfill(x, y, RED);
    if(GetAsyncKeyState(VK_RIGHT))
        x +=10;
    else if(GetAsyncKeyState(VK_LEFT))
        x -=10;
    else if(GetAsyncKeyState(VK_UP))
        y -=10;
    else if(GetAsyncKeyState(VK_DOWN))
        y +=10;


    if(x<50){
        x = 50;
    }else if(y<50){
        y = 50;
    }else if(x>950){
        x = 950;
    }else if(y>850){
        y = 850;
    }
    delay(10);
}



int main(){
initwindow(1000, 800);
    displayBg();


getch();
}
