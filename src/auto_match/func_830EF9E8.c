void fn_830EF9E8(int *mvX, int *mvY, int position, int limit)
{
    int posX = position & 0xffff;
    int maxX = limit & 0xffff;
    int posY = position >> 16;
    int maxY = limit >> 16;
    int x = *mvX;
    int px = x + posX;
    int y = *mvY;
    int py = y + posY;

    if (px < -0x3b) {
        *mvX = (x & 3) - posX - 0x38;
    } else if (px > maxX) {
        *mvX = (x & 3) - posX + maxX - 3;
    }
    if (py < -0x3b) {
        if (py & 4) {
            *mvY = (y & 3) - posY - 0x3c;
        } else {
            *mvY = (y & 3) - posY - 0x38;
        }
    } else if (py > maxY) {
        if (py & 4) {
            *mvY = (y & 3) - posY + maxY + 1;
        } else {
            *mvY = (y & 3) - posY + maxY - 3;
        }
    }
}
