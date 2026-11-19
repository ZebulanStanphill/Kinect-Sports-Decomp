typedef struct Entry_825FD970 {
    int offset; /* 0x00 */
    int pad4;   /* 0x04 */
} Entry_825FD970;

typedef struct Header_825FD970 {
    unsigned int *values;      /* 0x00 */
    Entry_825FD970 *entries;   /* 0x04 */
    unsigned short entryCount; /* 0x08 */
} Header_825FD970;

typedef struct Ref_825FD970 Ref_825FD970;

typedef struct SharedPtr_825FD970 {
    void *ptr;         /* 0x00 */
    Ref_825FD970 *rep; /* 0x04 */
} SharedPtr_825FD970;

extern Header_825FD970 *fn_827D5070(void *buffer);
extern void fn_822315A0(Ref_825FD970 *rep);

static __forceinline unsigned int Swap32(unsigned int v)
{
    return (v >> 24) | ((v >> 8) & 0xff00) | ((v << 8) & 0xff0000) | (v << 24);
}

static __forceinline void SwapInPlace(unsigned int *value)
{
    *value = Swap32(*value);
}

void fn_825FD970(SharedPtr_825FD970 *buffer)
{
    Header_825FD970 *header;
    unsigned int *values;
    int i;

    header = fn_827D5070(buffer->ptr);
    if (header->values != 0) {
        unsigned int **slot = &header->values;

        *slot = (unsigned int *)((char *)*slot + (int)header);
    }
    if (header->entries != 0) {
        header->entries = (Entry_825FD970 *)((char *)header->entries + (int)header);
    }
    for (i = 0; i < header->entryCount; i++) {
        header->entries[i].offset += (int)header;
    }
    values = header->values;
    if (values != 0) {
        SwapInPlace(&values[0]);
        SwapInPlace(&values[1]);
        SwapInPlace(&values[2]);
    }
    if (buffer->rep != 0) {
        fn_822315A0(buffer->rep);
    }
}
