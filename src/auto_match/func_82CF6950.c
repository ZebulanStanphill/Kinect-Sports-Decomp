/* Backward copy of 2-byte elements (overlap-safe when dst > src). */
void fn_82CF6950(unsigned short *dst, const unsigned short *src, unsigned int numBytes)
{
    int i;

    for (i = numBytes / 2 - 1; numBytes >= 2; numBytes -= 2, i--) {
        dst[i] = src[i];
    }
}
