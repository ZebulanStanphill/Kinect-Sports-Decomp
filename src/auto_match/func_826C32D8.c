typedef struct Chunk_826C32D8 {
    int data[0x20];
    struct Chunk_826C32D8 *next;
} Chunk_826C32D8;

typedef struct {
    int *cur;
    int *begin;
    int *end;
    int *last;
    int chunks[3];
    Chunk_826C32D8 *freeChunks;
} Pool_826C32D8;

extern Chunk_826C32D8 *fn_8267BED0(Pool_826C32D8 *self, int size, int flags);
extern void fn_826EBE48(int *list, Chunk_826C32D8 **chunk);

void fn_826C32D8(Pool_826C32D8 *self)
{
    Chunk_826C32D8 *tmp;
    Chunk_826C32D8 *chunk = self->freeChunks;
    if (chunk != 0) {
        self->freeChunks = chunk->next;
    } else {
        chunk = fn_8267BED0(self, sizeof(Chunk_826C32D8), 0);
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
