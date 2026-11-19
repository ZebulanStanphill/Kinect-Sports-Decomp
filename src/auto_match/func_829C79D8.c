typedef struct VideoMode_829C79D8 {
    unsigned long displayWidth;  /* 0x00 */
    unsigned long displayHeight; /* 0x04 */
    int isInterlaced;            /* 0x08 */
    int isWideScreen;            /* 0x0c */
    int isHiDef;                 /* 0x10 */
    float refreshRate;           /* 0x14 */
    unsigned long videoStandard; /* 0x18 */
    unsigned long reserved[5];
} VideoMode_829C79D8;

typedef struct Settings_829C79D8 {
    unsigned int flags; /* 0x00 */
    int mode;           /* 0x04 */
    int field08;        /* 0x08 */
    int field0C;        /* 0x0c */
    int field10;        /* 0x10 */
    int field14;        /* 0x14 */
    int field18;        /* 0x18 */
    int format;         /* 0x1c */
    int gainLow;        /* 0x20 */
    int gainHigh;       /* 0x24 */
    int levelLow;       /* 0x28 */
    int levelHigh;      /* 0x2c */
    int scale0;         /* 0x30 */
    int scale1;         /* 0x34 */
    int scale2;         /* 0x38 */
    int field3C;        /* 0x3c */
    int field40;        /* 0x40 */
    int refreshRate;    /* 0x44: 16.16 fixed point */
    unsigned char pad48[0x14];
} Settings_829C79D8;

extern void *memset(void *dest, int value, unsigned int size);
extern const double lbl_820570D8;
extern void XGetVideoMode(VideoMode_829C79D8 *mode);

void fn_829C79D8(unsigned int options, int exclusive, Settings_829C79D8 *settings)
{
    VideoMode_829C79D8 videoMode;

    memset(settings, 0, sizeof(*settings));
    settings->flags = exclusive ? 0x80000000 : 0;
    if (options & 0x40) {
        settings->mode = 2;
        settings->format = 2;
    } else {
        settings->mode = 1;
        settings->format = 0;
    }
    settings->field08 = 0;
    settings->field14 = 0;
    settings->field18 = 1;
    settings->scale0 = 0x10000;
    settings->gainHigh = 0x1999;
    settings->gainLow = 0x1999;
    settings->levelHigh = 0xcccc;
    settings->levelLow = 0xcccc;
    settings->scale1 = 0x10000;
    settings->scale2 = 0x10000;
    XGetVideoMode(&videoMode);
    settings->refreshRate = (int)(videoMode.refreshRate * lbl_820570D8);
}
