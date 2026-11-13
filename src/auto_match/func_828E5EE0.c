typedef struct Range_828E5EE0 {
    unsigned char pad[8];
    int base;
    int shift;
} Range_828E5EE0;

extern unsigned char fn_828E5660(void *stream, float value, int base, int shift);

unsigned char fn_828E5EE0(Range_828E5EE0 *self, void *stream, const float *value)
{
    return fn_828E5660(stream, *value, self->base, self->shift);
}
