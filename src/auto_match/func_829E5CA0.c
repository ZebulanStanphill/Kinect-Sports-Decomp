typedef struct Rect_829E5CA0 {
    int left;   /* 0x00 */
    int top;    /* 0x04 */
    int right;  /* 0x08 */
    int bottom; /* 0x0c */
} Rect_829E5CA0;

typedef struct Image_829E5CA0 {
    char pad[0x30];      /* 0x00 */
    unsigned int width;  /* 0x30 */
    unsigned int height; /* 0x34 */
} Image_829E5CA0;

int fn_829E5CA0(Image_829E5CA0 *self, Rect_829E5CA0 rect)
{
    if (rect.right == 0 && rect.left == 0 && rect.top == 0) {
        if (rect.bottom == 0) {
            return 0x80070057;
        }
    } else if (rect.top < 0) {
        return 0x80070057;
    }
    if (rect.bottom <= rect.top || (unsigned int)(rect.bottom - rect.top) > self->height) {
        return 0x80070057;
    }
    if (rect.left < 0 || rect.right <= rect.left) {
        return 0x80070057;
    }
    return self->width < (unsigned int)(rect.right - rect.left) ? 0x80070057 : 0;
}
