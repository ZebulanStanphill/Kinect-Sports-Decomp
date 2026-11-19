typedef struct Format_82EDC118 {
    int f0;
    int width;  /* 0x04 */
    int height; /* 0x08 */
    char padC[8];
    int pitch; /* 0x14 */
} Format_82EDC118;

typedef struct Media_82EDC118 {
    int f0;
    Format_82EDC118 *format; /* 0x04 */
    char pad8[8];
    int width;  /* 0x10 */
    int height; /* 0x14 */
    char pad18[8];
    int frameWidth;      /* 0x20 */
    int frameHeight;     /* 0x24 */
    int lastWidth;       /* 0x28 */
    int lastHeight;      /* 0x2c */
    int lastFrameWidth;  /* 0x30 */
    int lastFrameHeight; /* 0x34 */
    char pad38[8];
    char scaler[0x8c];    /* 0x40 */
    char converter[0x88]; /* 0xcc */
    int useConverter;     /* 0x154 */
    int interlaced;       /* 0x158 */
    int changes;          /* 0x15c */
} Media_82EDC118;

int fn_82EDC068(Media_82EDC118 *self, int width, int height);
void fn_82CC6160(void *converter, int width, int height, int frameWidth, int frameHeight);
void fn_82F2CD08(void *scaler, int width, int height, int frameWidth, int frameHeight);

int fn_82EDC118(Media_82EDC118 *self)
{
    int outHeight = self->frameHeight;
    Format_82EDC118 *format;

    self->changes = 0;
    if (self->interlaced == 0) {
        if (self->width != self->lastWidth || self->height != self->lastHeight) {
            self->changes = 1;
        }
        if (self->frameWidth != self->lastFrameWidth || self->frameHeight != self->lastFrameHeight) {
            self->changes += 2;
        }
        self->format->height = self->height;
    } else {
        self->changes = 3;
        self->format->height = self->height / 2;
        outHeight = outHeight / 2;
    }
    self->format->width = self->width;
    format = self->format;
    format->pitch = fn_82EDC068(self, format->width, format->height);
    if (self->useConverter != 0) {
        fn_82CC6160(self->converter, self->width, self->format->height, self->frameWidth, outHeight);
    } else {
        fn_82F2CD08(self->scaler, self->width, self->format->height, self->frameWidth, outHeight);
    }
    return 1;
}
