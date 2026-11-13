double __fsel(double a, double b, double c);

static __forceinline float min2(float x, float y) { return (float)__fsel(x - y, y, x); }

typedef struct Obj_82DA5580 {
    char pad[0xc0];
    float x, y, z;
} Obj_82DA5580;

void fn_82DA5580(Obj_82DA5580 *self, const float *m)
{
    float t = min2(min2(m[0], m[5]), m[10]);
    self->x = t;
    self->y = t;
    self->z = t;
}
