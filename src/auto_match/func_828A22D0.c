typedef struct Rep_828A22D0 { int pad; long uses; } Rep_828A22D0;
typedef struct Ptr_828A22D0 {
    void *ptr;
    Rep_828A22D0 *rep;     /* 0x4 */
} Ptr_828A22D0;
extern long _InterlockedIncrement(long volatile *);
extern void fn_8289DF30(Rep_828A22D0 *rep);

Ptr_828A22D0 *fn_828A22D0(Ptr_828A22D0 *self, const Ptr_828A22D0 *other)
{
    Rep_828A22D0 *rep = other->rep;
    void *ptr = other->ptr;
    Rep_828A22D0 **slot = &self->rep;
    Rep_828A22D0 *old;
    if (rep != 0) {
        _InterlockedIncrement(&rep->uses);
    }
    self->ptr = ptr;
    old = *slot;
    *slot = rep;
    if (old != 0) {
        fn_8289DF30(old);
    }
    return self;
}
