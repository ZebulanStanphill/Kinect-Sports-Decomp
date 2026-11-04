extern long _InterlockedIncrement(long *);

typedef struct Obj_82E49068 {
    char pad_0[0x14];
    long count;
} Obj_82E49068;

long fn_82E49068(Obj_82E49068 *p)
{
    return _InterlockedIncrement(&p->count);
}
