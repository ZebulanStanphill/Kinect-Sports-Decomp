extern long _InterlockedIncrement(long *);

typedef struct Obj_82EE24B8 {
    char pad_0[0x5c];
    long count;
} Obj_82EE24B8;

long fn_82EE24B8(Obj_82EE24B8 *p)
{
    return _InterlockedIncrement(&p->count);
}
