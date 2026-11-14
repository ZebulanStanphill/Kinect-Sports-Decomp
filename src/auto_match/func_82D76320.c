typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct ContactPoint_82D76320 {
    __vector4 position;             /* 0x00 */
    __vector4 separatingNormal;     /* 0x10, w = distance */
} ContactPoint_82D76320;

typedef struct Collector_82D76320 {
    void *vtable;                   /* 0x00 */
    float earlyOutDistance;         /* 0x04 */
    unsigned char hasHit;           /* 0x08 */
    ContactPoint_82D76320 hit;      /* 0x10 */
} Collector_82D76320;

static __forceinline void CopyPoint(ContactPoint_82D76320 *dst, const ContactPoint_82D76320 *src)
{
    dst->position = src->position;
    dst->separatingNormal = src->separatingNormal;
}

void fn_82D76320(Collector_82D76320 *self, const ContactPoint_82D76320 *cp)
{
    if (self->hasHit && cp->separatingNormal.vector4_f32[3] >= self->hit.separatingNormal.vector4_f32[3])
        return;
    self->hasHit = 1;
    CopyPoint(&self->hit, cp);
    self->earlyOutDistance = cp->separatingNormal.vector4_f32[3];
}
