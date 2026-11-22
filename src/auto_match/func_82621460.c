extern double __fctid(double);
extern double __fcfid(double);

typedef struct Angles_82621460 {
    float angles[4];
    char pad10[0x24 - 0x10];
    int wrap;
} Angles_82621460;

void fn_82621460(Angles_82621460 *self, float value)
{
    if (self->wrap) {
        double turns = (float)(value * 0.15915494f);
        self->angles[2] = (float)((turns - (float)__fcfid(__fctid(turns))) * 6.2831855f);
    } else {
        self->angles[2] = value;
    }
}
