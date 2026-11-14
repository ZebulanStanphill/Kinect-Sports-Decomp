// Centre of three referenced points: (a + b + c) * (1/3), the third splatted with
// __lvlx/__vspltw (hkSimdReal) straight from its pooled constant.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *p, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);

typedef struct Vertex_82D1EA20 {
    char pad00[0x10];
    __vector4 position;
} Vertex_82D1EA20;

typedef struct Triangle_82D1EA20 {
    char pad00[0x8];
    Vertex_82D1EA20 *vertices[3];
} Triangle_82D1EA20;

static __forceinline __vector4 SimdReal(float r)
{
    return __vspltw(__lvlx(&r, 0), 0);
}

void fn_82D1EA20(__vector4 *out, void *unused, const Triangle_82D1EA20 *tri)
{
    __vector4 sum = __vaddfp(tri->vertices[0]->position, tri->vertices[1]->position);
    sum = __vaddfp(sum, tri->vertices[2]->position);
    *out = __vmulfp(sum, SimdReal(1.0f / 3.0f));
}
