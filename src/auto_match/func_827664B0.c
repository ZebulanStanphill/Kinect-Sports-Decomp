typedef struct Buffer_827664B0 {
    int pad[3];            /* 0x0 */
    unsigned char **pages; /* 0xc */
} Buffer_827664B0;

typedef struct Reader_827664B0 {
    Buffer_827664B0 *buffer; /* 0x0 */
} Reader_827664B0;

static __forceinline unsigned char Byte(Reader_827664B0 *self, unsigned int offset)
{
    return self->buffer->pages[offset >> 12][offset & 0xfff];
}

/* Reads a little-endian value whose first byte holds the count of extra bytes in its two
   low bits; returns the number of bytes read. The function is inline in the original (its
   callers know that it only writes through `value`). */
extern __inline unsigned int fn_827664B0(Reader_827664B0 *self, unsigned int offset, unsigned int *value)
{
    unsigned char first = Byte(self, offset);
    unsigned int result = first >> 2;

    switch (first & 3) {
    case 0:
        *value = result;
        return 1;
    case 1:
        *value = (Byte(self, offset + 1) << 6) | result;
        return 2;
    case 2:
        *value = (((Byte(self, offset + 2) << 8) | Byte(self, offset + 1)) << 6) | result;
        return 3;
    default:
        *value = (((((Byte(self, offset + 3) << 8) | Byte(self, offset + 2)) << 8) | Byte(self, offset + 1))
                  << 6) |
                 result;
        return 4;
    }
}
