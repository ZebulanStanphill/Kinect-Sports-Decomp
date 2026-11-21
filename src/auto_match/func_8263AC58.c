extern void fn_8263AB38(unsigned int format, unsigned int *blockWidth, unsigned int *blockHeight);

unsigned int fn_8263AC58(unsigned int *width, unsigned int *height, unsigned int *depth,
                         unsigned int bitsPerPixel, unsigned int format, unsigned int type, int packed)
{
    unsigned int blockWidth;
    unsigned int blockHeight;
    unsigned int tileWidth;
    unsigned int tileHeight;
    unsigned int depthAlignment;
    unsigned int bytesPerBlock;
    unsigned int alignment;
    unsigned int sliceSize;

    tileWidth = 32;
    tileHeight = type != 0 ? 32 : 1;
    depthAlignment = type == 2 ? 4 : 1;
    fn_8263AB38(format, &blockWidth, &blockHeight);
    if (packed == 0) {
        bytesPerBlock = blockWidth * blockHeight * bitsPerPixel / 8;
        if (bytesPerBlock != 0 && 256 / bytesPerBlock >= 32) {
            tileWidth = 256 / bytesPerBlock;
        }
    }
    alignment = blockWidth * tileWidth;
    *width = (*width + alignment - 1) & ~(alignment - 1);
    alignment = blockHeight * tileHeight;
    *height = (*height + alignment - 1) & ~(alignment - 1);
    *depth = (*depth + depthAlignment - 1) & ~(depthAlignment - 1);
    sliceSize = (*width * bitsPerPixel >> 3) * *height;
    if (type != 2) {
        return ((sliceSize + 0xfff) & ~0xfff) * *depth;
    }
    return (*depth * sliceSize + 0xfff) & ~0xfff;
}
