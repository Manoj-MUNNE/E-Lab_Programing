#include<stdio.h>
union item
{
    int x;
    float y;
    char z;
};
int main()
{
    union item i1;
    i1.x=5;
    printf("\n x=%d",i1.x);
    i1.y=3.5;
    printf("\n y=%f",i1.y);
    i1.z='A';
    printf("\n z=%c",i1.z);
    return 0;
}