typedef struct Vec4_82758170 { float x, y, z, w; } Vec4_82758170;

Vec4_82758170 fn_82758170(const char *self)
{
    const Vec4_82758170 *s = (const Vec4_82758170 *)(self + 0x10);
    Vec4_82758170 r;
    r.x = s->x;
    r.y = s->y;
    r.z = s->z;
    r.w = s->w;
    return r;
}
