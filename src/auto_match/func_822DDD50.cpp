// _Do_call of a std::tr1::function implementation (<functional>) holding a _Bind of a member
// function pointer with all arguments as placeholders: it copies the bound pointer to member
// (8 bytes: function and this adjustment) and calls it on the bound object, forwarding the
// arguments unchanged. Bound targets include fn_82382CB0 and fn_82382E28 (fn_82382150); the linker folded ~50 instantiations into this one, so it keeps its fn_ name.
class __multiple_inheritance Target_822DDD50;

typedef void (Target_822DDD50::*Fn_822DDD50)(int, int);

// The implementation object: vtable, then the bound member function pointer and object.
struct BoundCall_822DDD50 {
    void *vtable;
    Fn_822DDD50 fn;
    Target_822DDD50 *object;
};

extern "C" void fn_822DDD50(BoundCall_822DDD50 *self, int a, int b)
{
    Fn_822DDD50 fn = self->fn;
    (self->object->*fn)(a, b);
}
