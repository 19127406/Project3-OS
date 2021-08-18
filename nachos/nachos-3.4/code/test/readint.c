#include"syscall.h"

int
main()
{
    int number;
    PrintString("Input a number: ");
    number = ReadInt();
    PrintString("You inputted number ");
    PrintInt(number);
    PrintString("\n");
    Halt();
    return 0;
}
