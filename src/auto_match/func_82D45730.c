typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);

typedef struct Aabb_82D45730 {
    __vector4 min;
    __vector4 max;
} Aabb_82D45730;

typedef struct Shape_82D45730 {
    char pad00[0xa0];
    Aabb_82D45730 aabb;     /* 0xa0 */
} Shape_82D45730;

extern const __vector4 lbl_82132D70;   /* 0.5f x4 */

extern void fn_82D401F8(const void *localToWorld, const __vector4 *halfExtents, const __vector4 *center,
                        float tolerance, void *out);

static __forceinline void getCenter_82D45730(Aabb_82D45730 aabb, __vector4 *center)
{
    *center = __vmulfp(lbl_82132D70, __vaddfp(aabb.min, aabb.max));
}

static __forceinline void getHalfExtents_82D45730(Aabb_82D45730 aabb, __vector4 *halfExtents)
{
    *halfExtents = __vmulfp(lbl_82132D70, __vsubfp(aabb.max, aabb.min));
}

void fn_82D45730(Shape_82D45730 *self, const void *localToWorld, float tolerance, void *out)
{
    __vector4 center;
    __vector4 halfExtents;

    getCenter_82D45730(self->aabb, &center);
    getHalfExtents_82D45730(self->aabb, &halfExtents);
    fn_82D401F8(localToWorld, &halfExtents, &center, tolerance, out);
}
