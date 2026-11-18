extern void *memset(void *dst, int value, unsigned int size);

typedef struct Key_82ABC838 {
    unsigned char bytes[0x20];
} Key_82ABC838;

typedef struct Table_82ABC838 {
    unsigned char bytes[0x80];
} Table_82ABC838;

typedef struct Palette_82ABC838 {
    unsigned char bytes[0x300];
} Palette_82ABC838;

typedef struct Desc_82ABC838 {
    unsigned int format;      /* 0x0 */
    unsigned int flags;       /* 0x4 */
    unsigned int width;       /* 0x8 */
    unsigned int height;      /* 0xc */
    Key_82ABC838 key;         /* 0x10 */
    Table_82ABC838 table;     /* 0x30 */
    Palette_82ABC838 palette; /* 0xb0 */
    unsigned char mask[0x20]; /* 0x3b0 */
    int tableValid;           /* 0x3d0 */
    int paletteValid;         /* 0x3d4 */
    char pad3d8[0x24];
    int extraA; /* 0x3fc */
    int extraB; /* 0x400 */
    char pad404[0x18];
    int mode; /* 0x41c */
    char pad420[0x28];
    int kind; /* 0x448 */
    char pad44c[0x28];
} Desc_82ABC838;

Desc_82ABC838 *fn_82ABC838(Desc_82ABC838 *self, int mode, unsigned int format, unsigned int flags,
                           unsigned int width, unsigned int height, const Key_82ABC838 *key,
                           const Table_82ABC838 *table, const Palette_82ABC838 *palette, int extraA,
                           int extraB)
{
    memset(self, 0, sizeof(*self));
    self->mode = mode;
    if (palette != 0) {
        self->paletteValid = 1;
        self->palette = *palette;
    }
    self->format = format;
    self->flags = flags;
    self->width = width;
    self->height = height;
    if (key != 0) {
        memset(self->mask, 0xff, sizeof(self->mask));
        self->key = *key;
    }
    if (table != 0) {
        self->tableValid = -1;
        self->table = *table;
    }
    self->extraA = extraA;
    self->extraB = extraB;
    if (mode != 0) {
        if (format & 0x10000) {
            self->kind = (flags & 0x40000) ? 2 : 1;
        } else {
            self->kind = 0;
        }
    } else {
        self->kind = (format >> 17) & 1;
    }
    return self;
}
