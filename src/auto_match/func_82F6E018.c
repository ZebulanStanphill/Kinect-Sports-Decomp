extern int fn_82F71860(double x);
extern double lbl_82005710;

int fn_82F6E018(double x)
{
    unsigned short hi = *(unsigned short *)&x;
    unsigned int exponent = hi & 0x7ff0;
    unsigned int sign;
    int kind;

    if (exponent == 0x7ff0) {
        switch (fn_82F71860(x)) {
        case 1:
            return 0x200;
        case 2:
            return 0x4;
        case 3:
            return 2;
        default:
            return 1;
        }
    }
    sign = hi & 0x8000;
    if (exponent == 0 && ((*(unsigned int *)&x & 0xfffff) != 0 || ((unsigned int *)&x)[1] != 0)) {
        return sign ? 0x10 : 0x80;
    }
    if (x == lbl_82005710) {
        return sign ? 0x20 : 0x40;
    }
    return sign ? 0x8 : 0x100;
}
