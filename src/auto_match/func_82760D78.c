typedef struct Vec4_82760D78 { float x, y, z, w; } Vec4_82760D78;

Vec4_82760D78 fn_82760D78(const char *self)
{
    const Vec4_82760D78 *s = (const Vec4_82760D78 *)(self + 0x40);
    Vec4_82760D78 r;
    r.x = s->x;
    r.y = s->y;
    r.z = s->z;
    r.w = s->w;
    return r;
}
