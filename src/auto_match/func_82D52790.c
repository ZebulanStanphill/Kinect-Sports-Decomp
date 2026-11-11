// Havok hkpTriangleShape::convertVertexIdsToVertices(const hkpVertexId *ids, int numIds,
// hkcdVertex *verticesOut) (vtable ??_7hkpTriangleShape@@6B@ +0x3c): each id selects a triangle
// vertex (lbl_83181D0C) and an extrusion sign (lbl_83181CE0); the id is stored in w as an int24.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);

typedef struct TriangleShape_82D52790 {
    char pad0[0x20];
    __vector4 vertices[3];          // 0x20
    __vector4 extrusion;            // 0x50
} TriangleShape_82D52790;

typedef union Vertex_82D52790 {
    __vector4 v;
    int i[4];
} Vertex_82D52790;

extern const int lbl_83181D0C[];        // vertex index per id
extern const float lbl_83181CE0[];      // extrusion sign per id

static __forceinline __vector4 SimdReal(const float *value)
{
    __vector4 v = __lvlx(value, 0);
    return __vspltw(v, 0);
}

static __forceinline void AddMul4(__vector4 *self, __vector4 r, const __vector4 *a)
{
    *self = __vmaddfp(*a, r, *self);
}

static __forceinline void SetInt24W(Vertex_82D52790 *self, int value)
{
    self->i[3] = value | 0x3f000000;
}

void fn_82D52790(const TriangleShape_82D52790 *self, const unsigned short *ids, int numIds, Vertex_82D52790 *verticesOut)
{
    int i;

    for (i = numIds - 1; i >= 0; i--) {
        verticesOut->v = self->vertices[lbl_83181D0C[*ids]];
        AddMul4(&verticesOut->v, SimdReal(&lbl_83181CE0[*ids]), &self->extrusion);
        SetInt24W(verticesOut, *ids);
        verticesOut++;
        ids++;
    }
}
