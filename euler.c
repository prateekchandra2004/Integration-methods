#include<stdio.h>

#include<math.h>
float f(float x,float y)
{
    float f;
    f=x+y;
    return f;
}

void main(){
float a,b,x,y,t,k,h;

printf("Enter the value of x0,y0,h and xn");
scanf("%f%f%f%f",&a,&b,&h,&t);
x=a;
y=b;
while(x<t){
k = h*f(x,y);
y=y+k;
x=x+h;
printf("x=%f\ty=%f\n",x,y);
}

}

