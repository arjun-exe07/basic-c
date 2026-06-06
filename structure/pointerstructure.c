#include <stdio.h>
#include <string.h>

typedef struct Pokemon
{
  int attack;
  int speed;
  char tier;
} pokemon;

void change(pokemon *a)
{
  (*a).attack = 90;
  (*a).speed = 45;
  (*a).tier = "B";
}

void main()
{
  pokemon pikachu;
  // pikachu.attack = 60;
  // pikachu.speed = 70;
  // pikachu.tier = 'A';

  pokemon *a = &pikachu;
  // same as struct Pokemon *a = & pikachu;

  (*a).attack = 60;
  (*a).speed = 70;
  (*a).tier = 'A';

  printf("Before change function :");
  printf("pikachu stats:\n");
  printf("Attack : %d\n", pikachu.attack);
  printf("Speed : %d\n", pikachu.speed);
  printf("Tier : %d\n", pikachu.tier);

  change(&pikachu);

  printf("\nAfter change function :");
  printf("pikachu stats:\n");
  printf("Attack : %d\n", pikachu.attack);
  printf("Speed : %d\n", pikachu.speed);
  printf("Tier : %d\n", pikachu.tier);
}