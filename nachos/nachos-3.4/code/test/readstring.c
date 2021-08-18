#include "syscall.h"

int
main()
{
    char buffer[200];
    PrintString("Input a string: ");
    ReadString(buffer, 200);
    Halt();
    return 0;
}
