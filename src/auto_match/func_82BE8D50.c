extern long _InterlockedCompareExchange(long volatile *, long, long);
extern long _InterlockedDecrement(long volatile *);

typedef struct Obj_82BE8D50 Obj_82BE8D50;
typedef struct ObjVtbl_82BE8D50 {
    void (*destroy)(Obj_82BE8D50 *self, int flags);
} ObjVtbl_82BE8D50;

struct Obj_82BE8D50 {
    ObjVtbl_82BE8D50 *vtbl;
    long refs;
};

/* Release: the last reference destroys the object without decrementing the count. */
void fn_82BE8D50(Obj_82BE8D50 *self)
{
    if (_InterlockedCompareExchange(&self->refs, 1, 1) == 1) {
        if (self != 0)
            self->vtbl->destroy(self, 1);
    } else {
        _InterlockedDecrement(&self->refs);
    }
}
