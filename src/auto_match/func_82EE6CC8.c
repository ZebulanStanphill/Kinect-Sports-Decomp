extern long _InterlockedIncrement(long *);

typedef struct Obj_82EE6CC8 {
    char pad_0[0x4];
    long count;
} Obj_82EE6CC8;

long fn_82EE6CC8(Obj_82EE6CC8 *p)
{
    return _InterlockedIncrement(&p->count);
}
