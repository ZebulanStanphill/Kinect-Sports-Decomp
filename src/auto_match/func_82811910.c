typedef struct Vec2_82811910 { float x; float y; } Vec2_82811910;

extern float fn_82809D40(float x, float y);

float fn_82811910(Vec2_82811910 *v)
{
    if (v->x == 0.0f && v->y == 0.0f)
        return 0.0f;
    return fn_82809D40(v->x, v->y);
}
