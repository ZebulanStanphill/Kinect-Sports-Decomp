typedef struct Rect_82655C68 {
    long left;   /* 0x00 */
    long top;    /* 0x04 */
    long right;  /* 0x08 */
    long bottom; /* 0x0c */
} Rect_82655C68;

typedef struct Mode_82655C68 {
    Rect_82655C68 rect;      /* 0x00 */
    unsigned int rate;       /* 0x10 */
    unsigned int scaledSize; /* 0x14 */
    char pad18[0x20];
} Mode_82655C68;

typedef struct Device_82655C68 {
    char pad0[0x35e8];
    unsigned int flags; /* 0x35e8 */
    char pad35EC[0x5500 - 0x35ec];
    unsigned int defaultRate; /* 0x5500 */
    unsigned int maxSize;     /* 0x5504 */
} Device_82655C68;

extern unsigned long VdQueryVideoFlags(void);

void fn_82655C68(Device_82655C68 *device, long defaultWidth, long defaultHeight, const Mode_82655C68 *in,
                 Mode_82655C68 *out)
{
    Rect_82655C68 rect = in->rect;
    unsigned int width;
    unsigned int height;
    unsigned int rate;
    unsigned int size;

    if (rect.left == 0 && rect.right == 0 && rect.top == 0 && rect.bottom == 0) {
        rect.right = defaultWidth;
        rect.bottom = defaultHeight;
    }
    width = rect.right - rect.left;
    height = rect.bottom - rect.top;
    rate = in->rate != 0 ? in->rate : device->defaultRate;
    size = in->scaledSize;
    if (size == 0) {
        size = rate * height / width;
        if ((device->flags & 1) != 0 || (VdQueryVideoFlags() & 1) != 0 || size > height ||
            size > device->maxSize) {
            size = device->maxSize;
        }
    }
    *out = *in;
    out->rate = rate;
    out->scaledSize = size;
    out->rect = rect;
}
