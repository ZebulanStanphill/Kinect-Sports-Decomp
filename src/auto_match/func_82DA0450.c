typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Pair_82DA0450 {
    __vector4 v[2];
} Pair_82DA0450;

extern __vector4 lbl_8323E280[4];

/* Havok (caller fn_82DC7828): stores two vector pairs as the defaults in lbl_8323E280
   (the "from" values of fn_82D9FFD0). */
void fn_82DA0450(void *self, void *a, void *b, const Pair_82DA0450 *linear, void *c,
                 const Pair_82DA0450 *angular)
{
    lbl_8323E280[0] = linear->v[0];
    lbl_8323E280[1] = linear->v[1];
    lbl_8323E280[2] = angular->v[0];
    lbl_8323E280[3] = angular->v[1];
}
