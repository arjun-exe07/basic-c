#include <stdio.h>
#include <string.h>

typedef union Pokemon
{
  int hp;
  int speed;
  int attack;
  char name[15];
} pokemon;

int main()
{
  pokemon pikachu;

  pikachu.hp = 100;
  pikachu.speed = 90;
  pikachu.attack = 80;
  strcpy(pikachu.name, "Pikachu");

  printf("Name: %s\n", pikachu.name);
  // This will print garbage value as the memory is shared by all the members of union and the last value stored in the union is name.
  printf("Speed: %d\n", pikachu.speed);
  printf("Attack: %d\n", pikachu.attack);
  printf("HP: %d\n", pikachu.hp);
  // This will print garbage value as the memory is shared by all the members of union and the last value stored in the union is name.
  return 0;
}