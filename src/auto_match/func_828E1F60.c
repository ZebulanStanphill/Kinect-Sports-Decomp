typedef struct Queue_828E1F60 {
    void *proxy;
    void **map;
    unsigned int mapSize;
    unsigned int off;
    unsigned int size;      /* 0x10 */
} Queue_828E1F60;

typedef struct Entry_828E1F60 {
    int id;
    Queue_828E1F60 queue;   /* 0x04 */
    char pad18[4];
} Entry_828E1F60;

typedef struct Self_828E1F60 {
    char pad0[0xc];
    Entry_828E1F60 *first;
    Entry_828E1F60 *last;
} Self_828E1F60;

extern __declspec(noreturn) void fn_82F622E0(const char *message);

unsigned char fn_828E1F60(Self_828E1F60 *self, unsigned int index)
{
    if ((unsigned int)(self->last - self->first) <= index)
        fn_82F622E0("invalid vector<T> subscript");
    return self->first[index].queue.size != 0;
}
