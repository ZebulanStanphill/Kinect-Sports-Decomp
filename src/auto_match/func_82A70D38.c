extern double lbl_82090FB8;
extern double lbl_82090FC0;

/* A table of rows of three doubles: segment start, offset and slope. */
typedef struct Curve_82A70D38 {
    char pad0[0x30];
    double *table;      /* 0x30 */
    unsigned int count; /* 0x34 */
} Curve_82A70D38;

int fn_82A70D38(Curve_82A70D38 *curve, int value)
{
    double *start;
    double *offset;
    double *slope;
    int last;
    int i;

    start = &curve->table[0];
    offset = &curve->table[1];
    slope = &curve->table[2];
    last = curve->count - 1;
    for (i = 0; i < last; i++) {
        if (value >= (int)(*start * lbl_82090FC0) && value <= (int)(start[3] * lbl_82090FC0)) {
            return (int)(((__int64)(int)(*slope * lbl_82090FC0) *
                          (__int64)(value - (int)(*start * lbl_82090FC0))) >>
                         20) -
                   (int)(*offset * lbl_82090FB8);
        }
        start += 3;
        offset += 3;
        slope += 3;
    }
    return 0;
}
