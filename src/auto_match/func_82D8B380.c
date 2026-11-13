double __fsel(double a, double b, double c);

static __forceinline float min2(float x, float y) { return (float)__fsel(x - y, y, x); }

typedef struct Obj_82D8B380 {
    char pad[0x4c];
    float value;
} Obj_82D8B380;

void fn_82D8B380(Obj_82D8B380 *self, const float *v)
{
    float s = min2(min2(v[0], v[1]), v[2]);
    if (s < 0.5f) {
        self->value = s * 0.2f;
        return;
    }
    self->value = 0.1f;
}
