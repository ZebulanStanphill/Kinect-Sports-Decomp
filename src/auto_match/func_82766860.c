typedef struct Buffer_82766860 {
    int pad[3];            /* 0x0 */
    unsigned char **pages; /* 0xc */
} Buffer_82766860;

typedef struct Reader_82766860 {
    Buffer_82766860 *buffer; /* 0x0 */
} Reader_82766860;

/* Reads a one- or two-byte value (bit 0 of the first byte marks the second byte); returns
   the number of bytes read. Inline in the original, like the other readers. */
extern __inline unsigned int fn_82766860(Reader_82766860 *self, unsigned int offset, unsigned int *value)
{
    unsigned char **pages = self->buffer->pages;
    unsigned int first = pages[offset >> 12][offset & 0xfff];

    if ((first & 1) == 0) {
        *value = first >> 1;
        return 1;
    }
    offset = offset + 1;
    *value = (pages[offset >> 12][offset & 0xfff] << 7) | (first >> 1);
    return 2;
}
