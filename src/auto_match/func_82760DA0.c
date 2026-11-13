typedef struct Vec4_82760DA0 { float x, y, z, w; } Vec4_82760DA0;

static __forceinline void Vec4_82760DA0_Set(Vec4_82760DA0 *d, float x, float y, float z, float w)
{
    d->x = x;
    d->y = y;
    d->z = z;
    d->w = w;
}

void fn_82760DA0(char *self, const Vec4_82760DA0 *v)
{
    Vec4_82760DA0_Set((Vec4_82760DA0 *)(self + 0x40), v->x, v->y, v->z, v->w);
}
