extern long _InterlockedDecrement(long *);

typedef struct Obj_827D9E70 {
    int pad[9];
    long refCount;
} Obj_827D9E70;

void fn_827D9E70(Obj_827D9E70 *p)
{
    _InterlockedDecrement(&p->refCount);
}
