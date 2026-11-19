/* Backward copy of 8-byte elements (overlap-safe when dst > src). */
void fn_82CF68E0(unsigned __int64 *dst, const unsigned __int64 *src, unsigned int numBytes)
{
    int i;

    for (i = numBytes / 8 - 1; numBytes >= 8; numBytes -= 8, i--) {
        dst[i] = src[i];
    }
}
