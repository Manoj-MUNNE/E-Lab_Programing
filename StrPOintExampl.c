#include<stdio.h>
#include<string.h>
typedef struct pokemon
{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[15];
}pokemon;

int main()
{
     pokemon pikachu;
     pikachu.hp=60;
     printf("old hp: %d\n",pikachu.hp);
     pikachu.attack=70;
     printf("old attack: %d\n",pikachu.attack);
    // pikachu.speed=100;
    // pikachu.tier='A';
    // strcpy(pikachu.name,"pikachu");
    
      pokemon *x=&pikachu;
       (*x).hp=70;
       printf("new hp: %d\n",pikachu.hp); 
       (*x).attack=120;
       printf("new attack: %d\n",pikachu.attack);
    return 0;
}