#include "syscall.h"

void print_ascii()
{
	char ch = 31;
	int i = 31;

	for(i; i <= 128; i++)
	{
		if(i == 32)
		{
			PrintInt(i);
			PrintChar(' - ');
			PrintString("[space]");
			PrintChar('\t');
		}

		PrintInt(i);
		PrintChar(' - ');
		PrintChar(ch);
		PrintChar('\t');
		if(i % 6 == 0)
		{
			PrintChar('\n');
		}
		ch += 1;
	}
}

int
main()
{
	PrintString("ASCII table:\n");
	print_ascii();
	PrintString("\n\nValue below 32 and over 127 is unreadable in this program\nExample: number 31 and 128 above");
	PrintString("\n\n");
    Halt();
    return 0;
}
