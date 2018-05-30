#include <stdio.h>
#include<conio.h>
main()
{
int x,y,a,b;
do
{
    printf("nhap a,b : ");
    scanf("%d%d",&a,&b);
}
while (a<=0|| b<=0);

x=a;
y=b;
while(a!=b)
{
    if(a>b) a-=b;
    else    b-=a;
}
printf("\n Uoc chung lon nhat la : %d",a);
printf("\n Boi chung nho nhat la : %d",(x*y)/a);
getch();
}
