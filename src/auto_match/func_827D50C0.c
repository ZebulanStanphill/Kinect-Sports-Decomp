#define __lwsync() __emit(0x7C2004AC)

void fn_827D50C0(int *values, int value)
{
    __lwsync();
    values[3] = value;
}
