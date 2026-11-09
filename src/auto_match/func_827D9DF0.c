extern long _InterlockedIncrement(long *);

typedef struct Obj_827D9DF0 {
    int pad[6];
    long refCount;
} Obj_827D9DF0;

void fn_827D9DF0(Obj_827D9DF0 *p)
{
    _InterlockedIncrement(&p->refCount);
}
