typedef struct Decoder_82C2ECD8 {
    char reserved000[0x100];
    int size; /* 0x100 */
    char reserved104[0x58];
    unsigned char ***maps; /* 0x15c */
} Decoder_82C2ECD8;

int fn_82C2ECD8(Decoder_82C2ECD8 *self, int *table, int divisorX, int unused, int *out, int divisorY,
                int count)
{
    unsigned int ratio;
    int shiftX;
    int shiftY;
    int i;

    shiftX = 0;
    ratio = self->size / divisorX;
    while ((ratio >> shiftX) > 1) {
        shiftX++;
    }
    shiftY = 0;
    ratio = self->size / divisorY;
    while ((ratio >> shiftY) > 1) {
        shiftY++;
    }
    for (i = 0; i < count; i++) {
        out[i] = table[self->maps[shiftY][shiftX][i]];
    }
    return 0;
}
