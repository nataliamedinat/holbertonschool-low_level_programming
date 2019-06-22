  #include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int var;

var  = '0';

while (var <= '9')
{
putchar(var);
var++;
}
 
var = 'a';

while (var <= 'f')
{
putchar(var);
var++;
}

putchar('\n');
return (0);
}

