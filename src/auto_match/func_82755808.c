typedef struct Vec2_82755808 {
    float x;
    float y;
} Vec2_82755808;

float fn_82755808(Vec2_82755808 *a, Vec2_82755808 *b, Vec2_82755808 *p)
{
    float dx = b->x - a->x;
    float dy = b->y - a->y;

    return (dx != 0.0f || dy != 0.0f) ? ((p->x - a->x) * dx + (p->y - a->y) * dy) / (dx * dx + dy * dy) : 0.0f;
}
