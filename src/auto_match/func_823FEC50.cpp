// _Do_call of a std::tr1::function implementation (<functional>) holding a _Bind of a member
// function pointer with all arguments as placeholders: it copies the bound pointer to member
// (8 bytes: function and this adjustment) and calls it on the bound object, forwarding the
// arguments unchanged. Bound target: fn_82377FC8 (fn_82382150), which tests f as a bool.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;

class __multiple_inheritance Target_823FEC50;

typedef void (Target_823FEC50::*Fn_823FEC50)(__vector4, __vector4, __vector4, float, unsigned int, bool);

// The implementation object: vtable, then the bound member function pointer and object.
struct BoundCall_823FEC50 {
    void *vtable;
    Fn_823FEC50 fn;
    Target_823FEC50 *object;
};

extern "C" void fn_823FEC50(BoundCall_823FEC50 *self, __vector4 a, __vector4 b, __vector4 c, float d, unsigned int e, bool f)
{
    Fn_823FEC50 fn = self->fn;
    (self->object->*fn)(a, b, c, d, e, f);
}
