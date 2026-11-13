typedef struct Vec2_82811C08 { float x, y; } Vec2_82811C08;
extern float fn_82809CB0(float v);

int fn_82811C08(const Vec2_82811C08 *v)
{
    return fn_82809CB0(v->x * v->x + v->y * v->y) < 0.00001f;
}
