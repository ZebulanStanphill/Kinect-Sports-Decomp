typedef struct Decoder_82F26D38 {
    char pad0[0x2d0];
    unsigned int widthInBlocks;  /* 0x2d0 */
    unsigned int heightInBlocks; /* 0x2d4 */
} Decoder_82F26D38;

void fn_82F26D38(Decoder_82F26D38 *self, unsigned int blockX, unsigned int blockY, int *mvX, int *mvY)
{
    int y = *mvY;
    int x = *mvX;
    int maxX = self->widthInBlocks * 8;
    int posX;
    int posY;
    int minY;
    int maxY;

    if (y & 4) {
        minY = -9;
        maxY = self->heightInBlocks * 8 + 1;
    } else {
        minY = -8;
        maxY = self->heightInBlocks * 8;
    }
    if (*mvX != 0x4000) {
        posX = (x >> 2) + blockX * 8;
        posY = (y >> 2) + blockY * 8;
        if (posX < -8) {
            x -= (posX + 8) * 4;
        } else if (posX > maxX) {
            x += (maxX - posX) << 2;
        }
        if (posY < minY) {
            y += (minY - posY) << 2;
        } else if (posY > maxY) {
            y += (maxY - posY) << 2;
        }
    }
    *mvX = x;
    *mvY = y;
}
