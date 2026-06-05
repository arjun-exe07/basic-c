#include <stdio.h>
typedef struct pokemon
{
  int hp;
  int speed;
  int attack;
  char name[15];
} Pokemon;

int main()
{
  Pokemon arr[5];

  arr[0].attack = 65;
  arr[0].hp = 90;
}