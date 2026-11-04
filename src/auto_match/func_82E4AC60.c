extern long _InterlockedIncrement(long *);

typedef struct Obj_82E4AC60 {
    char pad_0[0x28];
    long count;
} Obj_82E4AC60;

long fn_82E4AC60(Obj_82E4AC60 *p)
{
    return _InterlockedIncrement(&p->count);
}
