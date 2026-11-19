typedef struct Block_82C95388 {
    unsigned int info;   /* 0x0 */
    int pad4;            /* 0x4 */
    unsigned char b[6];  /* 0x8 */
    unsigned char a[10]; /* 0xe */
} Block_82C95388;

typedef struct Decoder_82C95388 {
    char pad0[0x88];
    int width;  /* 0x88 */
    int height; /* 0x8c */
    int stride; /* 0x90 */
    char pad94[0x110 - 0x94];
    Block_82C95388 *blocks; /* 0x110 */
    char pad114[0x50d0 - 0x114];
    int firstRow; /* 0x50d0 */
    char pad50d4[0x55b4 - 0x50d4];
    int restartEnabled; /* 0x55b4 */
    char pad55b8[0x55d0 - 0x55b8];
    int *rowRestart; /* 0x55d0 */
} Decoder_82C95388;

extern void fn_82C9EA58(Decoder_82C95388 *self, int x, int y, int mode, unsigned char *b, unsigned char *upB,
                        unsigned char *leftB, unsigned char *a, unsigned char *upA, unsigned char *leftA,
                        int top, int left);

void fn_82C95388(Decoder_82C95388 *self)
{
    Block_82C95388 *cur = self->blocks + self->firstRow * self->stride;
    int x;
    int y;

    if (self->restartEnabled != 0) {
        for (y = 0; y < self->height; y++) {
            for (x = 0; x < self->width; x++) {
                unsigned char *upA = cur[-self->width].a;
                unsigned char *upB = cur[-self->width].b;
                fn_82C9EA58(self, x, y, (cur->info >> 8) & 7, cur->b, upB, cur[-1].b, cur->a, upA, cur[-1].a,
                            y == 0 || self->rowRestart[y] != 0, x == 0);
                cur++;
            }
        }
    } else {
        for (y = 0; y < self->height; y++) {
            for (x = 0; x < self->width; x++) {
                fn_82C9EA58(self, x, y, (cur->info >> 8) & 7, cur->b, cur[-self->width].b, cur[-1].b, cur->a,
                            cur[-self->width].a, cur[-1].a, y == 0, x == 0);
                cur++;
            }
        }
    }
}
