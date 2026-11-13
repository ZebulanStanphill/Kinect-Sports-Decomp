extern long _InterlockedDecrement(long *);

typedef struct Obj_82C00D68 {
    char pad0[0x30];
    void (*callback)(void *context);
    void *context;
    char pad38[0x280 - 0x38];
    long pending;
} Obj_82C00D68;

void fn_82C00D68(void *unused, Obj_82C00D68 *o)
{
    _InterlockedDecrement(&o->pending);
    if (o->callback != 0)
        o->callback(o->context);
}
