extern long _InterlockedIncrement(long *);
typedef struct Obj_82F8DF80 {
    int pad[0x27];
    long refCount;
} Obj_82F8DF80;
void fn_82F8DF80(Obj_82F8DF80 *self, unsigned a)
{
    _InterlockedIncrement(&self->refCount);
}
