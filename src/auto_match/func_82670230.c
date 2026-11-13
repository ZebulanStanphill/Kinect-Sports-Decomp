#define __lwsync() __emit(0x7C2004AC)
void __emit(unsigned int opcode);
extern long _InterlockedExchangeAdd(long volatile *, long);

typedef struct Obj_82670230 Obj_82670230;
typedef struct ObjVtbl_82670230 {
    void (*destroy)(Obj_82670230 *self, int flags);
} ObjVtbl_82670230;

struct Obj_82670230 {
    ObjVtbl_82670230 *vtbl;
    long refs;
};

void fn_82670230(Obj_82670230 *self)
{
    long old = _InterlockedExchangeAdd(&self->refs, -1);
    __lwsync();
    if (old - 1 == 0 && self != 0)
        self->vtbl->destroy(self, 1);
}
