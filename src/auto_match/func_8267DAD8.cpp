struct Args_8267DAD8 {
    unsigned int a;
    unsigned int b;
    unsigned int c;
    unsigned int d;
    unsigned int e;
    unsigned int kind;
};

extern "C" void fn_8267EA40(void *self, int flag);
extern "C" void fn_8267D608(void *self, Args_8267DAD8 *args);
extern "C" char lbl_82005670[];
extern "C" char lbl_8200565C[];

struct __declspec(novtable) Base_8267DAD8 {
    virtual void Dummy0();
    int pad[2];
    __forceinline Base_8267DAD8() { fn_8267EA40(this, 1); }
};

class GAcquireInterface {
public:
    virtual void Dummy();
};

struct __declspec(novtable) Derived_8267DAD8 : Base_8267DAD8, GAcquireInterface {
    __forceinline Derived_8267DAD8(unsigned int a, unsigned int b, unsigned int c,
                                   unsigned int d, unsigned int e)
    {
        Args_8267DAD8 args;
        *(void **)this = lbl_82005670;
        *(void **)((char *)this + 0xc) = lbl_8200565C;
        args.a = a;
        args.b = b;
        args.c = c;
        args.d = d;
        args.e = e;
        args.kind = 3;
        fn_8267D608(this, &args);
    }
};

extern "C" Derived_8267DAD8 *fn_8267DAD8(Derived_8267DAD8 *self, unsigned int a,
                                         unsigned int b, unsigned int c,
                                         unsigned int d, unsigned int e)
{
    self->Derived_8267DAD8::Derived_8267DAD8(a, b, c, d, e);
    return self;
}
