extern long _InterlockedExchangeAdd(long volatile *, long);

typedef struct Obj_8267C4F0 Obj_8267C4F0;
typedef struct ObjVtbl_8267C4F0 {
    void (*destroy)(Obj_8267C4F0 *self, int flags);
} ObjVtbl_8267C4F0;

struct Obj_8267C4F0 {
    ObjVtbl_8267C4F0 *vtbl;
    long refs;
};

void fn_8267C4F0(Obj_8267C4F0 *self)
{
    long old = _InterlockedExchangeAdd(&self->refs, -1);
    if (old - 1 == 0 && self != 0)
        self->vtbl->destroy(self, 1);
}
