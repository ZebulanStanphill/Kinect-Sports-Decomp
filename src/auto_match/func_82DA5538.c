double __fsel(double a, double b, double c);

static __forceinline float max2(float x, float y) { return (float)__fsel(x - y, x, y); }

typedef struct Obj_82DA5538 {
    char pad[0xc0];
    float x, y, z;
} Obj_82DA5538;

void fn_82DA5538(Obj_82DA5538 *self, const float *m)
{
    float s = max2(max2(m[0], m[5]), m[10]);
    float inv = s > 0.0f ? 1.0f / s : 0.0f;
    self->x = inv;
    self->y = inv;
    self->z = inv;
}
