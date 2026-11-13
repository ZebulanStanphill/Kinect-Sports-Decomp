typedef struct { float x, y; } Vec2_82811980;

Vec2_82811980 fn_82811980(const Vec2_82811980 *a, const Vec2_82811980 *b)
{
    Vec2_82811980 r = *a;
    r.x += b->x;
    r.y += b->y;
    return r;
}
