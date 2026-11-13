typedef struct Obj_82773EC0 {
    char pad0[0x9c4];
    float angle;        /* 0x9c4 */
    char pad9c8[4];
    float m[6];         /* 0x9cc: 2x3 skew matrix */
} Obj_82773EC0;

typedef struct Vec2_82773EC0 {
    float x;
    float y;
} Vec2_82773EC0;

extern double fn_82F67DE8(double x); /* tan */

static __forceinline void Skew_82773EC0(float *m, const Vec2_82773EC0 *s)
{
    float tx = (float)fn_82F67DE8(s->x);
    float ty = (float)fn_82F67DE8(s->y);

    m[1] = ty;
    m[3] = tx;
    m[0] = 1.0f;
    m[2] = 0.0f;
    m[4] = 1.0f;
    m[5] = 0.0f;
}

void fn_82773EC0(Obj_82773EC0 *self, float angle)
{
    Vec2_82773EC0 skew;

    self->angle = angle;
    skew.x = 0.0f;
    skew.y = -angle;
    Skew_82773EC0(self->m, &skew);
}
