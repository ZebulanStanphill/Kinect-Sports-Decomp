#define __lwsync() __emit(0x7C2004AC)
void __emit(unsigned int opcode);
extern long _InterlockedExchangeAdd(long volatile *, long);

typedef struct Obj_82761DE8 Obj_82761DE8;
typedef struct ObjVtbl_82761DE8 {
    void (*destroy)(Obj_82761DE8 *self, int flags);
} ObjVtbl_82761DE8;

struct Obj_82761DE8 {
    ObjVtbl_82761DE8 *vtbl;
    char pad4[0x10];
    long refs;
};

void fn_82761DE8(Obj_82761DE8 *self)
{
    long old = _InterlockedExchangeAdd(&self->refs, -1);
    __lwsync();
    if (old - 1 == 0 && self != 0)
        self->vtbl->destroy(self, 1);
}
