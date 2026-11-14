// Havok: hkpAabbPhantom::castRay. The world ray is moved into each overlapping collidable's
// local space (inverse transform of from/to) and cast against its shape with the world's
// collision filter as the ray shape collection filter when the input enables it. Wrapped
// in the "TtrcPhantom" timer scope.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern "C" __vector4 __vsubfp(__vector4 a, __vector4 b);
extern "C" __vector4 __vmsum3fp(__vector4 a, __vector4 b);
extern "C" __vector4 __vmrghw(__vector4 a, __vector4 b);

typedef struct ProfTls_82D8CE68 {
    int unk0;
    void **cur;
    int unk8;
    void **end;
} ProfTls_82D8CE68;

typedef struct Transform_82D8CE68 {
    __vector4 col[4];
} Transform_82D8CE68;


/* hkpShapeRayCastInput */
struct Collidable_82D8CE68;
typedef struct ShapeRayInput_82D8CE68 {
    __vector4 from;
    __vector4 to;
    unsigned int filterInfo;
    void *rayShapeCollectionFilter;
} ShapeRayInput_82D8CE68;

/* hkpWorldRayCastInput */
typedef struct WorldRayInput_82D8CE68 {
    __vector4 from;
    __vector4 to;
    unsigned char enableShapeCollectionFilter;
    unsigned int filterInfo;
} WorldRayInput_82D8CE68;

/* hkpShape: castRayWithCollector is vtable slot 9 */
struct Shape_82D8CE68 {
    virtual void slot0() const;
    virtual void slot1() const;
    virtual void slot2() const;
    virtual void slot3() const;
    virtual void slot4() const;
    virtual void slot5() const;
    virtual void slot6() const;
    virtual void slot7() const;
    virtual void slot8() const;
    virtual void castRayWithCollector(const ShapeRayInput_82D8CE68 *input, const Collidable_82D8CE68 *collidable,
                                      void *collector) const;
};

/* hkpCdBody/hkpCollidable */
struct Collidable_82D8CE68 {
    const Shape_82D8CE68 *shape;            /* 0x00 */
    unsigned int shapeKey;                  /* 0x04 */
    const Transform_82D8CE68 *transform;    /* 0x08 */
};

typedef struct World_82D8CE68 {
    char pad0[0x7c];
    char *collisionFilter;                  /* 0x7c, hkpCollisionFilter */
} World_82D8CE68;

typedef struct AabbPhantom_82D8CE68 {
    char pad0[0x8];
    World_82D8CE68 *world;                  /* 0x08 */
    char padc[0xc4];
    Collidable_82D8CE68 **overlapping;      /* 0xd0 */
    int overlappingSize;                    /* 0xd4 */
} AabbPhantom_82D8CE68;

extern "C" unsigned int lbl_8323B4A0;
extern "C" const __vector4 lbl_82132D00;   /* zero vector */
extern "C" void *KeTlsGetValue(unsigned int index);
extern "C" unsigned __int64 __mftb(void);

static __forceinline __vector4 TransformedInversePos(const Transform_82D8CE68 *m, __vector4 p)
{
    __vector4 b = __vsubfp(p, m->col[3]);
    __vector4 d0 = __vmsum3fp(m->col[0], b);
    __vector4 d1 = __vmsum3fp(m->col[1], b);
    __vector4 d2 = __vmsum3fp(m->col[2], b);
    __vector4 xz = __vmrghw(d0, d2);
    __vector4 y0 = __vmrghw(d1, lbl_82132D00);
    return __vmrghw(xz, y0);
}

extern "C" void fn_82D8CE68(const AabbPhantom_82D8CE68 *self, const WorldRayInput_82D8CE68 *input, void *collector)
{
    ProfTls_82D8CE68 *t;
    void **p;
    ShapeRayInput_82D8CE68 sinput;
    Collidable_82D8CE68 *const *cols;
    int i;

    t = (ProfTls_82D8CE68 *)KeTlsGetValue(lbl_8323B4A0);
    p = t->cur;
    if (p < t->end) {
        p[0] = (void *)"TtrcPhantom";
        p[1] = (void *)(unsigned int)__mftb();
        t->cur = p + 3;
    }

    sinput.filterInfo = input->filterInfo;
    sinput.rayShapeCollectionFilter = 0;
    if (input->enableShapeCollectionFilter) {
        char *filter = self->world->collisionFilter;
        sinput.rayShapeCollectionFilter = filter ? filter + 0x10 : 0;
    } else {
        sinput.rayShapeCollectionFilter = 0;
    }

    cols = self->overlapping;
    for (i = self->overlappingSize - 1; i >= 0; i--) {
        const Collidable_82D8CE68 *col = *cols;
        const Shape_82D8CE68 *shape = col->shape;
        if (shape != 0) {
            const Transform_82D8CE68 *m = col->transform;
            sinput.from = TransformedInversePos(m, input->from);
            sinput.to = TransformedInversePos(m, input->to);
            shape->castRayWithCollector(&sinput, *cols, collector);
        }
        cols++;
    }

    t = (ProfTls_82D8CE68 *)KeTlsGetValue(lbl_8323B4A0);
    p = t->cur;
    if (p < t->end) {
        p[0] = (void *)"Et";
        p[1] = (void *)(unsigned int)__mftb();
        t->cur = p + 3;
    }
}
