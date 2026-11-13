extern long _InterlockedDecrement(long *);
extern char lbl_820E9B54[];
typedef struct Obj_82BE8CF8 {
    void *vt;
    long count;
} Obj_82BE8CF8;
void fn_82BE8CF8(Obj_82BE8CF8 *self)
{
    self->vt = lbl_820E9B54;
    _InterlockedDecrement(&self->count);
}
