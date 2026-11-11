// _Do_call of a std::tr1::function implementation (<functional>) holding a _Bind of a member
// function pointer with every argument bound: it calls the bound member function on the bound
// object with the stored arguments (a word, a vector and a 24-byte structure by value). The
// target class uses multiple inheritance (8-byte member function pointer: address and this
// adjustment), and the call wrapper holds its own copy of that pointer.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;

class __multiple_inheritance Target_823D2578;

typedef struct Value_823D2578 {
    long long v[3];
} Value_823D2578;

typedef void (Target_823D2578::*BoundFn_823D2578)(int, __vector4, Value_823D2578);

// The bind object: member function pointer, object and the bound arguments.
struct Bind_823D2578 {
    BoundFn_823D2578 fn;         // 0x00
    Target_823D2578 *object;     // 0x08
    char pad0C[4];
    int arg1;                    // 0x10
    char pad14[0xc];
    __vector4 arg2;              // 0x20
    Value_823D2578 arg3;         // 0x30
};

// The implementation object: vtable, then the callable.
struct BoundCall_823D2578 {
    void *vtable;                // 0x00
    Bind_823D2578 bind;          // 0x10
};

// Call wrapper around the member function pointer (mem_fn).
struct MemFn_823D2578 {
    BoundFn_823D2578 fn;

    __forceinline MemFn_823D2578(BoundFn_823D2578 f) : fn(f) {}

    __forceinline void operator()(Target_823D2578 *object, int a, __vector4 b, Value_823D2578 c) const
    {
        (object->*fn)(a, b, c);
    }
};

static __forceinline void Call(Bind_823D2578 *bind)
{
    MemFn_823D2578 call(bind->fn);
    call(bind->object, bind->arg1, bind->arg2, bind->arg3);
}

extern "C" void fn_823D2578(BoundCall_823D2578 *self)
{
    Call(&self->bind);
}
