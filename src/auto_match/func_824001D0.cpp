// _Do_call of a std::tr1::function<void ()> implementation (<functional>) holding a _Bind of a
// member function pointer (fn_823CD8F8, bound in fn_823EB840) with two ints and a 0x80-byte,
// 16-byte aligned structure bound by value: it calls the member function on the bound object,
// passing the bound ints and a reference to the bound structure.
class __multiple_inheritance Target_824001D0;

struct __declspec(align(16)) Data_824001D0 { int words[0x80 / 4]; };

typedef void (Target_824001D0::*Fn_824001D0)(int, int, const Data_824001D0 &);

// The _Bind object (fn_823EB840 builds it at 8-byte aligned offsets).
struct Bind_824001D0 {
    Fn_824001D0 fn;
    Target_824001D0 *object;
    int pad;
    int a;
    int pad2;
    int b;
    int pad3;
    Data_824001D0 data;
};

// The implementation object: vtable, then the _Bind.
struct BoundCall_824001D0 {
    void *vtable;
    Bind_824001D0 bind;
};

extern "C" void fn_824001D0(BoundCall_824001D0 *self)
{
    Bind_824001D0 *b = &self->bind;
    Fn_824001D0 fn = b->fn;
    (b->object->*fn)(b->a, b->b, b->data);
}
