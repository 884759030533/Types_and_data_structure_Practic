//---------------------------------------------------------------------------

#include <vcl.h>

#include <iostream.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

#pragma hdrstop

#pragma argsused
//---------------------------------------------------------------------------

int main(int argc, char* argv[])
{
    char cc = 'f', *p;
    char G = 'g';
    p = &G;

    *p = 't';

    int *p1, *p2;
    int integer1 = 8;
    p1 = &integer1;
    *p1 = 7;

    char *pc = &cc;
    *pc = 'd';

    char *ptr (NULL);
    //*ptr = 'v';//error

    int *mas [10]; // 40
    int t;
    mas[4] = &t;
    *mas[4] = 6;

    int (*point) [10];
    int y[10];
    point = &y;

    (*point)[3] = 4;
    cout<<y[3]<<endl;

    (*point)[6] = 6;
    cout<<y[6]<<endl;

    *(*(point)+3) = 7;
    cout<<y[3]<<endl;

    cout<<(char*)&point[0][3]-(char*)point<<endl;
    point[0][3] = 14;

    cout<<y[3]<<endl;
    //----------------------

    int mass[3][10];

    point = &mass[1];
    point[1][5] = 999;
                                                     //852-792=60
    cout<<" -> "<<&mass[1]<<endl;                    //60/4=15
    cout<<" -> "<<*point<<endl;     //792   //852

    cout<<" -> "<<&point[1][5]<<endl;
    cout<<" => "<<mass[2][5]<<endl;

    //----------------------
    struct list *n, *pr;

    struct list
    {
        char b;
        int *k;
    } line;

    int **pp = &p1;

    getch();
    return 0;
}
//---------------------------------------------------------------------------
