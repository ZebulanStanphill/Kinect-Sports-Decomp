typedef struct Writer_82E70E20 {
    char pad0[0x40];
    unsigned __int64 startPosition; /* 0x40 */
    char pad48[0x5c - 0x48];
    unsigned int blockSize;    /* 0x5c */
    unsigned short blockCount; /* 0x60 */
    char pad62[0x68 - 0x62];
    unsigned __int64 lastPosition; /* 0x68 */
} Writer_82E70E20;

extern void fn_82E6F9C0(Writer_82E70E20 *writer, unsigned int startBlock, unsigned short blockCount);

int fn_82E70E20(Writer_82E70E20 *writer, unsigned __int64 position, int reserved, unsigned char *header,
                int *started)
{
    if (position % writer->blockSize > 0) {
        return 0x80070057;
    }
    if (header == 0 || started == 0) {
        return 0x80004003;
    }
    *started = 0;
    if (*(int *)(header + 2) != 0) {
        if (*(unsigned int *)(header + 7) == 0) {
            writer->startPosition = position;
            writer->blockCount = 1;
            *started = 1;
        } else {
            if (position != writer->lastPosition) {
                writer->blockCount++;
            }
            if (*(unsigned int *)(header + 0x1b) + *(unsigned int *)(header + 7) ==
                *(unsigned int *)(header + 0xb)) {
                fn_82E6F9C0(writer, (unsigned int)(writer->startPosition / writer->blockSize),
                            writer->blockCount);
            }
        }
        writer->lastPosition = position;
    }
    return 0;
}
