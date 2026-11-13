double __fsel(double a, double b, double c);

static __forceinline float max2(float x, float y) { return (float)__fsel(x - y, x, y); }

typedef struct Obj_82DE5570 {
    char pad[0x50];
    float a;
    char pad2[0x10];
    float b;
    char pad3[0x10];
    float c;
} Obj_82DE5570;

void fn_82DE5570(float scale, Obj_82DE5570 *self)
{
    float a = self->a, b = self->b, c = self->c;
    float t = max2(max2(a, b), c) / scale;
    self->a = max2(a, t);
    self->b = max2(b, t);
    self->c = max2(c, t);
}
