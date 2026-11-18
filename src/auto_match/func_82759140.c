typedef struct Values_82759140 {
    float w;        /* 0x0 */
    float x;        /* 0x4 */
    float y;        /* 0x8 */
    float wSquared; /* 0xc */
    float ratio;    /* 0x10 */
} Values_82759140;

void fn_82759140(Values_82759140 *v)
{
    float w = v->w;
    float wSquared = w * w;
    float denominator;
    v->wSquared = wSquared;
    denominator = wSquared - (v->x * v->x + v->y * v->y);
    if (denominator == 0.0f) {
        if (v->x != 0.0f) {
            if (v->x < 0.0f) {
                v->x = v->x + 1.0f;
            } else {
                v->x = v->x - 1.0f;
            }
        }
        if (v->y != 0.0f) {
            if (v->y < 0.0f) {
                v->y = v->y + 1.0f;
            } else {
                v->y = v->y - 1.0f;
            }
        }
        denominator = wSquared - (v->x * v->x + v->y * v->y);
    }
    v->ratio = w / denominator;
}
