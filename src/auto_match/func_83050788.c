typedef struct Stats_83050788 {
    unsigned char pad[0x88];
    float elapsed;
    unsigned char pad8c[0xc];
    unsigned int count;
} Stats_83050788;

float fn_83050788(Stats_83050788 *self)
{
    if (self->elapsed == 0.0f) {
        return 100000.0f;
    }
    return (float)self->count / self->elapsed;
}
