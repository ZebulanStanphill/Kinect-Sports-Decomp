typedef struct Image_82AAC5E8 {
    unsigned char *data; /* 0x00 */
    int pitch;           /* 0x04 */
    int width;           /* 0x08 */
    int height;          /* 0x0c */
    short channels;      /* 0x10 */
    short pad12;
    short bits; /* 0x14 */
} Image_82AAC5E8;

extern void fn_82AAC0E0(unsigned char **planes, unsigned char *dst, int pitch, int width, int rows);
extern void fn_82AAC198(unsigned char **planes, unsigned char *dst, int pitch, int width, int rows);
extern void fn_82AAC290(unsigned short **planes, unsigned short *dst, int pitch, int width, int rows);
extern void fn_82AAC328(unsigned char **planes, unsigned char *dst, int pitch, int width, int rows);
extern void fn_82AAC3E8(unsigned short **planes, unsigned short *dst, int pitch, int width, int rows);
extern void fn_82AAC488(unsigned char **planes, unsigned char *dst, int pitch, int width, int rows);
extern void fn_82AAC550(unsigned short **planes, unsigned short *dst, int pitch, int width, int rows);

int fn_82AAC5E8(Image_82AAC5E8 *image, void **planes, int row)
{
    void *reordered[4];
    int pitch = image->pitch;
    int channels = image->channels;
    int bits = image->bits;
    int width = image->width;
    unsigned char *dst = image->data + image->pitch * row;
    int x;

    if (row < 0 || row >= image->height) {
        return -39;
    }
    if (channels == 1) {
        reordered[0] = planes[0];
        if (bits <= 8) {
            fn_82AAC0E0((unsigned char **)reordered, dst, pitch, width, 1);
        } else {
            unsigned short *src = (unsigned short *)reordered[0];
            unsigned short *out = (unsigned short *)dst;

            for (x = 0; x < width; x++) {
                *out++ = src[x] + 0x8000;
            }
        }
    } else if (channels == 2) {
        reordered[0] = planes[1];
        reordered[1] = planes[0];
        if (bits <= 8) {
            fn_82AAC198((unsigned char **)reordered, dst, pitch, width, 1);
        } else {
            fn_82AAC290((unsigned short **)reordered, (unsigned short *)dst, pitch, width, 1);
        }
    } else if (channels == 3) {
        reordered[0] = planes[2];
        reordered[1] = planes[1];
        reordered[2] = planes[0];
        if (bits <= 8) {
            fn_82AAC328((unsigned char **)reordered, dst, pitch, width, 1);
        } else {
            fn_82AAC3E8((unsigned short **)reordered, (unsigned short *)dst, pitch, width, 1);
        }
    } else {
        reordered[0] = planes[3];
        reordered[1] = planes[2];
        reordered[2] = planes[1];
        reordered[3] = planes[0];
        if (bits <= 8) {
            fn_82AAC488((unsigned char **)reordered, dst, pitch, width, 1);
        } else {
            fn_82AAC550((unsigned short **)reordered, (unsigned short *)dst, pitch, width, 1);
        }
    }
    return 0;
}
