extern long _InterlockedIncrement(long *);

typedef struct Obj_82E62D38 {
    char pad_0[0x4c];
    long count;
} Obj_82E62D38;

long fn_82E62D38(Obj_82E62D38 *p)
{
    return _InterlockedIncrement(&p->count);
}
