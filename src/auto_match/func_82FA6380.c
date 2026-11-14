typedef void (*WalkFunc_82FA6380)(void *ptr, unsigned int size, int used, void *user, const char *file, int line);

typedef struct Chunk_82FA6380 {
    unsigned int prevFoot;
    unsigned int head;
} Chunk_82FA6380;

typedef struct {
    char pad0[0xc60];
    Chunk_82FA6380 first;
} Heap_82FA6380;

extern void fn_82FA6348(void *ptr, unsigned int size, int used, void *user);

void fn_82FA6380(Heap_82FA6380 *heap, WalkFunc_82FA6380 func, void *user)
{
    Chunk_82FA6380 *c;
    unsigned int size;
    WalkFunc_82FA6380 f;

    f = func != 0 ? func : (WalkFunc_82FA6380)fn_82FA6348;
    for (c = &heap->first; c != 0; c = (Chunk_82FA6380 *)((char *)&c->head + (c->head & ~3))) {
        size = c->head & ~3;
        if (size == 0) {
            break;
        }
        f(c + 1, size, ~c->head & 1, user, "Unknown File", 0);
    }
}
