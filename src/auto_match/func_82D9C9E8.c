double __fsel(double a, double b, double c);

static __forceinline float max2(float x, float y) { return (float)__fsel(x - y, x, y); }

typedef struct Obj_82D9C9E8 {
    char pad[0xc0];
    float x, y, z;
} Obj_82D9C9E8;

void fn_82D9C9E8(Obj_82D9C9E8 *self, const float *m)
{
    float s = max2(max2(m[0], m[5]), m[10]);
    float inv = s > 0.0f ? 1.0f / s : 0.0f;
    self->x = inv;
    self->y = inv;
    self->z = inv;
}
