typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vsubfp(__vector4 a, __vector4 b);

typedef struct Limb_83073720 {
    int end;    /* 0x00 */
    int middle; /* 0x04 */
    int joint;  /* 0x08 */
    int root;   /* 0x0c */
    int pad10[5];
} Limb_83073720;

extern const Limb_83073720 lbl_82186DC8[2];

extern float fn_83075D40(int joints, int index);
extern void fn_83075D30(__vector4 *out, void *joints, int index);
extern void fn_83075D90(int joints, int index, float value);
extern __vector4 fn_8306EDB0(__vector4 v);
extern float fn_8306ED98(__vector4 a, __vector4 b);
extern __vector4 fn_8306ED08(void);

void fn_83073720(void *self, int joints)
{
    const Limb_83073720 *limb = lbl_82186DC8;
    int i;

    for (i = 0; i < 2; i++, limb++) {
        float jointConfidence = fn_83075D40(joints, limb->joint);
        float middleConfidence = fn_83075D40(joints, limb->middle);

        if (jointConfidence < 0.5f || middleConfidence < 0.5f) {
            __vector4 jointPosition;
            __vector4 rootPosition;
            __vector4 middlePosition;
            __vector4 upper;
            __vector4 lower;
            float bend;
            float lift;

            fn_83075D30(&rootPosition, (void *)joints, limb->root);
            fn_83075D30(&jointPosition, (void *)joints, limb->joint);
            fn_83075D30(&middlePosition, (void *)joints, limb->middle);
            upper = fn_8306EDB0(__vsubfp(jointPosition, rootPosition));
            lower = fn_8306EDB0(__vsubfp(middlePosition, jointPosition));
            bend = fn_8306ED98(upper, lower);
            lift = fn_8306ED98(upper, fn_8306ED08());
            if (bend > 0.95f && lift < 0.5f) {
                fn_83075D90(joints, limb->joint, 0.85f);
                fn_83075D90(joints, limb->middle, 0.85f);
                fn_83075D90(joints, limb->end, 0.0f);
            }
        }
    }
}
