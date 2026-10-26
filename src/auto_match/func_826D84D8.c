/* The XDK's ppcintrinsics.h defines __lwsync() as this __emit. */
void __emit(unsigned int opcode);
#define __lwsync() __emit(0x7C2004AC)

int fn_826D84D8(char *p)
{
    int v = *(int *)(*(char **)(p + 0x1c) + 0x84);
    __lwsync();
    return v;
}
