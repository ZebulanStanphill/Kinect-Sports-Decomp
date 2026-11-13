#define __lwsync() __emit(0x7C2004AC)

extern long _InterlockedExchangeAdd(long volatile *, long);

typedef struct Obj_82687270 Obj_82687270;
typedef struct Owner_82687270 Owner_82687270;
typedef struct OwnerVt_82687270 {
    void *slot0;
    void (*Release)(Owner_82687270 *owner, Obj_82687270 *obj);
} OwnerVt_82687270;
struct Owner_82687270 { OwnerVt_82687270 *vt; };
typedef struct ObjVt_82687270 {
    void (*Destroy)(Obj_82687270 *self, int flags);
} ObjVt_82687270;
struct Obj_82687270 {
    ObjVt_82687270 *vt;
    long refs;
    Owner_82687270 *owner;
};

void fn_82687270(Obj_82687270 *self)
{
    long old = _InterlockedExchangeAdd(&self->refs, -1);
    __lwsync();
    if (old - 1 == 0) {
        if (self->owner != 0) {
            self->owner->vt->Release(self->owner, self);
            self->owner = 0;
        }
        self->vt->Destroy(self, 1);
    }
}
