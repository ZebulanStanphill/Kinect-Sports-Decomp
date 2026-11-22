typedef struct Range_824B4C48 {
    float lo;
    float hi;
    float z;
} Range_824B4C48;

typedef struct Config_824B4C48 {
    int key;
    float lo;
    float hi;
} Config_824B4C48;

typedef struct Obj_824B4C48 {
    char pad[0x3c];
    int alt; /* 0x3c */
    char pad40[0x48 - 0x40];
    float value;          /* 0x48 */
    Range_824B4C48 range; /* 0x4c */
} Obj_824B4C48;

extern Config_824B4C48 lbl_831C4848;
extern void fn_824B4798(Range_824B4C48 *out, void *src, int first, int second, int key, int mode);
extern float fn_82539560(float v, float inLo, float inHi, float outLo, float outHi);

float fn_824B4C48(Obj_824B4C48 *self, void *src)
{
    float largest;

    fn_824B4798(&self->range, src, self->alt ? 6 : 10, self->alt ? 5 : 9, lbl_831C4848.key, 1);
    largest = self->range.lo > self->range.hi ? self->range.lo : self->range.hi;
    self->value = fn_82539560(largest * 57.295776f, lbl_831C4848.lo, lbl_831C4848.hi, 0.0f, 1.0f);
    return 0.0f;
}
