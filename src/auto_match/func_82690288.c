typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;

int fn_82690288(U8 *p, U32 size, U32 shift, U32 align)
{
    U32 start;
    U32 d;
    U32 n;
    U32 bytes;

    bytes = size << shift;
    start = ((U32)p + align) & ~align;
    d = start - (U32)p;
    while (d != 0 && d < 0x10) {
        d += align + 1;
        start += align + 1;
    }
    n = *(U16 *)(p + 0xc);
    if (n >= 0x21) {
        n = *(U32 *)(p + 0x10);
    }
    return (U32)p + (n << shift) >= start + bytes;
}
