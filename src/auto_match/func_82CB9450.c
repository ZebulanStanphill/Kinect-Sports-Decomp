typedef struct Surface_82CB9450 {
    char pad[0x88];
    int widthInBlocks;  /* 0x88 */
    int heightInBlocks; /* 0x8c */
} Surface_82CB9450;

int fn_82CB9450(Surface_82CB9450 *surface, int *x, int *y, int blockX, int blockY)
{
    int rawX;
    int rawY;
    int originX;
    int originY;
    int posX;
    int posY;
    int maxX;
    int maxY;
    int minimum;
    int clipped;

    rawX = *x;
    rawY = *y;
    originX = blockX * 16;
    originY = blockY * 16;
    clipped = 0;
    posX = (rawX >> 2) + originX;
    posY = (rawY >> 2) + originY;
    if (rawY & 4) {
        minimum = -17;
        maxX = (surface->widthInBlocks << 4) + 1;
        maxY = (surface->heightInBlocks << 4) + 1;
    } else {
        minimum = -18;
        maxX = surface->widthInBlocks << 4;
        maxY = surface->heightInBlocks << 4;
    }
    if (posX < minimum) {
        posX = minimum;
        clipped = 1;
    } else if (posX > maxX) {
        posX = maxX;
        clipped = 1;
    }
    if (posY < minimum) {
        posY = minimum;
        clipped = 1;
    } else if (posY > maxY) {
        posY = maxY;
        clipped = 1;
    }
    if (clipped != 0) {
        *x = ((posX - originX) << 2) + (rawX & 3);
        *y = ((posY - originY) << 2) + (rawY & 3);
    }
    return clipped;
}
