/* Backward copy of 4-byte elements (overlap-safe when dst > src). */
void fn_82CF6918(unsigned int *dst, const unsigned int *src, unsigned int numBytes)
{
    int i;

    for (i = numBytes / 4 - 1; numBytes >= 4; numBytes -= 4, i--) {
        dst[i] = src[i];
    }
}
