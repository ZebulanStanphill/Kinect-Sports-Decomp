typedef struct Block_82F23A50 {
    int unk0;
    unsigned char a[0x34];
    unsigned char b[0x20];
    unsigned char mode;
    unsigned char pad59[0x114 - 0x59];
} Block_82F23A50;

typedef struct Decoder_82F23A50 {
    char pad0[0x2d0];
    int width;
    int height;
    char pad2d8[0x1e54 - 0x2d8];
    Block_82F23A50 *blocks;
} Decoder_82F23A50;

extern void fn_82F215D8(Decoder_82F23A50 *self, int x, int y, unsigned char mode,
                        unsigned char *b, unsigned char *upB, unsigned char *leftB,
                        unsigned char *a, unsigned char *upA, unsigned char *leftA,
                        int top, int left);

void fn_82F23A50(Decoder_82F23A50 *self)
{
    Block_82F23A50 *cur = self->blocks;
    int x;
    int y;
    for (y = 0; y < self->height; y++) {
        for (x = 0; x < self->width; x++) {
            fn_82F215D8(self, x, y, cur->mode, cur->b, cur[-self->width].b, cur[-1].b, cur->a,
                        cur[-self->width].a, cur[-1].a, y == 0, x == 0);
            cur++;
        }
    }
}
