void __emit(unsigned int opcode);
#define __eieio() __emit(0x7C0006AC)

void fn_82647578(char *p)
{
    __eieio();
    *(int *)(p + 0x2a88) = 0;
}
