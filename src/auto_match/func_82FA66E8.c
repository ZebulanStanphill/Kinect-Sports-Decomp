typedef struct Chunk_82FA66E8 {
    unsigned int prevFoot; /* 0x0 */
    int head;              /* 0x4 */
} Chunk_82FA66E8;

extern void *memcpy(void *dest, const void *src, unsigned int count);
extern void *fn_82FA5F18(void *heap, Chunk_82FA66E8 *chunk);
extern void fn_82FA6028(void *heap, Chunk_82FA66E8 *chunk, unsigned int size);
extern void *fn_82FA64D8(void *heap, unsigned int size);
extern void fn_82FA6668(void *heap, void *memory);

static __forceinline unsigned int ChunkSize(Chunk_82FA66E8 *chunk)
{
    return chunk->head & ~3;
}

static __forceinline Chunk_82FA66E8 *NextChunk(Chunk_82FA66E8 *chunk)
{
    return (Chunk_82FA66E8 *)((char *)chunk + ChunkSize(chunk) + 4);
}

static __forceinline int IsFree(Chunk_82FA66E8 *chunk)
{
    return chunk->head & 1;
}

static __forceinline void ClearPreviousFree(Chunk_82FA66E8 *chunk)
{
    chunk->head &= ~2;
}

void *fn_82FA66E8(void *heap, void *memory, unsigned int size)
{
    Chunk_82FA66E8 *chunk;
    Chunk_82FA66E8 *next;
    unsigned int oldSize;
    unsigned int newSize;
    unsigned int available;
    void *result = 0;

    if (memory != 0 && size != 0) {
        chunk = (Chunk_82FA66E8 *)((char *)memory - 8);
        next = NextChunk(chunk);
        oldSize = ChunkSize(chunk);
        newSize = 0;
        available = ChunkSize(next) + oldSize + 4;
        if (size < 0x40000000) {
            newSize = (size + 3) & ~3;
            if (newSize <= 0xc) {
                newSize = 0xc;
            }
        }
        if (IsFree(next) && newSize < available) {
            if (newSize > oldSize) {
                fn_82FA5F18(heap, chunk);
                ClearPreviousFree(NextChunk(chunk));
                chunk->head &= ~1;
            }
            fn_82FA6028(heap, chunk, newSize);
            return memory;
        }
    }
    if (memory == 0) {
        return fn_82FA64D8(heap, size);
    }
    if (size != 0) {
        result = fn_82FA64D8(heap, size);
        if (result != 0) {
            memcpy(result, memory, oldSize < size ? oldSize : size);
            fn_82FA6668(heap, memory);
        }
    } else {
        fn_82FA6668(heap, memory);
    }
    return result;
}
