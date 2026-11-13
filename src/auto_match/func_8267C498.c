/* Non-thread-safe Release of the Scaleform ref-counted base (vtable ??_7GRefCountImplCore@@6B@,
   fn_8267C488). The count at +4 is the field the thread-safe AddRef/Release (fn_8267C4C8,
   fn_8267C4F0) update with lwarx/stwcx., declared volatile: the original reloads it after the store. */
typedef struct GRefCountImplCore_8267C498 GRefCountImplCore_8267C498;
typedef struct GRefCountImplCoreVtbl_8267C498 {
    void (*destroy)(GRefCountImplCore_8267C498 *self, int flags);
} GRefCountImplCoreVtbl_8267C498;

struct GRefCountImplCore_8267C498 {
    GRefCountImplCoreVtbl_8267C498 *vtbl;
    volatile long refCount;
};

void fn_8267C498(GRefCountImplCore_8267C498 *self)
{
    self->refCount--;
    if (self->refCount == 0)
        self->vtbl->destroy(self, 1);
}
