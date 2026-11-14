typedef struct Range_828AC498 {
    int pad0;
    unsigned char valid;    /* 0x04 */
    unsigned int minA;      /* 0x08 */
    unsigned int minB;      /* 0x0c */
    unsigned int a;         /* 0x10 */
    unsigned int b;         /* 0x14 */
} Range_828AC498;

void fn_828AC498(Range_828AC498 *self, unsigned int minA, unsigned int minB, unsigned int a, unsigned int b)
{
    unsigned char ok;
    self->minA = minA;
    self->minB = minB;
    self->a = a;
    self->b = b;
    ok = a + b != 0 && a >= minA;
    self->valid = ok && b >= minB;
}
