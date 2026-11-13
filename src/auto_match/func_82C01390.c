extern long _InterlockedDecrement(long *);

typedef struct Obj_82C01390 {
    char pad0[0x110];
    void (*callback)(void *context);
    char pad114[0x11c - 0x114];
    void *context;
    char pad120[0x170 - 0x120];
    long pending;
} Obj_82C01390;

void fn_82C01390(Obj_82C01390 *self)
{
    _InterlockedDecrement(&self->pending);
    if (self->callback != 0)
        self->callback(self->context);
}
