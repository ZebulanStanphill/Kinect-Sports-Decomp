typedef struct Sub_83002660 {
    char pad0[0x1c];
    float x;
    float y;
} Sub_83002660;

struct Obj_83002660;

typedef struct Vtbl_83002660 {
    void *slots[15];
    void (*fn3c)(struct Obj_83002660 *self, int a, float v, int b, int c);
} Vtbl_83002660;

typedef struct Obj_83002660 {
    Vtbl_83002660 *vt;
    char pad4[0x38];
    unsigned char f3c;
    char pad3d[0x2b];
    Sub_83002660 *f68;
} Obj_83002660;

extern unsigned char fn_83007888(Obj_83002660 *self, int n);
extern unsigned char fn_83001FE8(Obj_83002660 *self);

void fn_83002660(Obj_83002660 *self, float a, float b, float c)
{
    if (fn_83007888(self, 4) != 0) {
        self->vt->fn3c(self, 3, a - (float)self->f3c, 0, 0);
    }
    self->f3c = (unsigned char)a;
    if ((b != 0.0f || c != 0.0f || self->f68 != 0) && fn_83001FE8(self) != 0) {
        self->f68->x = b;
        self->f68->y = c;
    }
}
