typedef struct Vec4_82706B20 { float x, y, z, w; } Vec4_82706B20;

static __forceinline void Vec4_82706B20_Set(Vec4_82706B20 *d, float x, float y, float z, float w)
{
    d->x = x;
    d->y = y;
    d->z = z;
    d->w = w;
}

void fn_82706B20(char *self, const Vec4_82706B20 *v)
{
    Vec4_82706B20_Set((Vec4_82706B20 *)(self + 0xd8), v->x, v->y, v->z, v->w);
}
