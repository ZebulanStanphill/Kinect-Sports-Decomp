extern long _InterlockedIncrement(long *);

typedef struct Obj_82EEB928 {
    char pad_0[0x34];
    long count;
} Obj_82EEB928;

long fn_82EEB928(Obj_82EEB928 *p)
{
    return _InterlockedIncrement(&p->count);
}
