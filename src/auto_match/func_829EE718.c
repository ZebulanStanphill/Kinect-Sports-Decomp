// Clears a 0xA0-byte state block: a 4x4 matrix, index/float triples and counters.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);

typedef struct State_829EE718 {
    __vector4 rows[4];   /* +0x00 */
    int f40[3];          /* +0x40 */
    int f4c[3];          /* +0x4c */
    int f58[3];          /* +0x58 */
    int f64;             /* +0x64 */
    int f68[4];          /* +0x68 */
    int f78[4];          /* +0x78 */
    int f88[2];          /* +0x88 */
    int f90[2];          /* +0x90 */
    float f98;           /* +0x98 */
    short f9c;           /* +0x9c */
} State_829EE718;

void fn_829EE718(State_829EE718 *s)
{
    __vector4 zero = __vspltisw(0);
    s->rows[0] = zero; s->rows[1] = zero; s->rows[2] = zero; s->rows[3] = zero;
    s->f98 = 0.0f;
    s->f68[0] = 0; s->f68[1] = 0; s->f68[2] = 0; s->f68[3] = 0;
    s->f88[0] = 0; s->f88[1] = 0;
    s->f78[0] = 0; s->f78[1] = 0; s->f78[2] = 0; s->f78[3] = 0;
    s->f40[0] = 0; s->f40[1] = 0; s->f40[2] = 0;
    s->f58[0] = 0; s->f58[1] = 0; s->f58[2] = 0;
    s->f4c[0] = 0; s->f4c[1] = 0; s->f4c[2] = 0;
    s->f90[0] = 0; s->f90[1] = 0;
    s->f64 = 0;
    s->f9c = 0;
}
