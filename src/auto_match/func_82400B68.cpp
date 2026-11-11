// _Do_call of a std::tr1::function implementation (<functional>) holding a _Bind of a member
// function pointer with every argument bound: it calls the bound member function on the bound
// object with the stored arguments (a byte, two words and a vector). The target class uses
// multiple inheritance (8-byte member function pointer: address and this adjustment), and the
// call wrapper holds its own copy of that pointer.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;

class __multiple_inheritance Target_82400B68;

typedef void (Target_82400B68::*BoundFn_82400B68)(unsigned char, int, int, __vector4);

// The bind object: member function pointer, object and the bound arguments.
struct Bind_82400B68 {
    BoundFn_82400B68 fn;         // 0x00
    Target_82400B68 *object;     // 0x08
    char pad0C[4];
    unsigned char arg1;          // 0x10
    char pad11[7];
    int arg2;                    // 0x18
    char pad1C[4];
    int arg3;                    // 0x20
    char pad24[0xc];
    __vector4 arg4;              // 0x30
};

// The implementation object: vtable, then the callable.
struct BoundCall_82400B68 {
    void *vtable;                // 0x00
    Bind_82400B68 bind;          // 0x10
};

// Call wrapper around the member function pointer (mem_fn).
struct MemFn_82400B68 {
    BoundFn_82400B68 fn;

    __forceinline MemFn_82400B68(BoundFn_82400B68 f) : fn(f) {}

    __forceinline void operator()(Target_82400B68 *object, unsigned char a, int b, int c, __vector4 d) const
    {
        (object->*fn)(a, b, c, d);
    }
};

static __forceinline void Call(Bind_82400B68 *bind)
{
    MemFn_82400B68 call(bind->fn);
    call(bind->object, bind->arg1, bind->arg2, bind->arg3, bind->arg4);
}

extern "C" void fn_82400B68(BoundCall_82400B68 *self)
{
    Call(&self->bind);
}
