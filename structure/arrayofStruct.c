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
  for (int i = 0; i < 5; i++)
  {
    printf("Enter the name of the pokemon: ");
    scanf("%[^\n]s", arr[i].name);
    printf("Enter the hp of the pokemon: ");
    scanf("%d", &arr[i].hp);
    printf("Enter the speed of the pokemon: ");
    scanf("%d", &arr[i].speed);
    printf("Enter the attack of the pokemon: ");
    scanf("%d", &arr[i].attack);
  }

  for (int i = 0; i < 5; i++)
  {
    printf("Name: %s\n", arr[i].name);
    printf("HP: %d\n", arr[i].hp);
    printf("Speed: %d\n", arr[i].speed);
    printf("Attack: %d\n", arr[i].attack);
  }

  return 0;
}