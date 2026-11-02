extern long _InterlockedIncrement(long *);

typedef struct Obj_829EC028 {
    int pad0, pad1, pad2;
    long count;
} Obj_829EC028;

long fn_829EC028(Obj_829EC028 *p)
{
    return _InterlockedIncrement(&p->count);
}
