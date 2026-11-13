typedef struct Vec4_827642C0 { float x, y, z, w; } Vec4_827642C0;

Vec4_827642C0 fn_827642C0(const char *self)
{
    const Vec4_827642C0 *s = (const Vec4_827642C0 *)(self + 0x6c);
    Vec4_827642C0 r;
    r.x = s->x;
    r.y = s->y;
    r.z = s->z;
    r.w = s->w;
    return r;
}
