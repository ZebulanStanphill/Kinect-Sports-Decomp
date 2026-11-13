extern long _InterlockedDecrement(long *);

typedef struct Obj_82E73470 Obj_82E73470;
typedef struct ObjVtbl_82E73470 {
    void (*destroy)(Obj_82E73470 *self, int flags);
} ObjVtbl_82E73470;

struct Obj_82E73470 {
    ObjVtbl_82E73470 *vtbl;
    int f4;
    long refs;
};

void fn_82E73470(Obj_82E73470 *self)
{
    if (_InterlockedDecrement(&self->refs) == 0 && self != 0)
        self->vtbl->destroy(self, 1);
}
