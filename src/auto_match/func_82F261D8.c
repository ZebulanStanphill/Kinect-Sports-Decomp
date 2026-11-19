typedef struct Surface_82F261D8 {
    char pad[0x2d0];
    int widthInBlocks;  /* 0x2d0 */
    int heightInBlocks; /* 0x2d4 */
} Surface_82F261D8;

int fn_82F261D8(Surface_82F261D8 *surface, int *x, int *y, int blockX, int blockY)
{
    int rawX = *x;
    int rawY = *y;
    int originX = blockX * 16;
    int originY = blockY * 16;
    int posX;
    int posY;
    int maxX;
    int maxY;
    int minimum;
    int clipped;

    clipped = 0;
    if (rawY & 4) {
        minimum = -17;
        maxX = (surface->widthInBlocks << 4) + 1;
        maxY = (surface->heightInBlocks << 4) + 1;
    } else {
        minimum = -18;
        maxX = surface->widthInBlocks << 4;
        maxY = surface->heightInBlocks << 4;
    }
    posX = (rawX >> 2) + originX;
    posY = (rawY >> 2) + originY;
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
