typedef struct { float x, y; } Vec2_82811B00;

Vec2_82811B00 fn_82811B00(void *unused, const Vec2_82811B00 *v, float s)
{
    Vec2_82811B00 r = *v;
    r.x *= s;
    r.y *= s;
    return r;
}
