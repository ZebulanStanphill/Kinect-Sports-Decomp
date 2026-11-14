typedef struct Value_824D77E8 Value_824D77E8;
typedef struct Value_824D77E8_vt {
    void *slots[5];
    float (*get)(Value_824D77E8 *self);
} Value_824D77E8_vt;
struct Value_824D77E8 {
    Value_824D77E8_vt *vt;
};

typedef struct Obj_824D77E8 {
    char pad0[0x108];
    Value_824D77E8 *a1;   /* 0x108 */
    Value_824D77E8 *a0;   /* 0x10c */
    Value_824D77E8 *b1;   /* 0x110 */
    Value_824D77E8 *b0;   /* 0x114 */
} Obj_824D77E8;

extern int fn_824CCFC8(Obj_824D77E8 *self);

float fn_824D77E8(Obj_824D77E8 *self, int which)
{
    Value_824D77E8 *a = which != 0 ? self->a1 : self->a0;
    Value_824D77E8 *b = which != 0 ? self->b1 : self->b0;

    if (a != 0 && b != 0 && fn_824CCFC8(self) != 0) {
        return a->vt->get(a) - b->vt->get(b);
    }
    return 0.0f;
}
