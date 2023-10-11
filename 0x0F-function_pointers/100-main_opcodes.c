#include <stdio.h>
#include <stdlib.h>
#include <udis86.h>

/**
  * main - Disassembles binary machine code using the udis86.
  * @argc: The number of command-line arguments.
  * @argv:  array of strings containing the command-line.
  *
  * Return: 0 if successful, 2 if an error occurs.
  */
int main(int argc, char *argv[])
{
	ud_t ud_obj;
	int val = 0, i = 0;

	if (argc == 2)
	{
		val = atoi(argv[1]);

		if (val < 0)
		{
			printf("Error\n");
			exit(2);
		}

		ud_unit(&ud_obj);
		ud_set_input_buffer(&ud_obj, argv[1], val);
		ud_set_mode(&ud_obj, 64);
		ud_set_syntax(&ud_obj, UD_SYN_INTEL);

		while (ud_disassemble(&ud_obj))
		{
			printf("\t%s\n", ud_insn_hex(&ud_obj));
		}
	}

	return (0);
}
