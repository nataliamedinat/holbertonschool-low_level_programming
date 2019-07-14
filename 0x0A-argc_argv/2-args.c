#include <stdio.h>
/**
  * main - prints all arguments ir receives
  * @argc: The count of the arguments
  * @argv: The vector of arguments
  *
  * Return:0
  */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);

	}
		return (0);


}

