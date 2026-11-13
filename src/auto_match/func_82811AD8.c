typedef struct { float x, y; } Vec2_82811AD8;

Vec2_82811AD8 fn_82811AD8(const Vec2_82811AD8 *v, float s)
{
    Vec2_82811AD8 r = *v;
    r.x *= s;
    r.y *= s;
    return r;
}
