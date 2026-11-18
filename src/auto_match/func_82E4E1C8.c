typedef struct Format_82E4E1C8 {
    char pad0[0xe];
    unsigned short bitCount; /* 0x0e */
    unsigned int fourcc;     /* 0x10 */
} Format_82E4E1C8;

/* Returns 1 for YUY2, YV12 and 32-bit RGB (BI_RGB or BI_BITFIELDS). */
int fn_82E4E1C8(Format_82E4E1C8 *fmt)
{
    int ok = 0;

    if (fmt->fourcc == 0x32595559) {
        ok |= 1;
    }
    if (fmt->fourcc == 0x32315659) {
        ok |= 1;
    }
    if ((fmt->fourcc == 0 || fmt->fourcc == 3) && fmt->bitCount == 0x20) {
        ok |= 1;
    }
    return ok;
}
