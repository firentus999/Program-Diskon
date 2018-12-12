#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
main()
{
    long int kode,jmlhunit;
    long doule,harga,diskon,sblmdiskon,hargatotal,terima,kembalian;
    cout<<" PROGRAM DISKON ";
    cout<<endl;
    cout<<"jmlh unit:";
    cin>>jmlhunit;
    cout<<"harga:";
    cin>>harga;
    sblmdiskon=jmlhunit*harga;
    cout<<"total sblmdiskon:"<<sblmdiskon<<endl;
    if((sblmdiskon>25000)&&(sblmdiskon<=50000))
    {
        kode=1;
    }
    if((sblmdiskon>50000)&&(sblmdiskon<=75000))
    {
        kode=2;
    }
    if((sblmdiskon>75000)&&(sblmdiskon<=100000))
    {
        kode=3;
    }
    else if(sblmdiskon>100000)
    {
        kode=4;
    }
    switch(kode)
    {
    case 1:
        diskon=sblmdiskon*0.005;
        break;
    case 2:
        diskon=sblmdiskon*0.01;
        break;
    case 3:
        diskon=sblmdiskon*0.02;
        break;
    case 4:
        diskon=sblmdiskon*0.10;
        break;
    default:
        diskon=0;
    }
    cout<<"kode:"<<kode<<endl;
    cout<<"diskon:"<<diskon<<endl;
    hargatotal=sblmdiskon-diskon;
    cout<<"hargatotal:"<<hargatotal<<endl;

    getch();
}
