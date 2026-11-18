typedef struct FormatInfo_82E26630 {
    unsigned int format;       /* 0x00 */
    unsigned int pad04;        /* 0x04 */
    unsigned int type;         /* 0x08 */
    unsigned int bitsPerBlock; /* 0x0c */
    unsigned int pad10;        /* 0x10 */
    unsigned int blockWidth;   /* 0x14 */
    unsigned int pad18[3];
} FormatInfo_82E26630;

extern FormatInfo_82E26630 lbl_83187510[57];

extern int fn_82E26138(unsigned int format, unsigned int *out);

/* Returns the byte size of a surface of the given format, width and height (0: unknown format). */
unsigned int fn_82E26630(unsigned int format, unsigned int width, unsigned int height)
{
    unsigned int result = 0;
    unsigned int i;
    unsigned int blockWidth;
    unsigned int pitch;

    if (fn_82E26138(format, 0) == 0) {
        return 0;
    }
    for (i = 0; i != 57; i++) {
        if (format == lbl_83187510[i].format) {
            blockWidth = lbl_83187510[i].blockWidth;
            if (width % blockWidth != 0) {
                width += blockWidth - width % blockWidth;
            }
            pitch = lbl_83187510[i].bitsPerBlock * width / (blockWidth * 8);
            if (lbl_83187510[i].type == 0 || lbl_83187510[i].type == 3) {
                pitch = (pitch + 3) & ~3;
            }
            result = pitch * height;
            break;
        }
    }
    return result;
}
