typedef struct Picture_82C9B1F8 {
    char pad00[0x32];
    unsigned short width;  /* 0x32 */
    unsigned short height; /* 0x34 */
} Picture_82C9B1F8;

typedef struct Block_82C9B1F8 {
    char pad00[0x10];
    unsigned short row;    /* 0x10 */
    unsigned short column; /* 0x12 */
} Block_82C9B1F8;

int fn_82C9B1F8(const Picture_82C9B1F8 *picture, int type, int vector, const Block_82C9B1F8 *block)
{
    int isTwo = type == 2;
    int chroma = type & 1;
    int x = (short)vector;
    int y = vector >> 16;
    int luma = 0;
    int width = picture->width >> chroma;
    int height = picture->height >> chroma;
    int posX;
    int posY;
    int maxX;
    int maxY;
    int minimum;

    if (chroma == 0) {
        luma = 1;
    }
    posX = (block->column >> (unsigned short)chroma) * 32 + x;
    posY = (block->row >> (unsigned short)chroma) * 32 + y;
    minimum = ((-7 - luma) * 4) << luma;
    maxX = (width * 8 + luma) * 4 - 4;
    maxY = (height * 8 + luma) * 4 - 4;

    if (isTwo > 0) {
        minimum += 4;
        maxX -= 4;
        maxY -= 4;
    } else {
        posX &= ~(luma * 3);
        posY &= ~(luma * 3);
    }
    if (posX < minimum) {
        x += minimum - posX;
    } else if (posX > maxX) {
        x += maxX - posX;
    }
    if (posY < minimum) {
        y += minimum - posY;
    } else if (posY > maxY) {
        y += maxY - posY;
    }
    return (y << 16) | (x & 0xffff);
}
