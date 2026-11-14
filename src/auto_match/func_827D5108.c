#define __lwsync() __emit(0x7C2004AC)

void fn_827D5108(int *values, int value)
{
    __lwsync();
    values[4] = value;
}
