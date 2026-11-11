// Havok: writes the mirrored copy of a pair record: the two leading words swapped, two more
// copied, the vector at +0x70 negated (sign-mask xor) and the transform at +0x20 inverted
// (fn_82CE66E8).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vxor(__vector4 a, __vector4 b);

typedef struct Transform_82D71918 {
    __vector4 col[4];
} Transform_82D71918;

typedef struct Pair_82D71918 {
    int a;                          // 0x00
    int b;                          // 0x04
    int pad8;
    int fC;                         // 0x0c
    int f10;                        // 0x10
    int pad14[3];
    Transform_82D71918 transform;   // 0x20
    int pad60[4];
    __vector4 v70;                  // 0x70
} Pair_82D71918;

extern const __vector4 lbl_82132790;

void fn_82CE66E8(Transform_82D71918 *self, const Transform_82D71918 *t);

void fn_82D71918(const Pair_82D71918 *self, Pair_82D71918 *out)
{
    out->a = self->b;
    out->b = self->a;
    out->fC = self->fC;
    out->f10 = self->f10;
    out->v70 = __vxor(self->v70, lbl_82132790);
    fn_82CE66E8(&out->transform, &self->transform);
}
