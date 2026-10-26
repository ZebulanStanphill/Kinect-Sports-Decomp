/* The XDK's ppcintrinsics.h defines __lwsync() as this __emit. */
void __emit(unsigned int opcode);
#define __lwsync() __emit(0x7C2004AC)

void fn_826D8580(char *p, int a, int b)
{
    *(int *)(p + 0x88) = b;
    __lwsync();
    *(int *)(p + 0x84) = a;
}
