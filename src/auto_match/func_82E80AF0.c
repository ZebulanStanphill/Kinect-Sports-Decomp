extern long _InterlockedIncrement(long *);

typedef struct Obj_82E80AF0 {
    char pad_0[0x18];
    long count;
} Obj_82E80AF0;

long fn_82E80AF0(Obj_82E80AF0 *p)
{
    return _InterlockedIncrement(&p->count);
}
