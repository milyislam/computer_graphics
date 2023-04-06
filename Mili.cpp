
#include <iostream>
#include <graphics.h>
using namespace std;

void name()
{
    outtextxy(250, 20, "Rabeya Bashir Mily");
    outtextxy(250, 40,"ID- CSE2001019021");

}

void house()
{
    name();
    // draw the roof
    setcolor(RED);
    line(200, 100, 100, 200);
    line(200, 100, 300, 200);
    line(100, 200, 300, 200);

    // draw the walls
    setcolor(BLUE);
    rectangle(100, 200, 300, 400);

    // draw the door
    setcolor(YELLOW);
    rectangle(160, 300, 240, 400);

    // draw the doorknob
    setfillstyle(SOLID_FILL, BLACK);
    circle(220, 350, 5);
    floodfill(220, 350, BLACK);

    // draw the windows
    setcolor(WHITE);
    rectangle(120, 220, 180, 280);
    rectangle(220, 220, 280, 280);
}

void car()
{
    name();
    int i, j=0;
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(100,80,"Press any key to view the moving car");

    getch();

    for( i = 0 ; i <= 420 ; i = i + 10, j++ )
    {
        name();
        rectangle(50+i,275,150+i,400);
        rectangle(150+i,350,200+i,400);
        circle(75+i,410,10);
        circle(175+i,410,10);
        setcolor(j);
        delay(100);

        if( i == 420 )
            break;
        if ( j == 15 )
            j = 2;

        cleardevice(); // clear screen
    }
}
void circle()
{
    name();
    int x = 320, y = 240, radius;
    for ( radius = 25; radius <= 125 ; radius = radius + 20)
        circle(x, y, radius);
}

int main()
{
    int gd=DETECT, gm;
    initgraph(&gd,&gm,"");

    cout <<"Enter(1-3) choose by given below";
    cout << "\n===============================";
    cout <<"\n 1. House." << endl;
    cout <<" 2. Car." << endl;
    cout <<" 3. Circle." << endl;
    int choose;
    cout << "Here..";
    cin >> choose;

    switch(choose)
    {
    case 1:
        house();
        break;
    case 2:
        car();
        break;
    case 3:
        circle();
        break;
    }

    getch();
    closegraph();
}
