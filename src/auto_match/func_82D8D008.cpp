// Havok: hkpAabbPhantom::castRay(input, hkpWorldRayCastOutput &output). The world ray is moved
// into each overlapping collidable's local space and cast against its shape (hkBool castRay,
// slot 8); a hit records the collidable as the output's root collidable. The closest hit's
// normal is rotated back to world space at the end. Wrapped in the "TtrcPhantom" timer scope.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern "C" __vector4 __vsubfp(__vector4 a, __vector4 b);
extern "C" __vector4 __vmsum3fp(__vector4 a, __vector4 b);
extern "C" __vector4 __vmrghw(__vector4 a, __vector4 b);

typedef struct ProfTls_82D8D008 {
    int unk0;
    void **cur;
    int unk8;
    void **end;
} ProfTls_82D8D008;

typedef struct Transform_82D8D008 {
    __vector4 col[4];
} Transform_82D8D008;


/* hkpShapeRayCastInput */
struct Collidable_82D8D008;
typedef struct ShapeRayInput_82D8D008 {
    __vector4 from;
    __vector4 to;
    unsigned int filterInfo;
    void *rayShapeCollectionFilter;
} ShapeRayInput_82D8D008;

/* hkpWorldRayCastInput */
typedef struct WorldRayInput_82D8D008 {
    __vector4 from;
    __vector4 to;
    unsigned char enableShapeCollectionFilter;
    unsigned int filterInfo;
} WorldRayInput_82D8D008;

/* hkBool: returned through a hidden pointer */
struct Bool_82D8D008 {
    char value;
    Bool_82D8D008() {}
};

/* hkpWorldRayCastOutput */
struct Collidable_82D8D008;
typedef struct Output_82D8D008 {
    __vector4 normal;                       /* 0x00 */
    char pad10[0x40];
    const Collidable_82D8D008 *rootCollidable; /* 0x50 */
} Output_82D8D008;

/* hkpShape: castRay is vtable slot 8 */
struct Shape_82D8D008 {
    virtual void slot0() const;
    virtual void slot1() const;
    virtual void slot2() const;
    virtual void slot3() const;
    virtual void slot4() const;
    virtual void slot5() const;
    virtual void slot6() const;
    virtual void slot7() const;
    virtual Bool_82D8D008 castRay(const ShapeRayInput_82D8D008 *input, Output_82D8D008 *output) const;
};

/* hkpCdBody/hkpCollidable */
struct Collidable_82D8D008 {
    const Shape_82D8D008 *shape;            /* 0x00 */
    unsigned int shapeKey;                  /* 0x04 */
    const Transform_82D8D008 *transform;    /* 0x08 */
};

typedef struct World_82D8D008 {
    char pad0[0x7c];
    char *collisionFilter;                  /* 0x7c, hkpCollisionFilter */
} World_82D8D008;

typedef struct AabbPhantom_82D8D008 {
    char pad0[0x8];
    World_82D8D008 *world;                  /* 0x08 */
    char padc[0xc4];
    Collidable_82D8D008 **overlapping;      /* 0xd0 */
    int overlappingSize;                    /* 0xd4 */
} AabbPhantom_82D8D008;

extern "C" unsigned int lbl_8323B4A0;
extern "C" const __vector4 lbl_82132D00;   /* zero vector */
extern "C" void *KeTlsGetValue(unsigned int index);
extern "C" unsigned __int64 __mftb(void);
extern "C" void fn_82CE50D8(__vector4 *out, const Transform_82D8D008 *rotation, const __vector4 *in);

static __forceinline __vector4 TransformedInversePos(const Transform_82D8D008 *m, __vector4 p)
{
    __vector4 b = __vsubfp(p, m->col[3]);
    __vector4 d0 = __vmsum3fp(m->col[0], b);
    __vector4 d1 = __vmsum3fp(m->col[1], b);
    __vector4 d2 = __vmsum3fp(m->col[2], b);
    __vector4 xz = __vmrghw(d0, d2);
    __vector4 y0 = __vmrghw(d1, lbl_82132D00);
    return __vmrghw(xz, y0);
}

extern "C" void fn_82D8D008(const AabbPhantom_82D8D008 *self, const WorldRayInput_82D8D008 *input, Output_82D8D008 *output)
{
    ProfTls_82D8D008 *t;
    void **p;
    ShapeRayInput_82D8D008 sinput;
    Collidable_82D8D008 *const *cols;
    int i;

    t = (ProfTls_82D8D008 *)KeTlsGetValue(lbl_8323B4A0);
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
        const Collidable_82D8D008 *col = *cols;
        const Shape_82D8D008 *shape = col->shape;
        if (shape != 0) {
            const Transform_82D8D008 *m = col->transform;
            sinput.from = TransformedInversePos(m, input->from);
            sinput.to = TransformedInversePos(m, input->to);
            Bool_82D8D008 hit = shape->castRay(&sinput, output);
            if (hit.value) {
                output->rootCollidable = *cols;
            }
        }
        cols++;
    }

    if (output->rootCollidable != 0) {
        fn_82CE50D8(&output->normal, output->rootCollidable->transform, &output->normal);
    }

    t = (ProfTls_82D8D008 *)KeTlsGetValue(lbl_8323B4A0);
    p = t->cur;
    if (p < t->end) {
        p[0] = (void *)"Et";
        p[1] = (void *)(unsigned int)__mftb();
        t->cur = p + 3;
    }
}
