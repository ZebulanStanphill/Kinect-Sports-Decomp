typedef struct {
    int unk0;
    unsigned int sizeAndFlags;
} Block_82FA5DE0;

int fn_82FA5DE0(Block_82FA5DE0 *block, unsigned int size)
{
    return (block->sizeAndFlags & ~3u) >= size + 0x10;
}
