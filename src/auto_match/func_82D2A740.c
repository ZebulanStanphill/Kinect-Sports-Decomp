typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Vertex_82D2A740 {
    char pad0[0x10];
    __vector4 pos;              /* 0x10 */
} Vertex_82D2A740;

typedef struct Triangle_82D2A740 {
    char pad0[0x8];
    Vertex_82D2A740 *v[3];      /* 0x08 */
} Triangle_82D2A740;

typedef struct Hit_82D2A740 {
    char pad0[0x20];
    Triangle_82D2A740 *triangle;    /* 0x20 */
} Hit_82D2A740;

typedef struct Self_82D2A740 {
    char pad0[0x10];
    __vector4 point;            /* 0x10 */
    float closest;              /* 0x20 */
    char pad24[0xc];
    __vector4 a;                /* 0x30 */
    __vector4 b;                /* 0x40 */
    Triangle_82D2A740 *triangle;    /* 0x50 */
} Self_82D2A740;

extern float fn_82D1CE60(const __vector4 *p, const __vector4 *v0, const __vector4 *v1, const __vector4 *v2,
                         __vector4 *outA, __vector4 *outB);

float fn_82D2A740(Self_82D2A740 *self, Hit_82D2A740 *hit)
{
    Triangle_82D2A740 *triangle = hit->triangle;
    __vector4 a;
    __vector4 b;
    float d;

    d = fn_82D1CE60(&self->point, &triangle->v[0]->pos, &triangle->v[1]->pos, &triangle->v[2]->pos, &a, &b);
    if (d < self->closest) {
        self->closest = d;
        self->triangle = triangle;
        self->a = a;
        self->b = b;
    }
    return 1.0f;
}
