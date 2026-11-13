#define __lwsync() __emit(0x7C2004AC)
void __emit(unsigned int opcode);
extern long _InterlockedExchangeAdd(long volatile *, long);

typedef struct Obj_8275C268 Obj_8275C268;
typedef struct ObjVtbl_8275C268 {
    void (*destroy)(Obj_8275C268 *self, int flags);
} ObjVtbl_8275C268;

struct Obj_8275C268 {
    ObjVtbl_8275C268 *vtbl;
    long refs;
};

void fn_8275C268(Obj_8275C268 *self)
{
    long old = _InterlockedExchangeAdd(&self->refs, -1);
    __lwsync();
    if (old - 1 == 0 && self != 0)
        self->vtbl->destroy(self, 1);
}
