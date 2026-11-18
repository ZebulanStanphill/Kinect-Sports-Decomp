typedef struct Decoder_82ED4B70 {
    char pad0000[0x564];
    int lumaPitch;   /* 0x564 */
    int chromaPitch; /* 0x568 */
    char pad056C[0x4ef8 - 0x56c];
    unsigned char *frame; /* 0x4ef8 */
} Decoder_82ED4B70;

void *memcpy(void *dst, const void *src, unsigned int size);

void fn_82ED4B70(Decoder_82ED4B70 *self, unsigned char *srcY, unsigned char *srcU, unsigned char *srcV,
                 int width, int height)
{
    unsigned char *frame = self->frame;
    unsigned char *planeU;
    unsigned char *planeV;
    int i;

    for (i = 0; i < height; i++)
        memcpy(frame + i * width, srcY + i * self->lumaPitch, width);
    planeU = frame + width * height;
    for (i = 0; i < height / 2; i++)
        memcpy(planeU + (i * width) / 2, srcU + self->chromaPitch * i, width / 2);
    planeV = planeU + (width * height) / 4;
    for (i = 0; i < height / 2; i++)
        memcpy(planeV + (i * width) / 2, srcV + self->chromaPitch * i, width / 2);
}
