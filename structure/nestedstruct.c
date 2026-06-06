#include <stdio.h>
#include <string.h>

typedef struct Pokemon
{
  int hp;
  int speed;
  int attack;
  char name[15];
} pokemon;

typedef struct Legendary
{
  pokemon normal;
  char specialMove[20];
} legendary;

int main()
{
  pokemon pikachu;

  pikachu.hp = 100;
  pikachu.speed = 90;
  pikachu.attack = 80;
  strcpy(pikachu.name, "Pikachu");

  legendary zapdos;
  zapdos.normal.hp = 120;
  zapdos.normal.speed = 100;
  zapdos.normal.attack = 120;
  strcpy(zapdos.normal.name, "Zapdos");
  strcpy(zapdos.specialMove, "Thunderbolt");

  return 0;
}