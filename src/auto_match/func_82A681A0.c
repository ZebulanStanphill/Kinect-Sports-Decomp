extern float lbl_8201DF54;
extern float lbl_8208E0A0;

/* Converts count floats from src to packed 24-bit little-endian samples in dst, clamping each to
   [-1, 1 - 2^-23]. */
/* __restrict on both pointers is the original's: it loads the next src element before it
   stores the previous dst element, which the compiler does only when they cannot alias. */
void fn_82A681A0(unsigned char *__restrict dst, const float *__restrict src, unsigned int count)
{
    float scale = lbl_8208E0A0;
    float max = lbl_8201DF54;
    unsigned int i;

    for (i = 0; i < count; i++) {
        float value = src[i];
        int sample;

        if (value < -1.0f) {
            value = -1.0f;
        } else if (value > max) {
            value = max;
        }
        sample = (int)(value * scale);
        dst[i * 3] = (unsigned char)sample;
        dst[i * 3 + 1] = (unsigned char)(sample >> 8);
        dst[i * 3 + 2] = (unsigned char)(sample >> 16);
    }
}
