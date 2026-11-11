// _Do_call of a std::tr1::function<void ()> implementation (<functional>) holding a _Bind of a
// member function pointer (fn_823CC9F0, bound in fn_823EB788) with a bool and a 0x4c-byte
// structure bound by value: it calls the member function on the bound object, passing the bound
// bool and a reference to the bound structure.
class __multiple_inheritance Target_824000E8;

struct Data_824000E8 { int words[0x4c / 4]; };

typedef void (Target_824000E8::*Fn_824000E8)(bool, const Data_824000E8 &);

// The _Bind object (fn_823EB788 builds it at 8-byte aligned offsets).
struct Bind_824000E8 {
    Fn_824000E8 fn;
    Target_824000E8 *object;
    int pad;
    bool flag;
    char pad2[7];
    Data_824000E8 data;
};

// The implementation object: vtable, then the _Bind.
struct BoundCall_824000E8 {
    void *vtable;
    int pad;
    Bind_824000E8 bind;
};

extern "C" void fn_824000E8(BoundCall_824000E8 *self)
{
    Bind_824000E8 *b = &self->bind;
    Fn_824000E8 fn = b->fn;
    (b->object->*fn)(b->flag, b->data);
}
