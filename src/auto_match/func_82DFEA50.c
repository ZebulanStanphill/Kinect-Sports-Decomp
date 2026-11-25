typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct State_82DFEA50 {
    __vector4 v00; /* 0x00 */
    __vector4 v10; /* 0x10 */
    float f20;     /* 0x20 */
    int i24[9];    /* 0x24 */
    __vector4 v50; /* 0x50 */
    __vector4 v60; /* 0x60 */
    float f70;     /* 0x70 */
    __vector4 v80; /* 0x80 */
    __vector4 v90; /* 0x90 */
    __vector4 va0; /* 0xa0 */
    __vector4 vb0; /* 0xb0 */
    float fc0[6];  /* 0xc0 */
} State_82DFEA50;

/* Member-wise copy of the whole state (vectors, floats and words in field order). */
void fn_82DFEA50(State_82DFEA50 *dst, const State_82DFEA50 *src)
{
    dst->v00 = src->v00;
    dst->v10 = src->v10;
    dst->f20 = src->f20;
    dst->i24[0] = src->i24[0];
    dst->i24[1] = src->i24[1];
    dst->i24[2] = src->i24[2];
    dst->i24[3] = src->i24[3];
    dst->i24[4] = src->i24[4];
    dst->i24[5] = src->i24[5];
    dst->i24[6] = src->i24[6];
    dst->i24[7] = src->i24[7];
    dst->i24[8] = src->i24[8];
    dst->v50 = src->v50;
    dst->v60 = src->v60;
    dst->f70 = src->f70;
    dst->v80 = src->v80;
    dst->v90 = src->v90;
    dst->va0 = src->va0;
    dst->vb0 = src->vb0;
    dst->fc0[0] = src->fc0[0];
    dst->fc0[1] = src->fc0[1];
    dst->fc0[2] = src->fc0[2];
    dst->fc0[3] = src->fc0[3];
    dst->fc0[4] = src->fc0[4];
    dst->fc0[5] = src->fc0[5];
}
