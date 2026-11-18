typedef struct Block_82F23B08 {
    int unk0;
    unsigned char a[0x34]; /* 0x4 */
    unsigned char b[0x20]; /* 0x38 */
    unsigned char mode;    /* 0x58 */
    unsigned char pad59[0x114 - 0x59];
} Block_82F23B08;

typedef struct Decoder_82F23B08 {
    char pad0[0x2d0];
    int width;  /* 0x2d0 */
    int height; /* 0x2d4 */
    char pad2d8[0x8d8 - 0x2d8];
    int *rowRestart; /* 0x8d8 */
    int pad8dc;
    int restartEnabled; /* 0x8e0 */
    char pad8e4[0x1e54 - 0x8e4];
    Block_82F23B08 *blocks; /* 0x1e54 */
} Decoder_82F23B08;

extern void fn_82F21E78(Decoder_82F23B08 *self, int x, int y, unsigned char mode, unsigned char *b,
                        unsigned char *upB, unsigned char *leftB, unsigned char *a, unsigned char *upA,
                        unsigned char *leftA, int top, int left);

void fn_82F23B08(Decoder_82F23B08 *self)
{
    Block_82F23B08 *cur = self->blocks;
    int x;
    int y;

    if (self->restartEnabled != 0) {
        for (y = 0; y < self->height; y++) {
            for (x = 0; x < self->width; x++) {
                unsigned char *upA = cur[-self->width].a;
                unsigned char *upB = cur[-self->width].b;
                fn_82F21E78(self, x, y, cur->mode, cur->b, upB, cur[-1].b, cur->a, upA, cur[-1].a,
                            y == 0 || self->rowRestart[y] != 0, x == 0);
                cur++;
            }
        }
    } else {
        for (y = 0; y < self->height; y++) {
            for (x = 0; x < self->width; x++) {
                fn_82F21E78(self, x, y, cur->mode, cur->b, cur[-self->width].b, cur[-1].b, cur->a,
                            cur[-self->width].a, cur[-1].a, y == 0, x == 0);
                cur++;
            }
        }
    }
}
