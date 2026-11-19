typedef struct Frame_830D95E8 {
    char pad0[0x32];
    unsigned short width;  /* 0x32 */
    unsigned short height; /* 0x34 */
} Frame_830D95E8;

typedef struct Block_830D95E8 {
    char pad0[0x10];
    unsigned short y; /* 0x10 */
    unsigned short x; /* 0x12 */
} Block_830D95E8;

int fn_830D95E8(Frame_830D95E8 *frame, int mv, Block_830D95E8 *block)
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

    rawX = (short)mv;
    rawY = mv >> 16;
    originX = (block->x >> 1) * 16;
    originY = (block->y >> 1) * 16;
    clipped = 0;
    posX = (rawX >> 2) + originX;
    posY = (rawY >> 2) + originY;
    if (rawY & 4) {
        minimum = -17;
        maxX = (frame->width >> 1) * 16 + 1;
        maxY = (frame->height >> 1) * 16 + 1;
    } else {
        minimum = -18;
        maxX = (frame->width >> 1) * 16;
        maxY = (frame->height >> 1) * 16;
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
        rawX = ((posX - originX) << 2) + (rawX & 3);
        rawY = ((posY - originY) << 2) + (rawY & 3);
    }
    return (rawY << 16) | (rawX & 0xffff);
}
