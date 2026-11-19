static __forceinline void Copy8(unsigned __int64 *dst, const unsigned __int64 *src, unsigned int numBytes)
{
    int i;

    for (i = numBytes / 8 - 1; numBytes >= 8; numBytes -= 8, i--) {
        dst[i] = src[i];
    }
}

static __forceinline void Copy4(unsigned int *dst, const unsigned int *src, unsigned int numBytes)
{
    int i;

    for (i = numBytes / 4 - 1; numBytes >= 4; numBytes -= 4, i--) {
        dst[i] = src[i];
    }
}

static __forceinline void Copy2(unsigned short *dst, const unsigned short *src, unsigned int numBytes)
{
    int i;

    for (i = numBytes / 2 - 1; numBytes >= 2; numBytes -= 2, i--) {
        dst[i] = src[i];
    }
}

static __forceinline void Copy1(unsigned char *dst, const unsigned char *src, unsigned int count)
{
    int i;

    for (i = count - 1; count >= 1; count--, i--) {
        dst[i] = src[i];
    }
}

/* Backward copy (overlap-safe when dst > src) using the widest element both pointers allow. */
void fn_82CF69B8(char *dst, const char *src, int numBytes)
{
    int chunk;

    chunk = numBytes & ~7;
    if (chunk != 0 && (numBytes & 7) == 0 && ((unsigned int)dst & 7) == 0 && ((unsigned int)src & 7) == 0) {
        Copy8((unsigned __int64 *)dst, (const unsigned __int64 *)src, numBytes);
        dst += chunk;
        src += chunk;
        numBytes = 0;
    }
    chunk = numBytes & ~3;
    if (chunk != 0 && (numBytes & 3) == 0 && ((unsigned int)dst & 3) == 0 && ((unsigned int)src & 3) == 0) {
        Copy4((unsigned int *)dst, (const unsigned int *)src, numBytes);
        dst += chunk;
        src += chunk;
        numBytes = 0;
    }
    chunk = numBytes & ~1;
    if (chunk != 0 && (numBytes & 1) == 0 && ((unsigned int)dst & 1) == 0 && ((unsigned int)src & 1) == 0) {
        Copy2((unsigned short *)dst, (const unsigned short *)src, numBytes);
        dst += chunk;
        src += chunk;
        numBytes = 0;
    }
    Copy1((unsigned char *)dst, (const unsigned char *)src, numBytes);
}
