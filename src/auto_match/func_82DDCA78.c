typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vmrghw(__vector4 a, __vector4 b);
__vector4 __vcmpgtfp(__vector4 a, __vector4 b);
__vector4 __vand(__vector4 a, __vector4 b);
__vector4 __vcmpequwR(__vector4 a, __vector4 b, unsigned int *cr);

extern const __vector4 lbl_82132D00;
extern const __vector4 lbl_8323B230[16];

typedef struct Vertex_82DDCA78 {
    const __vector4 *position;              /* 0x00 */
    char pad4[0xc];
} Vertex_82DDCA78;

typedef struct Triangle_82DDCA78 {
    __vector4 normal;                       /* 0x00 */
    Vertex_82DDCA78 vertex[3];              /* 0x10 */
} Triangle_82DDCA78;

typedef struct Context_82DDCA78 {
    char pad0[0xc];
    int capacity;                           /* 0x0c */
    int used;                               /* 0x10 */
} Context_82DDCA78;

typedef struct Query_82DDCA78 {
    char pad0[0x40];
    __vector4 tolerance;                    /* 0x40 */
} Query_82DDCA78;

int fn_82DDDF50(Context_82DDCA78 *ctx, Triangle_82DDCA78 *tri, const __vector4 *point, int *count, int *index);
int fn_82DE2D40(Context_82DDCA78 *ctx, int count, int index, const __vector4 *point);

static __forceinline __vector4 Set(__vector4 x, __vector4 y, __vector4 z, __vector4 w)
{
    __vector4 xz = __vmrghw(x, z);
    __vector4 yw = __vmrghw(y, w);
    return __vmrghw(xz, yw);
}

static __forceinline int AnyIsSet(__vector4 c, int mask)
{
    unsigned int cr;
    __vcmpequwR(__vand(c, lbl_8323B230[mask]), __vspltisw(0), &cr);
    return (int)(~cr & 0x80);
}

int fn_82DDCA78(const Query_82DDCA78 *self, Context_82DDCA78 *ctx, Triangle_82DDCA78 *tri,
                const __vector4 *point, int *result)
{
    __vector4 e[3];
    __vector4 d0, d1, d2, dists;
    int count;
    int index;
    int i;

    for (i = 0; i < 3; i++)
        e[i] = __vsubfp(*point, *tri->vertex[i].position);
    d0 = __vmsum3fp(e[0], tri->normal);
    d1 = __vmsum3fp(e[1], tri->normal);
    d2 = __vmsum3fp(e[2], tri->normal);
    dists = Set(d0, d1, d2, lbl_82132D00);
    if (AnyIsSet(__vcmpgtfp(self->tolerance, dists), 14)) {
        *result = 0;
        return 1;
    }
    count = 0;
    if (fn_82DDDF50(ctx, tri, point, &count, &index) != 0) {
        *result = 3;
        return 1;
    }
    if (ctx->capacity - ctx->used + 100 < count) {
        *result = 2;
        return 1;
    }
    if (fn_82DE2D40(ctx, count, index, point) != 0) {
        *result = 3;
        return 1;
    }
    return 0;
}
