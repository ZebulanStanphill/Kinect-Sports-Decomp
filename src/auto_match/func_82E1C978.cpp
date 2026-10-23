// Scalar deleting destructor of the abstract base of the Vince telemetry classes (vtable lbl_8214B728: this
// function, six _purecall slots, fn_82E1C8E0; no RTTI). It stores its vtable lbl_8214B728 and frees through
// the global operator delete.
extern "C" {
extern void *lbl_8214B728[];
void fn_8265CA20(void *p);   // global operator delete
}

struct VinceBase {
    void **vtbl;
};

extern "C" VinceBase *fn_82E1C978(VinceBase *self, unsigned int flags)
{
    self->vtbl = lbl_8214B728;
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
