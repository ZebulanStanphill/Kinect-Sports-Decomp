typedef struct View_82F26E28 {
    char pad0[0x2d0];
    int columns; // 0x2d0
    int rows;    // 0x2d4
} View_82F26E28;

void fn_82F26E28(View_82F26E28 *self, int column, int row, int *offsetX, int *offsetY)
{
    int x = *offsetX;
    int y = *offsetY;
    int width = self->columns * 8;
    int height = self->rows * 8;
    int left;
    int top;

    if (*offsetX != 0x4000) {
        left = (x >> 2) + column * 8;
        top = (y >> 2) + row * 8;
        if (left < -8) {
            x -= (left + 8) * 4;
        } else if (left > width) {
            x += (width - left) << 2;
        }
        if (top < -8) {
            y -= (top + 8) * 4;
        } else if (top > height) {
            y += (height - top) << 2;
        }
    }
    *offsetX = x;
    *offsetY = y;
}
