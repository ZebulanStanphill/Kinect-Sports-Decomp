void *memcpy(void *dst, const void *src, unsigned int size);

typedef struct Span_826F1238 {
    const void *data;
    unsigned int size;
} Span_826F1238;

typedef struct Source_826F1238 Source_826F1238;

typedef struct SourceVtbl_826F1238 {
    void *slots[4];
    void (*getSpan)(Span_826F1238 *out, Source_826F1238 *self);
} SourceVtbl_826F1238;

struct Source_826F1238 {
    SourceVtbl_826F1238 *vt;
};

typedef struct Chunk_826F1238 {
    int type;
    void *ptr;
    unsigned char size;
    char pad[3];
} Chunk_826F1238;

typedef struct ChunkArray_826F1238 {
    unsigned int count;
    Chunk_826F1238 *extra;
    char pad[8];
    Chunk_826F1238 local[16];
} ChunkArray_826F1238;

typedef struct Message_826F1238 {
    char pad[0x24];
    ChunkArray_826F1238 chunks;
} Message_826F1238;

static __forceinline Chunk_826F1238 *At_826F1238(ChunkArray_826F1238 *a, unsigned int i)
{
    unsigned int off = i * sizeof(Chunk_826F1238);
    if (i < 16)
        return (Chunk_826F1238 *)((char *)a->local + off);
    return (Chunk_826F1238 *)((char *)a->extra + off - 16 * sizeof(Chunk_826F1238));
}

void fn_826F1238(Message_826F1238 *self, char *dst, unsigned int size)
{
    ChunkArray_826F1238 *chunks = &self->chunks;
    unsigned int count = chunks->count;
    unsigned int remaining = size;
    unsigned int i = 0;

    while (remaining != 0) {
        Chunk_826F1238 *c;
        unsigned int n;
        if (i >= count)
            return;
        c = At_826F1238(chunks, i);
        switch (At_826F1238(chunks, i)->type) {
        case 0:
            n = c->size;
            if (remaining < n)
                n = remaining;
            memcpy(dst, c->ptr, n);
            remaining -= n;
            dst += n;
            break;
        case 2:
            if (c->ptr != 0) {
                Source_826F1238 *src = (Source_826F1238 *)c->ptr;
                Span_826F1238 span;
                src->vt->getSpan(&span, src);
                n = span.size;
                if (remaining < n)
                    n = remaining;
                memcpy(dst, span.data, n);
                dst += n;
                remaining -= n;
            }
            break;
        }
        i++;
    }
}
