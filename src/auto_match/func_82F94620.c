extern long _InterlockedIncrement(long *);
typedef struct Obj_82F94620 {
    int pad[2];
    long refCount;
} Obj_82F94620;
void fn_82F94620(Obj_82F94620 *self, unsigned a)
{
    _InterlockedIncrement(&self->refCount);
}
