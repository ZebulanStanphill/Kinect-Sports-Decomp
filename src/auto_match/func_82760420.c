typedef struct Vec4_82760420 { float x, y, z, w; } Vec4_82760420;

Vec4_82760420 fn_82760420(const char *self)
{
    const Vec4_82760420 *s = (const Vec4_82760420 *)(self + 0x4);
    Vec4_82760420 r;
    r.x = s->x;
    r.y = s->y;
    r.z = s->z;
    r.w = s->w;
    return r;
}
