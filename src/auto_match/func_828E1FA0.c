typedef struct Queue_828E1FA0 {
    void *proxy;
    void **map;
    unsigned int mapSize;
    unsigned int off;
    unsigned int size;      /* 0x10 */
} Queue_828E1FA0;

typedef struct Entry_828E1FA0 {
    int id;
    Queue_828E1FA0 queue;   /* 0x04 */
    char pad18[4];
} Entry_828E1FA0;

typedef struct Self_828E1FA0 {
    char pad0[0xc];
    Entry_828E1FA0 *first;
    Entry_828E1FA0 *last;
} Self_828E1FA0;

extern void fn_828B3640(Queue_828E1FA0 *queue);
extern __declspec(noreturn) void fn_82F622E0(const char *message);

void fn_828E1FA0(Self_828E1FA0 *self, unsigned int index)
{
    if ((unsigned int)(self->last - self->first) <= index)
        fn_82F622E0("invalid vector<T> subscript");
    fn_828B3640(&self->first[index].queue);
}
