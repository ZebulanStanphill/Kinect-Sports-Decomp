extern long _InterlockedIncrement(long *);

typedef struct Obj_82FF9080 {
    char pad_0[0x44];
    long count;
} Obj_82FF9080;

void fn_82FF9080(Obj_82FF9080 *p)
{
    _InterlockedIncrement(&p->count);
}
