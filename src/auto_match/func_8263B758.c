/* The words of a texture's fetch constant that describe its format. The first
   bitfield of a word is its most significant bits. */
typedef struct Texture_8263B758 {
    char pad00[0x1c];
    /* 0x1c */
    unsigned int tiled : 1;
    unsigned int pad1C : 21;
    unsigned int signW : 2;
    unsigned int signZ : 2;
    unsigned int signY : 2;
    unsigned int signX : 2;
    unsigned int type : 2;
    /* 0x20 */
    unsigned int baseAddress : 24;
    unsigned int endian : 2;
    unsigned int dataFormat : 6;
    /* 0x24 */
    unsigned int size;
    /* 0x28 */
    unsigned int pad28 : 19;
    unsigned int swizzleW : 3;
    unsigned int swizzleZ : 3;
    unsigned int swizzleY : 3;
    unsigned int swizzleX : 3;
    unsigned int numFormat : 1;
} Texture_8263B758;

typedef struct Desc_8263B758 {
    unsigned int format;    /* 0x00 */
    unsigned int type;      /* 0x04 */
    int usage;              /* 0x08 */
    int pool;               /* 0x0c */
    int multiSampleType;    /* 0x10 */
    int multiSampleQuality; /* 0x14 */
    unsigned int width;     /* 0x18 */
    unsigned int height;    /* 0x1c */
} Desc_8263B758;

extern unsigned int fn_8262FFB0(unsigned int *texture);
extern void fn_8263B388(Texture_8263B758 *texture, int level, unsigned int *width, unsigned int *height,
                        unsigned int *depth, unsigned int *rowPitch, unsigned int *slicePitch);

/* Fills the description of one mip level of a texture. The format word packs,
   from the top: swizzle W, Z, Y, X (3 bits each), the number format (1), sign
   W, Z, Y, X (2 each), tiled (1), endian (2) and the data format (6). Written
   with shifts, the compiler moves neighbouring fields as one group; the
   original moves every field by itself, which the multiplications give. */
void fn_8263B758(Texture_8263B758 *texture, int level, Desc_8263B758 *desc)
{
    unsigned int width;
    unsigned int height;
    unsigned int depth;
    unsigned int rowPitch;
    unsigned int slicePitch;

    fn_8263B388(texture, level, &width, &height, &depth, &rowPitch, &slicePitch);
    desc->format = ((((((((((((texture->swizzleW * 8 | texture->swizzleZ) * 8 | texture->swizzleY) * 8 |
                             texture->swizzleX) *
                                2 |
                            texture->numFormat) *
                               4 |
                           texture->signW) *
                              4 |
                          texture->signZ) *
                             4 |
                         texture->signY) *
                            4 |
                        texture->signX) *
                           2 |
                       texture->tiled) *
                          4 |
                      texture->endian) *
                     64) |
                    texture->dataFormat);
    desc->type = fn_8262FFB0((unsigned int *)texture);
    desc->usage = 0;
    desc->pool = 0;
    desc->multiSampleQuality = 0;
    desc->width = width;
    desc->height = height;
    desc->multiSampleType = 0;
}
