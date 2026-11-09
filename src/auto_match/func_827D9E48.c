extern long _InterlockedIncrement(long *);

typedef struct Obj_827D9E48 {
    int pad[9];
    long refCount;
} Obj_827D9E48;

void fn_827D9E48(Obj_827D9E48 *p)
{
    _InterlockedIncrement(&p->refCount);
}
