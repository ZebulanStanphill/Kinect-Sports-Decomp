/* XDK ppcintrinsics.h: __eieio() is __emit(0x7C0006AC). */
void __emit(unsigned int);
#define __eieio() __emit(0x7C0006AC)

void fn_82653BD0(int object, int value)
{
    *(int *)((object + 0x1ff20000) * 4) = value;
    __eieio();
}
