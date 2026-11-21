#include "havok/hkString.h"

extern "C" {

typedef struct BlockBuffer_82CFED40 {
    int blockSize;     /* 0x0 */
    int lastBlockSize; /* 0x4 */
    char **blocks;     /* 0x8 */
    int numBlocks;     /* 0xc */
} BlockBuffer_82CFED40;


void fn_82CFED40(BlockBuffer_82CFED40 *self, char *dst, int size, int offset)
{
    int block = offset / self->blockSize;
    int position = offset - block * self->blockSize;

    while (size > 0) {
        int blockSize = block < self->numBlocks - 1 ? self->blockSize : self->lastBlockSize;
        int available = blockSize - position;
        const char *src = self->blocks[block] + position;
        if (size <= available) {
            hkString::memCpy(dst, src, size);
            return;
        }
        hkString::memCpy(dst, src, available);
        size -= available;
        dst += available;
        block++;
        position = 0;
    }
}

}
