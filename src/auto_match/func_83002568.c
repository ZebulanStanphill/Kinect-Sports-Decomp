typedef struct Sub_83002568 {
    char pad0[0x14];
    float x;
    float y;
} Sub_83002568;

struct Obj_83002568;

typedef struct Vtbl_83002568 {
    void *slots[15];
    void (*fn3c)(struct Obj_83002568 *self, int a, float v, int b, int c);
} Vtbl_83002568;

typedef struct Obj_83002568 {
    Vtbl_83002568 *vt;
    char pad4[0x2C];
    short f30;
    char pad32[0x36];
    Sub_83002568 *f68;
} Obj_83002568;

extern unsigned char fn_83007888(Obj_83002568 *self, int n);
extern unsigned char fn_83001FE8(Obj_83002568 *self);

void fn_83002568(Obj_83002568 *self, float a, float b, float c)
{
    if (fn_83007888(self, 2) != 0) {
        self->vt->fn3c(self, 2, a - (float)self->f30, 0, 0);
    }
    self->f30 = (short)a;
    if ((b != 0.0f || c != 0.0f || self->f68 != 0) && fn_83001FE8(self) != 0) {
        self->f68->x = b;
        self->f68->y = c;
    }
}
