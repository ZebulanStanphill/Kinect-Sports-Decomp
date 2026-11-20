struct Decoder_82C75268;

typedef void (*BlockFilter_82C75268)(struct Decoder_82C75268 *self, unsigned char *luma,
                                     unsigned char *chromaU, unsigned char *chromaV, unsigned int column,
                                     int unk5, unsigned int row, int unk7, int one, int unkF8, int lumaPitch,
                                     int chromaPitch);

typedef struct Decoder_82C75268 {
    char pad0[0x88];
    unsigned int columns; /* 0x88 */
    char pad8c[0x3c];
    int rows;        /* 0xc8 */
    int lumaPitch;   /* 0xcc */
    int chromaPitch; /* 0xd0 */
    char padd4[0x8];
    unsigned char *lumaBase;   /* 0xdc */
    unsigned char *chromaBase; /* 0xe0 */
    int lumaRowStep;           /* 0xe4 */
    char pade8[0x10];
    int unkF8; /* 0xf8 */
    char padfc[0xdc4];
    int srcLuma;    /* 0xec0 */
    int srcChromaU; /* 0xec4 */
    int srcChromaV; /* 0xec8 */
    char padecc[0x2c];
    int dstLuma;    /* 0xef8 */
    int dstChromaU; /* 0xefc */
    int dstChromaV; /* 0xf00 */
} Decoder_82C75268;

extern BlockFilter_82C75268 lbl_8329F14C;

extern void *memcpy(void *dst, const void *src, unsigned int size);

void fn_82C75268(Decoder_82C75268 *self, unsigned int firstRow, unsigned int lastRow)
{
    unsigned char *srcY = self->lumaBase + self->srcLuma;
    unsigned char *srcU = self->chromaBase + self->srcChromaU;
    unsigned char *srcV = self->chromaBase + self->srcChromaV;
    unsigned char *dstY = self->lumaBase + self->dstLuma;
    unsigned char *dstU = self->chromaBase + self->dstChromaU;
    unsigned char *dstV = self->chromaBase + self->dstChromaV;
    unsigned int columns;
    unsigned int row;
    int i;

    for (i = 0; i < self->rows; i++) {
        memcpy(dstU, srcU, self->chromaPitch);
        dstU += self->chromaPitch;
        srcU += self->chromaPitch;
        memcpy(dstV, srcV, self->chromaPitch);
        dstV += self->chromaPitch;
        srcV += self->chromaPitch;
        memcpy(dstY, srcY, self->lumaPitch);
        dstY += self->lumaPitch;
        srcY += self->lumaPitch;
    }

    dstY = self->lumaBase + self->dstLuma;
    dstU = self->chromaBase + self->dstChromaU;
    dstV = self->chromaBase + self->dstChromaV;
    columns = self->columns;
    for (row = firstRow; row < lastRow; row++) {
        unsigned char *y = dstY;
        unsigned char *u = dstU;
        unsigned char *v = dstV;
        unsigned int column;

        for (column = 0; column < columns; column++) {
            lbl_8329F14C(self, y, u, v, column, 0, row, 0, 1, self->unkF8, self->lumaPitch,
                         self->chromaPitch);
            y += 16;
            u += 4;
            v += 4;
        }
        dstY += self->lumaRowStep;
        dstU += self->chromaPitch * 16;
        dstV += self->chromaPitch * 16;
    }
}
