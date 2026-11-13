typedef struct Vec2_82811B50 {
    float x;
    float y;
} Vec2_82811B50;

Vec2_82811B50 fn_82811B50(const Vec2_82811B50 *v, float s)
{
    Vec2_82811B50 r = *v;
    r.x /= s;
    r.y /= s;
    return r;
}