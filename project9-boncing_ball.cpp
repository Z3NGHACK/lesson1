#include <graphics.h>
#include <conio.h>
int main(){
    initwindow(1600, 650);
    setbkcolor(BLUE);
    int x =0;
    int y =520;
    bool jumping = false;
    int vy =0;
    while(true){
        cleardevice();
        line(0, 570, 1600, 570);

        line(0, 570, 300, 300);
        line(300, 300, 600, 570);

        line(500, 570, 800, 300);
        line(800, 300, 1100, 570);

        line(1000, 570, 1300, 300);
        line(1300, 300, 1600, 570);

        circle(1300, 100, 80);

        circle(x, y, 50);
        setfillstyle(SOLID_FILL, RED);
        floodfill(x, y, WHITE);
        delay(0.1);

        if (kbhit() && !jumping) {
            char ch = getch();
            if (ch == ' ') { // Spacebar
                jumping = true;
                vy = -15; // Jump velocity
            }
        }
        y+=vy;
        vy++;
        if(y > 520){
            y = 520;
            y--;
            vy = 0;
            jumping = false;

        }

        swapbuffers();
        x++;
        if (x > 1600) {
            x = 0;
        }
    }
    getch();
    closegraph();
}
