void __emit(unsigned int opcode);
#define __sync() __emit(0x7C0004AC)

void fn_82657F78(char *p)
{
    *(int *)(p + 0x359c) = 0;
    __sync();
}
