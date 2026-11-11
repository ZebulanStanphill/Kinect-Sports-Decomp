// _Do_call of a std::tr1::function implementation (<functional>) holding a _Bind of a member
// function pointer with all arguments as placeholders: it copies the bound pointer to member
// (8 bytes: function and this adjustment) and calls it on the bound object, forwarding the
// arguments unchanged. Bound target: fn_82377D58 (fn_82382150), which reads f1, r6, r7 and f2.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;

class __multiple_inheritance Target_82383888;

typedef void (Target_82383888::*Fn_82383888)(__vector4, __vector4, __vector4, float, unsigned int, int, unsigned int, float);

// The implementation object: vtable, then the bound member function pointer and object.
struct BoundCall_82383888 {
    void *vtable;
    Fn_82383888 fn;
    Target_82383888 *object;
};

extern "C" void fn_82383888(BoundCall_82383888 *self, __vector4 a, __vector4 b, __vector4 c, float d, unsigned int e, int f, unsigned int g, float h)
{
    Fn_82383888 fn = self->fn;
    (self->object->*fn)(a, b, c, d, e, f, g, h);
}
