// Havok hkpGskCache::init for a convex shape A against a triangle B (given in B space with
// the transform aTb): unless the triangle is flagged (byte +0x17, then the generic init
// fn_82DD9828), transforms the three triangle vertices into A space, takes vertex 0 of A as a
// reference, flips the triangle normal towards it and stores A's supporting vertex in that
// direction as vertex 0 of the cache, with B's ids 0, 1, 2 and dimensions 1 / 3.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern "C" {
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vpermwi(__vector4 v, int control);
__vector4 __vand(__vector4 a, __vector4 b);
__vector4 __vxor(__vector4 a, __vector4 b);

extern const __vector4 lbl_8209AB20;   /* sign mask */
}

struct Transform_82DD9A10 {
    __vector4 col[4];
};

typedef struct Triangle_82DD9A10 {
    char pad0[0x17];
    unsigned char flag;      /* 0x17 */
    char pad18[0x8];
    __vector4 vertices[3];   /* 0x20 */
} Triangle_82DD9A10;

class ConvexShape_82DD9A10 {
public:
    virtual void slot00();
    virtual void slot04();
    virtual void slot08();
    virtual void slot0c();
    virtual void slot10();
    virtual void slot14();
    virtual void slot18();
    virtual void slot1c();
    virtual void slot20();
    virtual void slot24();
    virtual void slot28();
    virtual int getMaxDim() const;                                                       /* 0x2c */
    virtual void slot30();
    virtual void slot34();
    virtual void getSupportingVertex(const __vector4 *dir, __vector4 *out) const;          /* 0x38 */
    virtual void convertVertexIdsToVertices(const unsigned short *ids, int n, __vector4 *out) const;   /* 0x3c */
};

typedef struct GskCache_82DD9A10 {
    unsigned short vertices[4];   /* 0x0 */
    unsigned char dimA;           /* 0x8 */
    unsigned char dimB;           /* 0x9 */
    unsigned char maxDimA : 4;    /* 0xa */
    unsigned char pad : 2;
    unsigned char maxDimB : 2;
    unsigned char flags;          /* 0xb */
} GskCache_82DD9A10;

extern "C" void fn_82DD9828(GskCache_82DD9A10 *cache, const ConvexShape_82DD9A10 *shapeA, const Triangle_82DD9A10 *triangle,
                 const Transform_82DD9A10 *aTb);

static __forceinline __vector4 TransformPos(__vector4 v, __vector4 c0, __vector4 c1, __vector4 c2, __vector4 t)
{
    __vector4 r;

    r = __vmulfp(c0, __vspltw(v, 0));
    r = __vmaddfp(c1, __vspltw(v, 1), r);
    r = __vmaddfp(c2, __vspltw(v, 2), r);
    return __vaddfp(r, t);
}

static __forceinline void TransformPoints(const Transform_82DD9A10 *m, const __vector4 *in, int n, __vector4 *out)
{
    __vector4 c0 = m->col[0];
    __vector4 c1 = m->col[1];
    __vector4 c2 = m->col[2];
    __vector4 t = m->col[3];
    int i;

    i = n - 1;
    do {
        __vector4 v = in[i];
        out[i] = TransformPos(v, c0, c1, c2, t);
    } while (--i >= 0);
}

extern "C" void fn_82DD9A10(GskCache_82DD9A10 *cache, const ConvexShape_82DD9A10 *shapeA, const Triangle_82DD9A10 *triangle,
                 const Transform_82DD9A10 *aTb)
{
    __vector4 verts[3];
    __vector4 normal;
    __vector4 vertexA;
    __vector4 support;
    __vector4 e0, e1, d, s;
    int maxDim;

    if (triangle->flag != 0) {
        fn_82DD9828(cache, shapeA, triangle, aTb);
        return;
    }
    cache->vertices[1] = 0;
    cache->vertices[2] = 1;
    cache->vertices[3] = 2;
    TransformPoints(aTb, triangle->vertices, 3, verts);
    e0 = __vsubfp(verts[1], verts[0]);
    e1 = __vsubfp(verts[2], verts[1]);
    normal = __vsubfp(__vmulfp(__vpermwi(e0, 99), __vpermwi(e1, 135)), __vmulfp(__vpermwi(e0, 135), __vpermwi(e1, 99)));
    shapeA->convertVertexIdsToVertices(&cache->vertices[1], 1, &vertexA);
    d = __vsubfp(vertexA, verts[0]);
    s = __vspltw(__vmsum3fp(d, normal), 0);
    normal = __vxor(normal, __vand(s, lbl_8209AB20));
    shapeA->getSupportingVertex(&normal, &support);
    cache->dimA = 1;
    cache->dimB = 3;
    cache->vertices[0] = (unsigned short)((const int *)&support)[3];
    maxDim = shapeA->getMaxDim();
    if (maxDim > 3) {
        maxDim = 15;
    }
    cache->flags = 0;
    cache->maxDimA = maxDim;
    cache->pad = 0;
    cache->maxDimB = 3;
}
