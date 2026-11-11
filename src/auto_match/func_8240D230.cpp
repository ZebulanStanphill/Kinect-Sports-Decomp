// _Do_call of a std::tr1::function implementation (<functional>) holding a _Bind of a member
// function pointer with all arguments as placeholders: it copies the bound pointer to member
// (8 bytes: function and this adjustment) and calls it on the bound object, forwarding the
// arguments unchanged. Bound target: fn_82382FA0 (bound in fn_82382150).
class __multiple_inheritance Target_8240D230;

typedef void (Target_8240D230::*Fn_8240D230)();

// The implementation object: vtable, then the bound member function pointer and object.
struct BoundCall_8240D230 {
    void *vtable;
    Fn_8240D230 fn;
    Target_8240D230 *object;
};

extern "C" void fn_8240D230(BoundCall_8240D230 *self)
{
    Fn_8240D230 fn = self->fn;
    (self->object->*fn)();
}
