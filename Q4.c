#include<stdio.h>
int main()
{
    int r,l,u,d;
    printf("enter values: \n");
    scanf("%d %d %d %d", &r,&l,&u,&d);
    int max=r;
    char dir='R';
    if(l>max)
    {
        max=l;
        dir='L';
    }
    if(u>max)
    {
        max=u;
        dir='U';
    }
    if(d>max)
    {
        max=d;
        dir='D';
    }
    printf("Move in the direction: ");
    if(dir=='R')
    {
        printf("Right \n");

    }
    else if(dir=='L'){
        printf("Left \n");
    }
    else if(dir=='U'){
        printf("Up \n");

    }
    else if(dir=='D'){
        printf("Down \n");
    }
    float ang_x=0;
    float ang_y=0;
    if(r+l !=0){
        ang_x=((float)(r-l)/(r+l))*90;
    
    }
    if(u+d!=0){
        ang_y=((float)(u-d)/(u+d))*90;

    }
    printf("the horizontal angle of roation is: %.2f degrees \n", ang_x);
    printf("the vertical angle of rotation is: %.2f degrees \n", ang_y);
    return 0;

}