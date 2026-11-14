void __emit(unsigned int);
#define __eieio() __emit(0x7C0006AC)

void fn_826535B8(void)
{
    *(unsigned int *)0x7fc83214 = 7;
    __eieio();
    *(unsigned int *)0x7fc83408 = 0x800;
    __eieio();
}
