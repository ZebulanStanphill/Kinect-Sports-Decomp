/* The XDK's ppcintrinsics.h defines __sync() as this __emit. */
#define __sync() __emit(0x7C0004AC)

void fn_82657F68(char *p, int v)
{
    *(int *)(p + 0x359c) = v;
    __sync();
}
