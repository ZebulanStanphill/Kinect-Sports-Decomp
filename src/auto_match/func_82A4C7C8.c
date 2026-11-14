typedef struct Self_82A4C7C8 {
    char pad0[0x34];
    float scale;
    float x;
    float y;
} Self_82A4C7C8;

extern unsigned int fn_82A46138(unsigned int value, float factor, int round);
unsigned int fn_82A4C7C8(Self_82A4C7C8 *self, unsigned int value)
{
    float f = self->scale * self->y;
    return fn_82A46138(value, f, self->x != 1.0f || self->y != 1.0f);
}
