#include "syscall.h"

int
main()
{
	char str[200];
	PrintString("Input a string: ");
	ReadString(str, 200);
	PrintString("Inputted string: ");	
	PrintString(str);
        PrintString("\n");
	Halt();
	return 0;
}
