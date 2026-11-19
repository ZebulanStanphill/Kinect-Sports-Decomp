typedef struct Rect_82837060 {
    int left;   /* 0x0 */
    int top;    /* 0x4 */
    int right;  /* 0x8 */
    int bottom; /* 0xc */
} Rect_82837060;

typedef struct Point_82837060 {
    int x; /* 0x0 */
    int y; /* 0x4 */
} Point_82837060;

void fn_82837060(Point_82837060 *origin, Rect_82837060 *rect, int x, int y, int width, int height, int maxX,
                 int maxY)
{
    int left;
    int top;
    int right;
    int bottom;

    left = x - 7;
    top = y - 7;
    left = left > 0 ? left : 0;
    top = top > 0 ? top : 0;
    left = (left + 7) & ~7;
    rect->left = left;
    rect->top = (top + 7) & ~7;
    right = x + width;
    if (right >= maxX) {
        right = maxX;
    }
    rect->right = (right + 7) & ~7;
    bottom = y + height;
    if (bottom >= maxY) {
        bottom = maxY;
    }
    rect->bottom = (bottom + 7) & ~7;
    if (rect->right > maxX || rect->bottom > maxY) {
        rect->right = maxX;
        rect->bottom = maxY;
    }
    origin->x = left;
    origin->y = rect->top;
}
