// Clears a state block (caller fn_829EEC40): vectors, five {float, int} entries, counters.
// The first five vector stores follow the original's order (1, 2, 3, 0, 4); default /O1.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);

typedef struct Entry_829EE7A8 {
    float value;
    int count;
} Entry_829EE7A8;

typedef struct Block_829EE7A8 {
    __vector4 v[6];
} Block_829EE7A8;

typedef struct State_829EE7A8 {
    __vector4 v00[5];               /* 0x000 */
    Block_829EE7A8 b50;             /* 0x050 */
    __vector4 vb0;                  /* 0x0b0 */
    __vector4 vc0[2];               /* 0x0c0 */
    __vector4 ve0[2];               /* 0x0e0 */
    Entry_829EE7A8 entries[5];      /* 0x100 */
    int f128;                       /* 0x128 */
    int f12c;                       /* 0x12c */
    __vector4 v130[2];              /* 0x130 */
    __vector4 v150[2];              /* 0x150 */
    long long f170;                 /* 0x170 */
} State_829EE7A8;

void fn_829EE7A8(State_829EE7A8 *s)
{
    __vector4 zero = __vspltisw(0);
    Block_829EE7A8 *b;
    int i;

    s->v00[1] = zero;
    s->v00[2] = zero;
    s->v00[3] = zero;
    s->v00[0] = zero;
    s->v00[4] = zero;
    b = &s->b50;
    b->v[0] = zero;
    b->v[1] = zero;
    b->v[2] = zero;
    b->v[3] = zero;
    b->v[4] = zero;
    b->v[5] = zero;
    s->vb0 = zero;
    for (i = 0; i < 2; i++) {
        s->vc0[i] = zero;
        s->ve0[i] = zero;
        s->v130[i] = zero;
        s->v150[i] = zero;
    }
    for (i = 0; i < 5; i++) {
        s->entries[i].value = 0.0f;
        s->entries[i].count = 0;
    }
    s->f128 = 0;
    s->f12c = 0;
    s->f170 = 0;
}
