extern long _InterlockedIncrement(long *);

typedef struct Obj_82FF9058 {
    char pad_0[0x40];
    long count;
} Obj_82FF9058;

void fn_82FF9058(Obj_82FF9058 *p)
{
    _InterlockedIncrement(&p->count);
}
