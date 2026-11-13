typedef struct { float x, y; } Vec2_828119D8;

Vec2_828119D8 fn_828119D8(const Vec2_828119D8 *a, const Vec2_828119D8 *b)
{
    Vec2_828119D8 r = *a;
    r.x -= b->x;
    r.y -= b->y;
    return r;
}
