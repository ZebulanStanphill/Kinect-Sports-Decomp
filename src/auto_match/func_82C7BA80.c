typedef struct Decoder_82C7BA80 {
    char pad0[0x88];
    unsigned int height; /* 0x88 */
    unsigned int width;  /* 0x8c */
    char pad90[0x2c];
    unsigned int strideY; /* 0xbc */
    char padC0[0x8];
    unsigned int strideUV; /* 0xc8 */
    char padCC[0x10];
    int offsetY;  /* 0xdc */
    int offsetUV; /* 0xe0 */
    char padE4[0xc5c];
    unsigned int scale; /* 0xd40 */
    char padD44[0x17c];
    unsigned char *planeY;     /* 0xec0 */
    unsigned char *planeU;     /* 0xec4 */
    unsigned char *planeV;     /* 0xec8 */
    unsigned char *planeAlpha; /* 0xecc */
    char padED0[0x14];
    unsigned char *alpha; /* 0xee4 */
    char padEE8[0x28];
    unsigned char *y;            /* 0xf10 */
    unsigned char *u;            /* 0xf14 */
    unsigned char *v;            /* 0xf18 */
    unsigned int scaledWidth;    /* 0xf1c */
    unsigned int scaledHeight;   /* 0xf20 */
    int zeroY;                   /* 0xf24 */
    unsigned int scaledStrideY;  /* 0xf28 */
    int zeroUV;                  /* 0xf2c */
    unsigned int scaledStrideUV; /* 0xf30 */
    int baseY;                   /* 0xf34 */
    int baseUV;                  /* 0xf38 */
    int padF3C;
    unsigned int fullWidth; /* 0xf40 */
} Decoder_82C7BA80;

void fn_82C7BA80(Decoder_82C7BA80 *self)
{
    self->zeroY = 0;
    self->scaledStrideY = self->strideY / self->scale;
    self->zeroUV = 0;
    self->scaledStrideUV = self->strideUV / self->scale;
    self->scaledWidth = self->width / self->scale;
    self->scaledHeight = self->height / self->scale;
    self->baseY = self->offsetY;
    self->baseUV = self->offsetUV;
    self->fullWidth = self->width;
    self->alpha = self->planeAlpha ? self->planeAlpha + self->offsetY : 0;
    self->y = self->planeY + self->offsetY;
    self->u = self->planeU + self->offsetUV;
    self->v = self->planeV + self->offsetUV;
}
