typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Vertex_82D1ECE8 {
    char pad0[0x10];
    __vector4 pos;           /* 0x10 */
} Vertex_82D1ECE8;

typedef struct Tri_82D1ECE8 {
    int pad0[2];
    Vertex_82D1ECE8 *v[3];   /* 0x08 */
    int pad14[3];
    __vector4 normal;        /* 0x20 */
} Tri_82D1ECE8;

extern unsigned char fn_82D1EB20(void *self, const __vector4 *a, const __vector4 *b, const __vector4 *c,
                                 __vector4 *out, int flags);

int fn_82D1ECE8(void *self, Tri_82D1ECE8 *t)
{
    __vector4 n;

    if (fn_82D1EB20(self, &t->v[0]->pos, &t->v[1]->pos, &t->v[2]->pos, &n, 1)) {
        t->normal = n;
        return 1;
    }
    return 0;
}
