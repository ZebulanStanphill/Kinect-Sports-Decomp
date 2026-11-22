extern double __fctid(double);
extern double __fcfid(double);

typedef struct Angle_826214A8 {
    float value;
    float current;
    int pad8[7];
    int wrap;
} Angle_826214A8;

void fn_826214A8(Angle_826214A8 *self, float angle, int apply)
{
    if (self->wrap != 0) {
        double turns = (float)(angle * 0.15915494f);
        self->current = (float)((turns - (float)__fcfid(__fctid(turns))) * 6.2831855f);
    } else {
        self->current = angle;
    }
    if (apply != 0) {
        self->value = self->current;
    }
}
