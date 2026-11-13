// make_shared-style factory for Object_824C8960 (the constructor matched in
// func_824C8960.cpp): allocates the 0x50-byte reference-count block, sets its
// vtable and counts, and constructs the object at +0x10 with a temporary
// std::tr1::function<void ()> built from a 12-byte callable. Only the layout of
// the function object is known here (callable vtable, 12-byte payload, impl
// pointer at 0x10), so it is declared locally; the constructor keeps its
// mangled name.

typedef unsigned int size_t_824C6AB0;

inline void *operator new(size_t_824C6AB0, void *where) { return where; }

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float f[4];
    unsigned int u[4];
} __vector4;

extern "C" char lbl_821C0A1C[];
extern "C" char lbl_821C0A74[];

struct Payload_824C6AB0 {
    int a;
    int b;
    int c;
};

struct Func_824C6AB0;
extern "C" void fn_82359C18(Func_824C6AB0 *self);
extern "C" void *fn_8265C9E0(unsigned int size);

struct Callable_824C6AB0 {
    const void *vt;
    Payload_824C6AB0 p;
};

namespace std {
template <class T> class allocator;
template <class T, class A> class vector;
namespace tr1 {
template <class F> class function;
template <> class function<void ()> {
public:
    __forceinline function(const Payload_824C6AB0 &p)
    {
        c.p = p;
        ptr = &c;
        c.vt = lbl_821C0A74;
    }
    __forceinline ~function() { fn_82359C18((Func_824C6AB0 *)this); }

    Callable_824C6AB0 c;
    Callable_824C6AB0 *ptr;
};
}
}

typedef std::vector<__vector4, std::allocator<__vector4> > Vec_824C6AB0;

class Object_824C8960 {
public:
    Object_824C8960(int unk0, int unk4, const std::tr1::function<void ()> &unk8,
                    const Vec_824C6AB0 &unk20);

private:
    int data[0x40 / 4];
};

struct Block_824C6AB0 {
    const void *vt;
    int uses;
    int weaks;
    int pad;
    unsigned char obj[0x40];

    __forceinline Block_824C6AB0(int a, int b, const Payload_824C6AB0 &p, const Vec_824C6AB0 &v)
    {
        uses = 1;
        vt = lbl_821C0A1C;
        weaks = 1;
        new ((void *)&obj) Object_824C8960(a, b, p, v);
    }
};

struct Shared_824C6AB0 {
    Object_824C8960 *ptr;
    Block_824C6AB0 *rep;
};

extern "C" Shared_824C6AB0 *fn_824C6AB0(Shared_824C6AB0 *out, int a, int b,
                                       const Payload_824C6AB0 &p, const Vec_824C6AB0 &v)
{
    void *mem = fn_8265C9E0(0x50);
    Block_824C6AB0 *blk = mem ? new (mem) Block_824C6AB0(a, b, p, v) : 0;
    out->rep = blk;
    out->ptr = (Object_824C8960 *)blk->obj;
    return out;
}
