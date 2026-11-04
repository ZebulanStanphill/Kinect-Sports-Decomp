extern long _InterlockedIncrement(long *);

typedef struct Obj_82F3DD08 {
    char pad_0[0x48];
    long count;
} Obj_82F3DD08;

long fn_82F3DD08(Obj_82F3DD08 *p)
{
    return _InterlockedIncrement(&p->count);
}
