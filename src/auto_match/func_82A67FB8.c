/* Converts count floats from src to packed 24-bit little-endian samples (20 significant bits), clamping to
   [-1, 1). */
/* __restrict on both pointers is the original's: it loads the next src element before it
   stores the previous dst element, which the compiler does only when they cannot alias. */
void fn_82A67FB8(unsigned char *__restrict dst, const float *__restrict src, unsigned int count)
{
    unsigned int i;

    for (i = 0; i < count; i++) {
        float value = src[i];
        int sample;

        if (value < -1.0f) {
            value = -1.0f;
        } else if (value > 0.99999809f) {
            value = 0.99999809f;
        }
        sample = (int)(value * 524288.0f) << 4;
        dst[i * 3] = (unsigned char)sample;
        dst[i * 3 + 1] = (unsigned char)(sample >> 8);
        dst[i * 3 + 2] = (unsigned char)(sample >> 16);
    }
}
