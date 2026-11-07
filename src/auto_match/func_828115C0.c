typedef unsigned char U8;
typedef unsigned int U32;

int fn_828115C0(U8 *bits, U32 start, U32 count)
{
    U32 end;
    U32 firstByte;
    U32 lastByte;
    U8 firstMask;
    U8 lastMask;
    U8 *p;
    U32 n;
    U32 i;

    end = start + count - 1;
    firstMask = (U8)((0x100 >> (start & 7)) - 1);
    lastMask = (U8)~((1 << (7 - (end & 7))) - 1);
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
