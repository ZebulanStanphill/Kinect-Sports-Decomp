typedef struct PagedBuffer_827B14A8 {
    int unk0[3];
    unsigned char **pages; /* 0x0c */
} PagedBuffer_827B14A8;

typedef struct Writer_827B14A8 {
    int unk0[2];
    PagedBuffer_827B14A8 *buffer; /* 0x08 */
    int unk0c[24];
    unsigned int pos; /* 0x6c */
} Writer_827B14A8;

static __forceinline void PutByte(PagedBuffer_827B14A8 *buffer, unsigned int offset, unsigned char value)
{
    buffer->pages[offset >> 12][offset & 0xfff] = value;
}

static __forceinline void PutShort(Writer_827B14A8 *writer, unsigned int offset, int value)
{
    unsigned int at = writer->pos + offset;
    PutByte(writer->buffer, at, (unsigned char)value);
    PutByte(writer->buffer, at + 1, (unsigned char)(value >> 8));
}

void fn_827B14A8(Writer_827B14A8 *writer, int x, int y, int z)
{
    PutShort(writer, 4, x);
    PutShort(writer, 6, y);
    PutShort(writer, 8, z);
}
