unsigned __int64 fn_8223A9E0(const unsigned char *data, unsigned __int64 bitPos, unsigned __int64 remaining)
{
    unsigned __int64 byteIndex;
    unsigned __int64 bitOffset;
    unsigned __int64 value;
    unsigned __int64 count;
    unsigned __int64 shift;

    byteIndex = bitPos >> 3;
    value = 0;
    bitOffset = bitPos & 7;
    do {
        if (bitOffset != 0) {
            count = 8 - bitOffset;
            if (count > remaining) {
                count = remaining;
            }
            shift = 8 - count - bitOffset;
            remaining -= count;
            value = (data[byteIndex] & ((((unsigned __int64)1 << count) - 1) << shift)) >> shift;
            byteIndex++;
            bitOffset = 0;
        } else if (remaining >= 8) {
            value = (value << 8) | data[byteIndex];
            remaining -= 8;
            byteIndex++;
        } else {
            shift = 8 - remaining;
            value = (value << remaining) |
                    ((data[byteIndex] & ((((unsigned __int64)1 << remaining) - 1) << shift)) >> shift);
            remaining = 0;
        }
    } while (remaining != 0);
    return value;
}
