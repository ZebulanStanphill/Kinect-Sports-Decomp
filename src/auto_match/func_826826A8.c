typedef struct { int w[4]; } Elem_826826A8;

typedef struct Chunk_826826A8 {
    Elem_826826A8 data[0x20];
    struct Chunk_826826A8 *next;
    int pad;
} Chunk_826826A8;

typedef struct {
    Elem_826826A8 *cur;
    Elem_826826A8 *begin;
    Elem_826826A8 *end;
    Elem_826826A8 *last;
    int chunks[3];
    Chunk_826826A8 *freeChunks;
} Pool_826826A8;

extern Chunk_826826A8 *fn_8267BED0(Pool_826826A8 *self, int size, int flags);
extern void fn_826EBE48(int *list, Chunk_826826A8 **chunk);

void fn_826826A8(Pool_826826A8 *self)
{
    Chunk_826826A8 *tmp;
    Chunk_826826A8 *chunk = self->freeChunks;
    if (chunk != 0) {
        self->freeChunks = chunk->next;
    } else {
        chunk = fn_8267BED0(self, sizeof(Chunk_826826A8), 0);
    }
    tmp = chunk;
    if (chunk != 0) {
        fn_826EBE48(self->chunks, &tmp);
        self->last = self->end - 1;
        self->begin = chunk->data;
        self->cur = chunk->data;
        self->end = chunk->data + 0x20;
    } else {
        self->cur--;
    }
}
