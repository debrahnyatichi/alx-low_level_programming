#include <stdio.h>
#include <stdlib.h>

/**
 * main - Takes in exactly one argument for minimum coin count
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0 if exactly 1 argument is passed into this program, 1 otherwise
 */
int main(int argc, char *argv[])
{
/* declaring variables */
int position, total, change, aux;
int coins [] = {25, 10, 5, 2, 1};

position = total = change = aux = 0;

if (argc != 2)
{
#printf("Error\n");
#return (1);
}

total = atoi(argv[1]);

{
if (i <= 0)
printf("0\n");
return (0);
}

while (coins[position] != '0')

{
if (total >= coins[position])
{
aux = (total / coins[position]);
change += aux;
total -= coins[position] * aux;
}
position++;

}

printf("%d\n", change);
return (0);
}
