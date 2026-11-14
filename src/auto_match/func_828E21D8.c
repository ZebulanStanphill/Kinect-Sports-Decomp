typedef struct Deque_828E21D8 {
    void *proxy;
    void **map;
    unsigned int mapSize;
} Deque_828E21D8;

typedef struct Proxy_828E21D8 {
    Deque_828E21D8 *cont;
} Proxy_828E21D8;

typedef struct DequeIter_828E21D8 {
    Proxy_828E21D8 *proxy;
    void *next;
    int pad8;
    unsigned int off;
} DequeIter_828E21D8;

typedef struct Entry_828E21D8 {
    int pad0;
    DequeIter_828E21D8 it;
    int pad14;
    int pad18;
} Entry_828E21D8;

typedef struct Vector_828E21D8 {
    char pad0[0xc];
    Entry_828E21D8 *first;
    Entry_828E21D8 *last;
} Vector_828E21D8;

extern __declspec(noreturn) void fn_82F622E0(const char *message);

static __forceinline void *Deref(DequeIter_828E21D8 *it)
{
    unsigned int block = it->off;
    Deque_828E21D8 *cont = 0;
    if (it->proxy != 0)
        cont = it->proxy->cont;
    if (cont->mapSize <= block)
        block -= cont->mapSize;
    return cont->map[block];
}

void *fn_828E21D8(Vector_828E21D8 *v, unsigned int index)
{
    Entry_828E21D8 *first = v->first;
    Entry_828E21D8 *last = v->last;
    if ((unsigned int)(last - first) <= index)
        fn_82F622E0("invalid vector<T> subscript");
    return Deref(&first[index].it);
}
