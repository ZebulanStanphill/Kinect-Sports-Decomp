typedef struct Vec2_82811B28 {
    float x;
    float y;
} Vec2_82811B28;

void fn_82811B28(Vec2_82811B28 *v, float s)
{
    float inv = 1.0f / s;
    v->x *= inv;
    v->y *= inv;
}
