typedef struct Vec2_82811BB0 { float x, y; } Vec2_82811BB0;
extern float fn_82809CB0(float v);

int fn_82811BB0(const Vec2_82811BB0 *v)
{
    return fn_82809CB0(v->x * v->x + v->y * v->y - 1.0f) < 0.00001f;
}
