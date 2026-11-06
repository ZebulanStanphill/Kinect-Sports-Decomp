// std::tr1::_Ptr_base<T>::_Reset(T *, _Ref_count_base *, bool) (shared_ptr from weak_ptr lock),
// folded across T; incref/decref are out of line.
#include <memory>

extern "C" {
unsigned char fn_8223AAC0(void *rep);
void fn_822315A0(void *rep);
}

struct PtrBase_828CCCC0 {
    void *ptr;
    void *rep;
};

extern "C" void fn_828CCCC0(PtrBase_828CCCC0 *self, void *ptr, void *rep, bool doThrow)
{
    if (rep != 0 && fn_8223AAC0(rep)) {
        if (self->rep != 0)
            fn_822315A0(self->rep);
        self->rep = rep;
        self->ptr = ptr;
    } else if (doThrow) {
        std::tr1::bad_weak_ptr(0)._Raise();
    }
}
