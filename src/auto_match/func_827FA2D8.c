typedef struct Curves_827FA2D8 {
    char pad0[0x2e];
    unsigned short first;   /* 0x2e */
    unsigned short count;   /* 0x30 */
    unsigned short frame;   /* 0x32 */
    char pad34[0x84 - 0x34];
    float *values;          /* 0x84 */
} Curves_827FA2D8;

int fn_827FA2D8(Curves_827FA2D8 *self, unsigned int index, float *out)
{
    int ok;
    float value;

    if (index < self->count) {
        ok = 1;
        value = self->values[self->frame * 12 + self->first + index];
    } else {
        ok = 0;
        value = 0.0f;
    }
    *out = value;
    return ok;
}
