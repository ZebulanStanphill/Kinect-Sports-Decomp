typedef union Key_82ACC490 { unsigned int bits; struct { unsigned int high : 28; unsigned int low : 4; } f; } Key_82ACC490;
extern unsigned int fn_82ACACA8(void *, unsigned int, unsigned int);
extern void fn_82ACBBF8(void *, unsigned int);
void fn_82ACC490(char *self, unsigned int key)
{
    unsigned int index = (key >> 2) & 0x3ffffffc;
    unsigned int mask = fn_82ACACA8(self + 4, index, index + 3);
    Key_82ACC490 result;
    result.bits = (key & ~mask) & 15;
    if (result.bits != 0) {
        result.f.high = key >> 4;
        fn_82ACBBF8(self, result.bits);
    }
}
