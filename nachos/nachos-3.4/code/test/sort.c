#include "syscall.h"

int A[101];

int
main()
{
	int n = 0;
	int i = 0;
	int j = 0;
	int tmp = 0;

    PrintString("Input size of array: ");
    n = ReadInt();
    if(n > 100)
    {
    	PrintString("Array must have size below or equal 100\nEnding program....\n");
    	Halt();
    	return 0;
    }

    PrintString("\nInput array elements:\n");
    for(i; i < n; i++)
    {
    	PrintString("element - ");
    	PrintInt(i + 1);
    	PrintString(" : ");
    	A[i] = ReadInt();
    }

	for(i = 0; i < n-1; i++)
	{
		for(j = 0; j < n-i-1; j++)
		{
			if(A[j] > A[j+1])
			{
				tmp = A[j];
				A[j] = A[j+1];
				A[j+1] = tmp;
			}
		}
	}

    PrintString("\nSorted array: ");
	for(i = 0; i < n; i++)
	{
		PrintInt(A[i]);
		PrintChar(' ');
	}
	PrintChar('\n');

    Halt();

    return 0;
}
