#include <stdio.h>
#include <string.h>

int main()
{
  typedef struct pokemon
  {
    int hp;
    int speed;
    int attack;
    char name[15];
  } Pokemon;

  Pokemon pikachu, raichu;

  pikachu.hp = 100;
  pikachu.speed = 90;
  pikachu.attack = 80;
  strcpy(pikachu.name, "Pikachu");

  raichu = pikachu; // This will copy the values of pikachu to raichu

  printf("Name: %s\n", pikachu.name);
  printf("HP: %d\n", pikachu.hp);
  printf("Speed: %d\n", pikachu.speed);
  printf("Attack: %d\n", pikachu.attack);

  printf("Name: %s\n", raichu.name);
  printf("HP: %d\n", raichu.hp);
  printf("Speed: %d\n", raichu.speed);
  printf("Attack: %d\n", raichu.attack);

  return 0;
}