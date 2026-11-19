struct Lock_828F2760 {
    Lock_828F2760();  /* fn_82C449C8 */
    ~Lock_828F2760(); /* fn_82923D98 */

    int data[8];
};

typedef struct Source_828F2760 {
    int format; /* 0x00 */
    int width;  /* 0x04 */
    int height; /* 0x08 */
    char padC[0x28 - 0xc];
    int rect[14]; /* 0x28 */
} Source_828F2760;

typedef struct Desc_828F2760 {
    int format; /* 0x00 */
    int width;  /* 0x04 */
    int height; /* 0x08 */
    int pad[15];
} Desc_828F2760;

typedef struct Texture_828F2760 {
    char pad0[0x30];
    unsigned int flags; /* 0x30 */
} Texture_828F2760;

typedef struct Surface_828F2760 {
    char pad0[0x18];
    Texture_828F2760 *texture; /* 0x18 */
} Surface_828F2760;

extern "C" int fn_82923DA0(Lock_828F2760 *lock, Source_828F2760 *source, Surface_828F2760 *surface,
                           void *palette, const void *rect, int unused, unsigned int flags);
extern "C" void fn_82A94798(Texture_828F2760 *texture, int level, Desc_828F2760 *desc);
extern "C" int fn_828F1498(void *destSurface, void *destPalette, const void *destRect, int format, int width,
                           int height, void *palette, int *rect, unsigned int tiled, int textureWidth,
                           int textureHeight, unsigned int filter, unsigned int colorKey);

extern "C" int fn_828F2760(void *destSurface, void *destPalette, const void *destRect,
                           Surface_828F2760 *srcSurface, void *srcPalette, const void *srcRect,
                           unsigned int filter, unsigned int colorKey)
{
    Lock_828F2760 lock;
    Source_828F2760 source;
    Desc_828F2760 desc;
    int hr;

    if (destSurface == 0) {
        return 0x8876086c;
    }
    if (srcSurface == 0) {
        return 0x8876086c;
    }
    unsigned int flags = 1;
    if (destSurface == srcSurface) {
        flags = 0x10001;
    }
    hr = fn_82923DA0(&lock, &source, srcSurface, srcPalette, srcRect, 0, flags);
    if (hr < 0) {
        return hr;
    }
    fn_82A94798(srcSurface->texture, 0, &desc);
    hr = fn_828F1498(destSurface, destPalette, destRect, source.format, source.width, source.height,
                     srcPalette, source.rect, (srcSurface->texture->flags >> 11) & 1, desc.width, desc.height,
                     filter, colorKey);
    if (hr < 0) {
        return hr;
    }
    return 0;
}
