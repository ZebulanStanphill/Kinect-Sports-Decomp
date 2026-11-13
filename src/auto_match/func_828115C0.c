int fn_828115C0(unsigned char *bits, unsigned int start, unsigned int count)
{
    unsigned int end;
    unsigned int firstByte;
    unsigned int lastByte;
    unsigned char firstMask;
    unsigned char lastMask;
    unsigned char *p;
    unsigned int n;
    unsigned int i;

    end = start + count - 1;
    firstMask = (unsigned char)((0x100 >> (start & 7)) - 1);
    lastMask = (unsigned char)~((1 << (7 - (end & 7))) - 1);
    firstByte = start >> 3;
    lastByte = end >> 3;
    p = bits + firstByte;

    if (firstByte == lastByte) {
        return *p & lastMask & firstMask;
    }
    if ((*p & firstMask) != 0) {
        return 1;
    }
    n = lastByte - firstByte - 1;
    p++;
    for (i = 0; i < n; i++) {
        if (*p != 0) {
            return 1;
        }
        p++;
    }
    return *p & lastMask;
}
