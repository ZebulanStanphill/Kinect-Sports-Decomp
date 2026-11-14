#define __lwsync() __emit(0x7C2004AC)

void fn_827D5078(int *values, int value)
{
    __lwsync();
    values[0] = value;
}
