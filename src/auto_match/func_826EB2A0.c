typedef struct Vec2_826EB2A0 {
    float x;
    float y;
} Vec2_826EB2A0;

extern const float lbl_8200D89C;
extern const float lbl_8200D8A0;
double fabs(double);

void fn_826EB2A0(void *self, Vec2_826EB2A0 *v)
{
    float hi = lbl_8200D8A0;
    float lo = lbl_8200D89C;
    if (fabs(v->x) > hi)
        v->x = v->x > hi ? hi : lo;
    if (fabs(v->y) > hi)
        v->y = v->y > hi ? hi : lo;
}
