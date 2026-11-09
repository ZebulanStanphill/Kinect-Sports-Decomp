extern long _InterlockedDecrement(long *);

typedef struct Obj_827D9E18 {
    int pad[6];
    long refCount;
} Obj_827D9E18;

void fn_827D9E18(Obj_827D9E18 *p)
{
    _InterlockedDecrement(&p->refCount);
}
