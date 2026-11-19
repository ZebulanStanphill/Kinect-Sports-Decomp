typedef struct Buffer_82766EF0 {
    int pad[3];            /* 0x0 */
    unsigned char **pages; /* 0xc */
} Buffer_82766EF0;

typedef struct Table_82766EF0 {
    int pad0[2];             /* 0x0 */
    Buffer_82766EF0 *buffer; /* 0x8 */
    int pad1[2];             /* 0xc */
    int count;               /* 0x14 */
    int offset;              /* 0x18 */
} Table_82766EF0;

static __forceinline unsigned char Byte(Buffer_82766EF0 *buffer, unsigned int offset)
{
    return buffer->pages[offset >> 12][offset & 0xfff];
}

static __forceinline unsigned short ReadU16(Buffer_82766EF0 *buffer, unsigned int offset)
{
    return Byte(buffer, offset) | (Byte(buffer, offset + 1) << 8);
}

static __forceinline unsigned char KeyLess(unsigned int first, unsigned int second, unsigned int a,
                                           unsigned int b)
{
    if (first != a) {
        return first < a;
    }
    return second < b;
}

/* Binary search over six-byte records (two 16-bit keys and a signed 16-bit value) in a paged
   buffer; returns the value as a float, or 0.0f when the key pair is absent. */
float fn_82766EF0(Table_82766EF0 *self, unsigned int first, unsigned int second)
{
    int hi = self->count - 1;
    int lo = 0;
    while (lo <= hi) {
        Buffer_82766EF0 *buffer = self->buffer;
        Buffer_82766EF0 *secondKeyBuffer = buffer;
        int mid = (lo + hi) / 2;
        unsigned int idx = self->offset + mid * 6;
        unsigned int a;
        unsigned int b;

        a = ReadU16(buffer, idx);
        b = ReadU16(secondKeyBuffer, idx + 2);
        if (a == first && b == second) {
            return (short)ReadU16(buffer, idx + 4);
        }
        if (KeyLess(first, second, a, b)) {
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }
    return 0.0f;
}
