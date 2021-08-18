#include "syscall.h"

int
main()
{
    char ch;
    PrintString("Input a character: ");
    ch = ReadChar();
    PrintString("Inputted character: ");
    PrintChar(ch);
    PrintString("\n");
    Halt();
    return 0;
}
