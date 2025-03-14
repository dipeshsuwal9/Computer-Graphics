#include<iostream>
#include<conio.h>
#include<graphics.h>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
    int centerx=getmaxx()/2;
    int centery=getmaxy()/2;
    int a;
    char ch;
    int sx,sy,sx1,sx2,sx3,sy1,sy2,sy3,x1,x2,x3,y1,y2,y3,tx1,tx2,ty1,ty2,tx,ty;
    cout<<"1.Scaling"<<endl<<"2.Translation"<<endl<<"3.Exit"<<endl;
    line(centerx,0,centerx,getmaxy());
    line(0,centery,getmaxx(),centery);
    do
    {
cout<<"Enter choice";
    cin>>a;

switch(a)
{
    case 1:
        cout<<"Enter triangle points:";
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        cout<<"Enter scaling points for a triangle"<<endl;
        cin>>sx>>sy;
        line(x1+centerx,y1+centery,x2+centerx,y2+centery);
        line(x2+centerx,y2+centery,x3+centerx,y3+centery);
        line(x3+centerx,y3+centery,x1+centerx,y1+centery);
        sx1=x1*sx;
        sx2=x2*sx;
        sx3=x3*sx;
        sy1=y1*sy;
        sy2=y2*sy;
        sy3=y3*sy;
        line(sx1+centerx,sy1+centery,sx2+centerx,sy2+centery);
        line(sx2+centerx,sy2+centery,sx3+centerx,sy3+centery);
        line(sx3+centerx,sy3+centery,sx1+centerx,sy1+centery);
        break;
   case 2:
        cout<<"Enter two coordinates:";
        cin>>x1>>y1>>x2>>y2;
        cout<<"Enter translating factors:";
        cin>>tx>>ty;
        line(x1+centerx,y1+centery,x2+centerx,y2+centery);
        tx1=x1+tx;
        tx2=x1+tx;
        ty1=y1+ty;
        ty2=y2+ty;
        setcolor(GREEN);
        line(tx1+centerx,ty1+centery,tx2+centerx,ty2+centery);
        break;
    case 3:
        exit(0);
}
cout<<"Do you want to continue?(y/n):";
cin>>ch;
    }
    while(ch!='n');
 getch();
}
