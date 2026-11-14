/* hkpClosestRayHitCollector::addRayHit (Havok 7) */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct hkpCdBody_83097778 {
    void *m_shape;
    unsigned int m_shapeKey;
    void *m_motion;
    struct hkpCdBody_83097778 *m_parent;
} hkpCdBody_83097778;

typedef struct RayHit_83097778 {
    __vector4 m_normal;
    float m_hitFraction;
    int m_extraInfo;
    int m_pad[2];
} RayHit_83097778;

typedef struct Collector_83097778 {
    void *vt;
    float m_earlyOutHitFraction;
    int pad[2];
    RayHit_83097778 m_rayHit;
    unsigned int m_shapeKeys[8];
    int m_shapeKeyIndex;
    int pad54[3];
    const hkpCdBody_83097778 *m_rootCollidable;
} Collector_83097778;

extern void fn_8309AA78(unsigned int *buf, int maxKeys, const hkpCdBody_83097778 *body);

void fn_83097778(Collector_83097778 *self, const hkpCdBody_83097778 *cdBody, const RayHit_83097778 *hitInfo)
{
    if (hitInfo->m_hitFraction < self->m_rayHit.m_hitFraction) {
        const hkpCdBody_83097778 *body;
        RayHit_83097778 *dst = &self->m_rayHit;
        dst->m_normal = hitInfo->m_normal;
        dst->m_hitFraction = hitInfo->m_hitFraction;
        dst->m_extraInfo = hitInfo->m_extraInfo;
        dst->m_pad[0] = hitInfo->m_pad[0];
        dst->m_pad[1] = hitInfo->m_pad[1];
        fn_8309AA78(self->m_shapeKeys, 8, cdBody);
        body = cdBody;
        while (body->m_parent != 0)
            body = body->m_parent;
        self->m_rootCollidable = body;
        self->m_earlyOutHitFraction = hitInfo->m_hitFraction;
    }
}
