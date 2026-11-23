unsigned int _CountLeadingZeros(unsigned int value);

extern unsigned int fn_82547CF0(unsigned int x, unsigned int y, unsigned int pitch,
                                unsigned int bitsPerPixel);

/* Largest value fn_82547CF0 gives for the last texel of any tile of a width x height surface. */
unsigned int fn_82A98BA8(unsigned int width, unsigned int height, unsigned int bitsPerPixel)
{
    unsigned int tileWidths[5] = {8, 8, 8, 4, 2};
    unsigned int tileHeights[5] = {8, 4, 2, 2, 2};
    unsigned int log2Bits = 31 - _CountLeadingZeros(bitsPerPixel);
    unsigned int tileWidth = tileWidths[log2Bits];
    unsigned int tileHeight = tileHeights[log2Bits];
    unsigned int firstX = (width - 1) & ~31;
    unsigned int firstY = (height - 1) & ~((((1 << (7 - log2Bits)) + 31) & ~31) - 1);
    unsigned int pitch = (width + tileWidth - 1) / tileWidth * tileWidth;
    unsigned int largest = 0;
    unsigned int x;
    unsigned int y;
    for (y = firstY; y < height; y += tileHeight) {
        for (x = firstX; x < width; x += tileWidth) {
            unsigned int value = fn_82547CF0(x + tileWidth - 1, y + tileHeight - 1, pitch, bitsPerPixel);
            if (largest <= value) {
                largest = value;
            }
        }
    }
    return largest;
}
