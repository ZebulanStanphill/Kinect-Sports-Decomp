// _Do_call of a std::tr1::function implementation (<functional>) holding a _Bind of a member
// function pointer with all arguments as placeholders: it copies the bound pointer to member
// (8 bytes: function and this adjustment) and calls it on the bound object, forwarding the
// arguments unchanged. Bound target: fn_82377B20 (fn_82382150); folded (4 vtables).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;

class __multiple_inheritance Target_8230C1D0;

typedef void (Target_8230C1D0::*Fn_8230C1D0)(__vector4, __vector4, __vector4, float);

// The implementation object: vtable, then the bound member function pointer and object.
struct BoundCall_8230C1D0 {
    void *vtable;
    Fn_8230C1D0 fn;
    Target_8230C1D0 *object;
};

extern "C" void fn_8230C1D0(BoundCall_8230C1D0 *self, __vector4 a, __vector4 b, __vector4 c, float d)
{
    Fn_8230C1D0 fn = self->fn;
    (self->object->*fn)(a, b, c, d);
}
