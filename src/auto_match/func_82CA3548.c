extern int abs(int value);

struct Decoder_82CA3548;

typedef void (*BlockCopy_82CA3548)(struct Decoder_82CA3548 *self, unsigned char *dst, unsigned char *luma,
                                   unsigned char *chromaU, unsigned char *chromaV, int lumaPitch,
                                   int chromaPitch, int width);
typedef void (*EdgeCopy_82CA3548)(struct Decoder_82CA3548 *self, unsigned char *dst, unsigned char *luma,
                                  unsigned char *chromaU, unsigned char *chromaV, int lumaPitch,
                                  int chromaPitch, int width, int height);

typedef struct Planes_82CA3548 {
    unsigned char *luma;    /* 0x0 */
    unsigned char *chromaU; /* 0x4 */
    unsigned char *chromaV; /* 0x8 */
} Planes_82CA3548;

typedef struct Decoder_82CA3548 {
    char pad0[0x60];
    int lumaPitch;   /* 0x60 */
    int lumaRowStep; /* 0x64 */
    char pad68[0x4];
    int chromaPitch; /* 0x6c */
    char pad70[0x10];
    unsigned int columns; /* 0x80 */
    unsigned int rows;    /* 0x84 */
    char pad88[0x14];
    int width;      /* 0x9c */
    int bottomCrop; /* 0xa0 */
    char pada4[0x10];
    int left; /* 0xb4 */
    char padb8[0x4];
    int topCrop; /* 0xbc */
    char padc0[0x1c];
    int lumaOffset;   /* 0xdc */
    int chromaOffset; /* 0xe0 */
    char pade4[0xdd8];
    Planes_82CA3548 *planes; /* 0xebc */
    char padec0[0x2e84];
    int blockWidth; /* 0x3d44 */
    char pad3d48[0x4];
    int outputOffset;     /* 0x3d4c */
    int outputColumnStep; /* 0x3d50 */
    char pad3d54[0x8];
    int outputRowStep; /* 0x3d5c */
    char pad3d60[0xe0];
    BlockCopy_82CA3548 copyBlock;    /* 0x3e40 */
    EdgeCopy_82CA3548 copyEdgeBlock; /* 0x3e44 */
} Decoder_82CA3548;

int fn_82CA3548(Decoder_82CA3548 *decoder, unsigned char *output)
{
    Decoder_82CA3548 *self = decoder;
    Planes_82CA3548 *planes = self->planes;
    unsigned int row = 0;
    unsigned int column;
    unsigned char *outRow = output + self->outputOffset;
    unsigned int rows = self->rows;
    unsigned char *lumaRow = self->lumaOffset + planes->luma;
    unsigned int columns = self->columns;
    unsigned char *chromaURow = planes->chromaU + self->chromaOffset;
    unsigned char *chromaVRow = planes->chromaV + self->chromaOffset;
    unsigned char *out;
    unsigned char *luma;
    unsigned char *chroma;
    int width;
    int height;

    for (row = 0; row < rows; row++) {
        luma = lumaRow;
        chroma = chromaURow;
        out = outRow;
        for (column = 0; column < columns; column++) {
            if (column != columns - 1 && row != rows - 1) {
                self->copyBlock(self, out, luma, chroma, chroma + (chromaVRow - chromaURow), self->lumaPitch,
                                self->chromaPitch, self->blockWidth);
            } else {
                if (column != columns - 1) {
                    width = 16;
                } else {
                    width = self->width - self->left + 16;
                }
                if (row != rows - 1) {
                    height = 16;
                } else {
                    height = 16 - abs(self->topCrop) + abs(self->bottomCrop);
                }
                self->copyEdgeBlock(self, out, luma, chroma, chroma + (chromaVRow - chromaURow),
                                    self->lumaPitch, self->chromaPitch, width, height);
            }
            luma += 16;
            chroma += 4;
            out += self->outputColumnStep;
        }
        lumaRow += decoder->lumaRowStep;
        chromaURow += self->chromaPitch * 16;
        chromaVRow += self->chromaPitch * 16;
        outRow += self->outputRowStep;
    }
    return 0;
}
