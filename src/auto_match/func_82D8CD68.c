typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

/* hkAabb */
typedef struct Aabb_82D8CD68 {
    __vector4 min;
    __vector4 max;
} Aabb_82D8CD68;

/* hkpAabbPhantom (k hk hkpAabbPhantom: m_aabb at 0xb0) */
typedef struct AabbPhantom_82D8CD68 {
    char pad00[0xb0];
    Aabb_82D8CD68 aabb;
} AabbPhantom_82D8CD68;

/* hkpPhantom::updateBroadPhase */
extern void fn_82D9A730(AabbPhantom_82D8CD68 *self, const Aabb_82D8CD68 *aabb);

/* hkpAabbPhantom::setAabb */
void fn_82D8CD68(AabbPhantom_82D8CD68 *self, const Aabb_82D8CD68 *aabb)
{
    Aabb_82D8CD68 *dst = &self->aabb;

    dst->min = aabb->min;
    dst->max = aabb->max;
    fn_82D9A730(self, dst);
}
