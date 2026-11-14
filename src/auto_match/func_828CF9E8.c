extern float lbl_8202676C;
extern float lbl_8202677C;

typedef struct Obj_828CF9E8 {
    char pad0[0xa6];
    unsigned short value;   /* 0xa6 */
} Obj_828CF9E8;

float fn_828CF9E8(Obj_828CF9E8 *self)
{
    float v = ((float)self->value - lbl_8202676C) * lbl_8202677C;

    if (v > 1.0f)
        v = 1.0f;
    else if (v < 0.0f)
        v = 0.0f;
    return v;
}
