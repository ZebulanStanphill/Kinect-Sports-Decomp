// Deferred call object (built by fn_823EBD08 / fn_82400548, vtable lbl_821B78DC): invokes the
// stored pointer-to-member on the stored target with the stored arguments (four words, two
// vectors and the 0x4c-byte block, passed by address). The bound method is fn_823D0140.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

class __multiple_inheritance Target_824005D8;

struct Block_824005D8 {
    char data[0x4c];
};

typedef void (Target_824005D8::*Method_824005D8)(int, int, int, int, __vector4, __vector4,
                                                 Block_824005D8 *);

struct Bound_824005D8 {
    Method_824005D8 method;     // 0x00
    Target_824005D8 *target;    // 0x08
    int pad0c;
    int a;                      // 0x10
    int pad14;
    int b;                      // 0x18
    int pad1c;
    int c;                      // 0x20
    int pad24;
    int d;                      // 0x28
    int pad2c;
    __vector4 v0;               // 0x30
    __vector4 v1;               // 0x40
    Block_824005D8 block;       // 0x50
};

struct Call_824005D8 {
    void *vtable;
    char pad04[0xc];
    Bound_824005D8 bound;       // 0x10
};

extern "C" void fn_824005D8(Call_824005D8 *self)
{
    Bound_824005D8 *bound = &self->bound;
    Method_824005D8 method = bound->method;

    (bound->target->*method)(bound->a, bound->b, bound->c, bound->d, bound->v0, bound->v1,
                             &bound->block);
}
