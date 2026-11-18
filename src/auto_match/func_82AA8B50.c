typedef struct Stream_82AA8B50 {
    unsigned char *data; /* 0x0 */
    int size;            /* 0x4 */
    int pos;             /* 0x8 */
} Stream_82AA8B50;

typedef struct Reader_82AA8B50 {
    char pad0[0x24];
    int base; /* 0x24 */
    char pad28[0xe8 - 0x28];
    Stream_82AA8B50 *stream; /* 0xe8 */
} Reader_82AA8B50;

extern unsigned long _byteswap_ulong(unsigned long value);
extern void *memcpy(void *dst, const void *src, unsigned int size);

int fn_82AA8B50(Reader_82AA8B50 *reader, unsigned int *out)
{
    Stream_82AA8B50 *stream = reader->stream;
    int pos = reader->base + 0x28;

    if (pos > stream->size)
        return -11;
    stream->pos = pos;
    if (stream->size < pos + 4)
        return -12;
    memcpy(out, stream->data + pos, 4);
    stream->pos += 4;
    *out = _byteswap_ulong(*out);
    return 0;
}
