typedef struct Texel_82B63DA8 {
    float x; /* 0x0 */
    float y; /* 0x4 */
} Texel_82B63DA8;

typedef struct Block_82B63DA8 {
    unsigned int words[2];
} Block_82B63DA8;

extern void fn_82B63790(Block_82B63DA8 *block, float *ys, float *xs, int width, int height);

void fn_82B63DA8(int width, int height, const char *source, int pitch, Block_82B63DA8 *blocks, int blockPitch,
                 int padX, int padY)
{
    float xs[16];
    float ys[16];
    int blocksX;
    int blocksY;
    int bx;
    int by;
    int x;
    int y;
    int blockWidth;
    int blockHeight;
    const Texel_82B63DA8 *texel;

    blocksX = width / 4;
    blocksY = height / 4;
    for (by = 0; by < blocksY; by++) {
        blockHeight = by < blocksY - 1 ? 4 : 4 - padY;
        for (bx = 0; bx < blocksX; bx++) {
            for (y = 0; y < 4; y++) {
                for (x = 0; x < 4; x++) {
                    texel = (const Texel_82B63DA8 *)(source + (by * 4 + y) * pitch) + bx * 4 + x;
                    xs[y * 4 + x] = texel->x;
                    ys[y * 4 + x] = texel->y;
                }
            }
            blockWidth = bx < blocksX - 1 ? 4 : 4 - padX;
            fn_82B63790(blocks, ys, xs, blockWidth, blockHeight);
            blocks++;
        }
        blocks += blockPitch - blocksX;
    }
}
