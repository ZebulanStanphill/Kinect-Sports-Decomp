extern long _InterlockedIncrement(long *);

typedef struct Obj_82E41678 {
    char pad_0[0x8];
    long count;
} Obj_82E41678;

long fn_82E41678(Obj_82E41678 *p)
{
    return _InterlockedIncrement(&p->count);
}
