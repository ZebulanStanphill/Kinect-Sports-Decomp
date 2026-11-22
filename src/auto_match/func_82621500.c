extern double __fctid(double);
extern double __fcfid(double);

typedef struct Angles_82621500 {
    float angles[4];
    char pad10[0x24 - 0x10];
    int wrap;
} Angles_82621500;

void fn_82621500(Angles_82621500 *self, float value)
{
    if (self->wrap) {
        double turns = (float)(value * 0.15915494f);
        self->angles[0] = (float)((turns - (float)__fcfid(__fctid(turns))) * 6.2831855f);
    } else {
        self->angles[0] = value;
    }
}
