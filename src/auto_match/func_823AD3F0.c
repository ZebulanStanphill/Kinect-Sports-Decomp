typedef struct Obj_823AD3F0 {
    char pad0[0x48];
    float t;
    char pad4c[4];
    int mode50;
    int mode54;
} Obj_823AD3F0;

extern const float lbl_831D2C60[0x3a];

float fn_823AD3F0(Obj_823AD3F0 *self)
{
    float hi;
    float lo;

    if (self->mode50 != 0) {
        hi = lbl_831D2C60[54];
    } else if (self->mode54 != 0) {
        hi = lbl_831D2C60[38];
    } else {
        hi = lbl_831D2C60[22];
    }
    if (self->mode50 != 0) {
        lo = lbl_831D2C60[46];
    } else if (self->mode54 != 0) {
        lo = lbl_831D2C60[30];
    } else {
        lo = lbl_831D2C60[14];
    }
    return (hi - lo) * self->t + lo;
}
