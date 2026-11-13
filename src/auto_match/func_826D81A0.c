typedef struct Vec4_826D81A0 { float x, y, z, w; } Vec4_826D81A0;

Vec4_826D81A0 fn_826D81A0(const char *self)
{
    const Vec4_826D81A0 *s = (const Vec4_826D81A0 *)(self + 0x14);
    Vec4_826D81A0 r;
    r.x = s->x;
    r.y = s->y;
    r.z = s->z;
    r.w = s->w;
    return r;
}
