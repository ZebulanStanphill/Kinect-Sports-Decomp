/* 2D normalise: out = v / |v| (fn_8280A550 is 1 / sqrt). */
typedef struct Vec2_82811C68 {
    float x, y;
} Vec2_82811C68;

extern float fn_8280A550(float x);

void fn_82811C68(const Vec2_82811C68 *v, Vec2_82811C68 *out)
{
    float inv = fn_8280A550(v->x * v->x + v->y * v->y);
    out->x = v->x * inv;
    out->y = inv * v->y;
}
