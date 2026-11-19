typedef struct Picture_830D96C8 {
    char pad0[0x32];
    unsigned short width;  /* 0x32 */
    unsigned short height; /* 0x34 */
} Picture_830D96C8;

typedef struct Block_830D96C8 {
    char pad0[0x10];
    unsigned short row;    /* 0x10 */
    unsigned short column; /* 0x12 */
} Block_830D96C8;

int fn_830D96C8(Picture_830D96C8 *self, int vector, Block_830D96C8 *block)
{
    int y = vector >> 16;
    int x = (short)vector;
    int blockX = block->column >> 1;
    int blockY = block->row >> 1;
    int maxX = (self->width >> 1) * 8;
    int minY;
    int maxY;
    int posX;
    int posY;

    if (y & 4) {
        minY = -9;
        maxY = (self->height >> 1) * 8 + 1;
    } else {
        minY = -8;
        maxY = (self->height >> 1) * 8;
    }
    if (x != 0x4000) {
        posX = blockX * 8 + (x >> 2);
        posY = blockY * 8 + (y >> 2);
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
    return (y << 16) | (x & 0xffff);
}
