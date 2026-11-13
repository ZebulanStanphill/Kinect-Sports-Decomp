/* Havok: walks the expanding polytope (up to 10 triangles, fn_82DE3210 gives the next one) until the
   origin's barycentric coordinates in the triangle (fn_82D76578) are all >= 0, then stores the
   triangle's support points as the final simplex and writes the separating normal (negated),
   the witness point interpolated from the A points and the negated distance. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vxor(__vector4 a, __vector4 b);

extern const __vector4 lbl_8209AB20;   /* sign mask */
extern char lbl_8323B1A0[];

typedef struct SupportVertex_82DDCBA8 {
    __vector4 position;                     /* 0x00 */
    __vector4 pointA;                       /* 0x10 */
    __vector4 pointB;                       /* 0x20 */
} SupportVertex_82DDCBA8;

typedef struct Vertex_82DDCBA8 {
    const SupportVertex_82DDCBA8 *support;  /* 0x00 */
    char pad4[0xc];
} Vertex_82DDCBA8;

typedef struct Triangle_82DDCBA8 {
    __vector4 normal;                       /* 0x00 */
    Vertex_82DDCBA8 vertex[3];              /* 0x10 */
    float distance;                         /* 0x40 */
} Triangle_82DDCBA8;

typedef struct Simplex_82DDCBA8 {
    char pad0[0x60];
    __vector4 *pointsA;                     /* 0x60 */
    __vector4 *pointsB;                     /* 0x64 */
    __vector4 *vertices;                    /* 0x68 */
    int numVertices;                        /* 0x6c */
} Simplex_82DDCBA8;

typedef struct Output_82DDCBA8 {
    __vector4 normal;                       /* 0x00 */
    __vector4 point;                        /* 0x10 */
    float distance;                         /* 0x20 */
} Output_82DDCBA8;

void fn_82D76578(void *util, const __vector4 *a, const __vector4 *b, const __vector4 *c, float *barycentric);
Triangle_82DDCBA8 *fn_82DE3210(void *polytope, Triangle_82DDCBA8 *tri);

static __forceinline __vector4 Replicate(const float *p)
{
    return __vspltw(__lvlx(p, 0), 0);
}

void fn_82DDCBA8(Simplex_82DDCBA8 *self, void *polytope, Triangle_82DDCBA8 *tri, Output_82DDCBA8 *out)
{
    float bary[4];
    __vector4 p;
    int i;

    for (i = 0; i < 10; i++) {
        self->vertices[0] = tri->vertex[0].support->position;
        self->vertices[1] = tri->vertex[1].support->position;
        self->vertices[2] = tri->vertex[2].support->position;
        fn_82D76578(lbl_8323B1A0, &self->vertices[0], &self->vertices[1], &self->vertices[2], bary);
        if (bary[0] >= 0.0f && bary[1] >= 0.0f && bary[2] >= 0.0f)
            break;
        tri = fn_82DE3210(polytope, tri);
    }
    {
        const SupportVertex_82DDCBA8 *s0 = tri->vertex[0].support;
        self->pointsA[0] = s0->pointA;
        self->pointsB[0] = s0->pointB;
    }
    {
        const SupportVertex_82DDCBA8 *s1 = tri->vertex[1].support;
        self->pointsA[1] = s1->pointA;
        self->pointsB[1] = s1->pointB;
    }
    {
        const SupportVertex_82DDCBA8 *s2 = tri->vertex[2].support;
        self->pointsA[2] = s2->pointA;
        self->pointsB[2] = s2->pointB;
    }
    self->numVertices = 3;
    p = __vmulfp(self->pointsA[0], Replicate(&bary[0]));
    p = __vmaddfp(self->pointsA[1], Replicate(&bary[1]), p);
    p = __vmaddfp(self->pointsA[2], Replicate(&bary[2]), p);
    out->point = p;
    out->distance = -tri->distance;
    out->normal = __vxor(tri->normal, lbl_8209AB20);
}
