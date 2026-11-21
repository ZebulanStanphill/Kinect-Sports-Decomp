typedef struct BitWriter_828E5660 BitWriter_828E5660;

extern void fn_8223C478(BitWriter_828E5660 *writer, int bits, int flags);
extern int fn_828E9DB8(BitWriter_828E5660 *writer, unsigned int value, int bits);

double fabs(double x);

static __forceinline const unsigned int *Min(const unsigned int *left, const unsigned int *right)
{
    return *right < *left ? right : left;
}

static __forceinline void WriteBits(BitWriter_828E5660 *writer, unsigned int value, int bits)
{
    fn_8223C478(writer, bits, 0);
    fn_828E9DB8(writer, value, bits);
}

/* Writes a sign bit and a fixed-point magnitude of intBits + fracBits bits;
   returns whether the value fit without clipping. */
unsigned char fn_828E5660(BitWriter_828E5660 *writer, float value, int intBits, int fracBits)
{
    int total = intBits + fracBits;
    float scale;
    unsigned int magnitude;
    unsigned int limit;
    unsigned char clipped;
    unsigned char positive;

    if (fracBits >= 0) {
        scale = (float)(1 << fracBits);
    } else {
        scale = 1.0f / (float)(1 << -fracBits);
    }
    magnitude = (unsigned int)fabs(scale * value);
    positive = value >= 0.0f || magnitude == 0;
    clipped = magnitude >= (unsigned int)(1 << total);
    limit = (1 << total) - 1;
    magnitude = *Min(&magnitude, &limit);
    if (total > 0) {
        WriteBits(writer, positive != 0, 1);
        WriteBits(writer, magnitude, total);
    }
    return !clipped;
}
