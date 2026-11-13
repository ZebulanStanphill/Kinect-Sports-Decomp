extern long _InterlockedIncrement(long *);
typedef struct Obj_82F8F140 {
    int pad[0x10e];
    long refCount;
} Obj_82F8F140;
void fn_82F8F140(Obj_82F8F140 *self, unsigned a)
{
    _InterlockedIncrement(&self->refCount);
}
