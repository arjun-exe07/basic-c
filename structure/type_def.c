#include <stdio.h>
#include <string.h>

typedef struct Pokemon
{
  ;
  int level;
  int hp;
  int attack;
  char type[20];
} pokemon;

int main()
{
  pokemon Charizard;
  Charizard.level = 5;
  Charizard.hp = 100;
  Charizard.attack = 50;
  strcpy(Charizard.type, "Fire");

  printf("Pokemon Details:\n");
  printf("Level: %d\n", Charizard.level);
  printf("HP: %d\n", Charizard.hp);
  printf("Attack: %d\n", Charizard.attack);
  printf("Type: %s\n", Charizard.type);

  return 0;
}