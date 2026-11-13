typedef struct Vec4_827642E8 { float x, y, z, w; } Vec4_827642E8;

static __forceinline void Vec4_827642E8_Set(Vec4_827642E8 *d, float x, float y, float z, float w)
{
    d->x = x;
    d->y = y;
    d->z = z;
    d->w = w;
}

void fn_827642E8(char *self, const Vec4_827642E8 *v)
{
    Vec4_827642E8_Set((Vec4_827642E8 *)(self + 0x6c), v->x, v->y, v->z, v->w);
}
