typedef struct Chunk_829354C0 {
    const void *data;            // 0x0
    unsigned int size;           // 0x4
    unsigned int flags;          // 0x8
    int reserved;                // 0xc
    struct Chunk_829354C0 *next; // 0x10
} Chunk_829354C0;

typedef struct Source_829354C0 {
    unsigned int tag;       // 0x0
    unsigned int size;      // 0x4
    Chunk_829354C0 *chunks; // 0x8
} Source_829354C0;

extern void *memcpy(void *dst, const void *src, unsigned int size);
extern void *memset(void *dst, int value, unsigned int size);

int fn_829354C0(Source_829354C0 *source, unsigned int *out, unsigned int count)
{
    unsigned int words = (source->size + 3) >> 2;
    unsigned char *dst;
    unsigned int written;
    unsigned int pad;
    Chunk_829354C0 *chunk;

    if (count == -1) {
        count = words + 2;
    } else if (count < words + 2) {
        return 0x80004005;
    }
    if (count > 0x8000) {
        return 0x80004005;
    }
    out[0] = ((count - 1) << 16 & 0x7fff0000) | 0xfffe;
    out[1] = source->tag;
    dst = (unsigned char *)(out + 2);
    written = 0;
    for (chunk = source->chunks; chunk != 0; chunk = chunk->next) {
        if ((chunk->flags & 4) == 0) {
            pad = ((written + 3) & ~3) - written;
            memset(dst, 0xab, pad);
            dst += pad;
            written += pad;
        }
        memcpy(dst, chunk->data, chunk->size);
        dst += chunk->size;
        written += chunk->size;
    }
    memset(dst, 0xab, (count - 2) * 4 - written);
    return 0;
}
