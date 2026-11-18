typedef struct Surface_82CB9388 {
    char pad[0x88];
    int widthInBlocks;  /* 0x88 */
    int heightInBlocks; /* 0x8c */
} Surface_82CB9388;

int fn_82CB9388(Surface_82CB9388 *surface, int *x, int *y, int blockX, int blockY)
{
    int rawX = *x;
    int rawY = *y;
    int originX = blockX * 16;
    int originY = blockY * 16;
    int posX = (rawX >> 2) + originX;
    int clipped = 0;
    int posY = (rawY >> 2) + originY;
    int limit;

    if (posX < -16) {
        posX = -16;
        clipped = 1;
    } else {
        limit = surface->widthInBlocks << 4;
        if (posX > limit) {
            posX = limit;
            clipped = 1;
        }
    }
    if (posY < -16) {
        posY = -16;
        clipped = 1;
    } else {
        limit = surface->heightInBlocks << 4;
        if (posY > limit) {
            posY = limit;
            clipped = 1;
        }
    }
    if (clipped != 0) {
        *x = ((posX - originX) << 2) + (rawX & 3);
        *y = ((posY - originY) << 2) + (rawY & 3);
    }
    return clipped;
}
