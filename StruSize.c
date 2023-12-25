#include<stdio.h>
int main()
{
    typedef struct chartoon
    {
        int hp;
        int speed;
        int attack;
        char tier;
    }chartoon;

     chartoon c1;
    c1.hp=50;
    c1.speed=100;
    c1.attack=150;
    c1.tier='A';

      chartoon c2;
    c2.hp=100;
    c2.speed=150;
    c2.attack=200;
    c2.tier='S';

    printf("HP=%d  speed=%d  attack=%d  tier=%c",c1.hp,c1.speed,c1.attack,c1.tier);
    printf("\n");
    
    printf("HP=%d  speed=%d  attack=%d  tier=%c",c2.hp,c2.speed,c2.attack,c2.tier);
    
    return 0;
}