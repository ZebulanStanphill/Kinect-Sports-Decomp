typedef struct Vec4_82706AF8 { float x, y, z, w; } Vec4_82706AF8;

Vec4_82706AF8 fn_82706AF8(const char *self)
{
    const Vec4_82706AF8 *s = (const Vec4_82706AF8 *)(self + 0xd8);
    Vec4_82706AF8 r;
    r.x = s->x;
    r.y = s->y;
    r.z = s->z;
    r.w = s->w;
    return r;
}
