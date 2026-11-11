typedef struct Range_82FF4508 {
    short min;
    short max;
} Range_82FF4508;

extern int fn_82F65350(void);
extern double lbl_8217BB90;

short fn_82FF4508(Range_82FF4508 *r)
{
    short span;
    short offset;

    span = r->max - r->min;
    offset = 0;
    if (span != 0) {
        offset = (short)(span * (fn_82F65350() * lbl_8217BB90) + 0.5);
    }
    return r->min + offset;
}
