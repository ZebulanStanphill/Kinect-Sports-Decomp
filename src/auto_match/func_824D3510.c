long _InterlockedDecrement(long volatile *);
typedef struct Ref_824D3510 Ref_824D3510;

typedef struct Vtable_824D3510 {
    void (*destroy)(Ref_824D3510 *); /* 0x00 */
    void (*dispose)(Ref_824D3510 *); /* 0x04 */
} Vtable_824D3510;

struct Ref_824D3510 {
    Vtable_824D3510 *vtable; /* 0x00 */
    long strong;             /* 0x04 */
    long weak;               /* 0x08 */
};

typedef struct Pointer_824D3510 {
    void *object;            /* 0x00 */
    Ref_824D3510 *reference; /* 0x04 */
} Pointer_824D3510;

extern Pointer_824D3510 *fn_82F514D8(Pointer_824D3510 *, void *);
extern void fn_82517978(Pointer_824D3510 *, void *, Ref_824D3510 *, unsigned char);
extern Pointer_824D3510 *fn_824D3898(Pointer_824D3510 *, void *);
extern void fn_82F54148(void *);
extern void fn_822315A0(Ref_824D3510 *);

static __forceinline void ReleaseWeak(Ref_824D3510 **slot)
{
    if (*slot != 0) {
        Ref_824D3510 *reference = *slot;
        if (_InterlockedDecrement(&reference->weak) == 0) {
            reference->vtable->dispose(reference);
        }
    }
}

void fn_824D3510(char *self, int enabled)
{
    Pointer_824D3510 shared;
    Pointer_824D3510 created;
    Pointer_824D3510 enabledSource;
    Pointer_824D3510 disabledSource;
    Pointer_824D3510 *source;
    if (enabled != *(int *)(self + 0xa48)) {
        *(int *)(self + 0xa48) = enabled;
        if (enabled != 0) {
            source = fn_82F514D8(&enabledSource, *(void **)(self + 0x20));
            shared.object = 0;
            shared.reference = 0;
            fn_82517978(&shared, source->object, source->reference, 0);
            fn_824D3898(&created, shared.object);
            ReleaseWeak(&created.reference);
            if (shared.reference != 0) {
                fn_822315A0(shared.reference);
            }
            ReleaseWeak(&enabledSource.reference);
        } else {
            source = fn_82F514D8(&disabledSource, *(void **)(self + 0x20));
            shared.object = 0;
            shared.reference = 0;
            fn_82517978(&shared, source->object, source->reference, 0);
            fn_82F54148(shared.object);
            if (shared.reference != 0) {
                fn_822315A0(shared.reference);
            }
            ReleaseWeak(&disabledSource.reference);
        }
    }
}
