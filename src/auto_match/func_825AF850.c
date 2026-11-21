void fn_825AF850(unsigned char *data, unsigned __int64 value, unsigned __int64 bitPos)
{
    unsigned __int64 byteIndex;
    unsigned __int64 bitOffset;
    unsigned __int64 remaining;
    unsigned __int64 count;
    unsigned __int64 shift;
    unsigned __int64 mask;

    byteIndex = bitPos >> 3;
    bitOffset = bitPos & 7;
    remaining = 3;
    do {
        if (bitOffset != 0) {
            count = 8 - bitOffset;
            if (count > remaining) {
                count = remaining;
            }
            shift = 8 - count - bitOffset;
            remaining -= count;
            mask = (((unsigned __int64)1 << count) - 1) << shift;
            data[byteIndex] = (unsigned char)(((value >> remaining) << shift) & mask) |
                              ((unsigned char)~mask & data[byteIndex]);
            byteIndex++;
            bitOffset = 0;
        } else if (remaining >= 8) {
            remaining -= 8;
            data[byteIndex] = (unsigned char)(value >> remaining);
            byteIndex++;
        } else {
            shift = 8 - remaining;
            mask = (((unsigned __int64)1 << remaining) - 1) << shift;
            data[byteIndex] =
                (unsigned char)((value << shift) & mask) | ((unsigned char)~mask & data[byteIndex]);
            remaining = 0;
        }
    } while (remaining != 0);
}
