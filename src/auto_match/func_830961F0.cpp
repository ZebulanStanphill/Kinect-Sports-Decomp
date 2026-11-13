// Havok ray cast against one collidable (the func_83096D80 callback without the early-out
// fraction): skips collidables without a shape or rejected by the ray collidable filter, moves the
// ray into the collidable's local space and casts it, either into the hit collector or into the
// single output (whose normal is rotated back into world space). Returns whether the single cast hit.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
typedef __vector4 hkQuadReal;
extern "C" {
__vector4 __vsubfp(__vector4, __vector4);
__vector4 __vmulfp(__vector4, __vector4);
__vector4 __vmaddfp(__vector4, __vector4, __vector4);
__vector4 __vmsum3fp(__vector4, __vector4);
__vector4 __vmrghw(__vector4, __vector4);
__vector4 __vspltw(__vector4, unsigned int);
extern const hkQuadReal lbl_82132D00;   // Havok's global zero vector
}

typedef float hkReal;
typedef unsigned int hkUint32;

class hkBool {
public:
    hkBool() {}
    hkBool(bool b) : m_bool((char)b) {}
    operator bool() const { return m_bool != 0; }
    char m_bool;
};

class hkVector4 {
public:
    __forceinline void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    hkQuadReal m_quad;
};

class hkRotation {
public:
    hkVector4 m_col0;
    hkVector4 m_col1;
    hkVector4 m_col2;
};

class hkTransform {
public:
    hkRotation m_rotation;
    hkVector4 m_translation;
    __forceinline const hkRotation &getRotation() const { return m_rotation; }
    __forceinline const hkVector4 &getTranslation() const { return m_translation; }
};

static __forceinline void SetTransformedInversePos(hkVector4 &out, const hkTransform &t, const hkVector4 &v)
{
    hkQuadReal h = __vsubfp(v.m_quad, t.getTranslation().m_quad);
    hkQuadReal d0 = __vmsum3fp(t.getRotation().m_col0.m_quad, h);
    hkQuadReal d1 = __vmsum3fp(t.getRotation().m_col1.m_quad, h);
    hkQuadReal d2 = __vmsum3fp(t.getRotation().m_col2.m_quad, h);
    out.m_quad = __vmrghw(__vmrghw(d0, d2), __vmrghw(d1, lbl_82132D00));
}

static __forceinline void SetRotatedDir(hkVector4 &out, const hkRotation &r, const hkVector4 &v)
{
    hkQuadReal c0 = r.m_col0.m_quad;
    hkQuadReal c1 = r.m_col1.m_quad;
    hkQuadReal c2 = r.m_col2.m_quad;
    hkQuadReal b = v.m_quad;
    hkQuadReal t = __vmulfp(c0, __vspltw(b, 0));
    t = __vmaddfp(c1, __vspltw(b, 1), t);
    out.m_quad = __vmaddfp(c2, __vspltw(b, 2), t);
}

struct hkpShapeRayCastInput {
    hkpShapeRayCastInput() : m_filterInfo(0), m_rayShapeCollectionFilter(0) {}
    hkVector4 m_from;                       // 0x00
    hkVector4 m_to;                         // 0x10
    hkUint32 m_filterInfo;                  // 0x20
    const void *m_rayShapeCollectionFilter; // 0x24
};

struct hkpWorldRayCastInput {
    hkVector4 m_from;                       // 0x00
    hkVector4 m_to;                         // 0x10
    hkBool m_enableShapeCollectionFilter;   // 0x20
    hkUint32 m_filterInfo;                  // 0x24
};

class hkpCollidable;
struct hkpWorldRayCastOutput {
    hkVector4 m_normal;                     // 0x00
    hkReal m_hitFraction;                   // 0x10
    char pad14[0x3c];
    const hkpCollidable *m_rootCollidable;  // 0x50
};

class hkpRayHitCollector {
public:
    virtual ~hkpRayHitCollector();
    hkReal m_earlyOutHitFraction;           // 0x04
};

class hkpShape {
public:
    virtual void slot00();
    virtual void slot04();
    virtual void slot08();
    virtual void slot0C();
    virtual void slot10();
    virtual void slot14();
    virtual void slot18();
    virtual void slot1C();
    virtual hkBool castRay(const hkpShapeRayCastInput &input, hkpWorldRayCastOutput &output) const;   // 0x20
    virtual void castRayWithCollector(const hkpShapeRayCastInput &input, const hkpCollidable &cdBody,
                                      hkpRayHitCollector &collector) const;                     // 0x24
};

class hkpCollidable {
public:
    const hkpShape *m_shape;                // 0x00
    int m_shapeKey;                         // 0x04
    const void *m_motion;                   // 0x08
    __forceinline const hkTransform &getTransform() const { return *(const hkTransform *)m_motion; }
};

class hkpRayCollidableFilter {
public:
    virtual ~hkpRayCollidableFilter();
    virtual hkBool isCollisionEnabled(const hkpWorldRayCastInput &input, const hkpCollidable &collidable) const;
};

struct RayCaster_830961F0 {
    char pad0[0x4];
    const hkpWorldRayCastInput *m_input;     // 0x04
    const hkpRayCollidableFilter *m_filter;  // 0x08
    const void *m_shapeCollectionFilter;     // 0x0c
    hkpWorldRayCastOutput *m_result;         // 0x10
    hkpRayHitCollector *m_collectorBase;     // 0x14
};

extern "C" hkBool fn_830961F0(RayCaster_830961F0 *self, const hkpCollidable *col)
{
    hkBool result = false;
    const hkpShape *shape = col->m_shape;
    if (shape != 0) {
        if (self->m_filter == 0 || self->m_filter->isCollisionEnabled(*self->m_input, *col)) {
            const hkTransform &trans = col->getTransform();
            hkpShapeRayCastInput sinput;
            SetTransformedInversePos(sinput.m_from, trans, self->m_input->m_from);
            SetTransformedInversePos(sinput.m_to, trans, self->m_input->m_to);
            sinput.m_filterInfo = self->m_input->m_filterInfo;
            sinput.m_rayShapeCollectionFilter = self->m_shapeCollectionFilter;

            if (self->m_collectorBase != 0) {
                shape->castRayWithCollector(sinput, *col, *self->m_collectorBase);
            } else {
                hkBool hit = shape->castRay(sinput, *self->m_result);
                if (hit) {
                    self->m_result->m_rootCollidable = col;
                    SetRotatedDir(self->m_result->m_normal, trans.getRotation(), self->m_result->m_normal);
                    return true;
                }
            }
        }
    }
    return result;
}
