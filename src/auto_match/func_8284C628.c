typedef struct Format_8284C628 {
    int type;          /* 0x00 */
    int blockWidth;    /* 0x04 */
    int blockHeight;   /* 0x08 */
    int bytesPerBlock; /* 0x0c */
} Format_8284C628;

extern void fn_8284C428(unsigned int width, unsigned int height, int level, unsigned int *levelWidth,
                        unsigned int *levelHeight);
extern int fn_8284C528(unsigned int width, Format_8284C628 *format, int level);

int fn_8284C628(unsigned int width, unsigned int height, Format_8284C628 *format, int levels)
{
    unsigned int levelWidth = 0;
    unsigned int levelHeight = 0;
    int total = 0;
    int level;
    int pitch;
    unsigned int rows;

    if (levels == 0) {
        return 0;
    }
    for (level = 0; level < levels; level++) {
        fn_8284C428(width, height, level, &levelWidth, &levelHeight);
        pitch = fn_8284C528(width, format, level);
        rows = ((levelHeight + format->blockHeight - 1) & ~(format->blockHeight - 1)) / format->blockHeight;
        total += (((rows + 31) & ~31) * pitch + 0xfff) & ~0xfff;
    }
    return total;
}
