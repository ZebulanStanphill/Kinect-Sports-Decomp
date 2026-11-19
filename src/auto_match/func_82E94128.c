/* Compares a new rate with the current one; a ratio between 0.1 and 10 is stored and flagged. */

typedef struct Clock_82E94128 {
    char pad0[0x77a8];
    int synced; /* 0x77a8 */
    char pad77ac[0x20];
    int denominator; /* 0x77cc */
    char pad77d0[8];
    int numerator; /* 0x77d8 */
    char pad77dc[4];
    double ratio; /* 0x77e0 */
    char pad77e8[8];
    int ratioValid; /* 0x77f0 */
} Clock_82E94128;

extern const double lbl_82015610;
extern double fn_82F65E20(double x);

void fn_82E94128(Clock_82E94128 *self, int numerator, int denominator)
{
    double ratio;

    ratio = fn_82F65E20((double)numerator / (double)denominator) /
            fn_82F65E20((double)self->numerator / (double)self->denominator);
    if (ratio > lbl_82015610 && ratio < 10.0) {
        self->ratio = ratio;
        self->ratioValid = 1;
        self->synced = 0;
    }
}
