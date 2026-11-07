typedef unsigned int size_t_822EAAC8;

inline void *operator new(size_t_822EAAC8, void *where) { return where; }

extern "C" char lbl_821A8D8C[];
extern "C" char lbl_821AE1F0[];

struct Str_822EAAC8;
struct Func_822EAAC8;

extern "C" void fn_82230110(Str_822EAAC8 *self, int value);
extern "C" void fn_82230300(Str_822EAAC8 *self, int a, int b);
extern "C" void fn_82359C18(Func_822EAAC8 *self);
extern "C" void fn_822FB850(void *self, const Str_822EAAC8 &a, int b, int c,
                            const Str_822EAAC8 &d, int e, const Func_822EAAC8 &f);

struct Payload_822EAAC8 {
    int a;
    int b;
    int c;
};

struct Str_822EAAC8 {
    int data[8];
    __forceinline Str_822EAAC8(int v) { fn_82230110(this, v); }
    __forceinline ~Str_822EAAC8() { fn_82230300(this, 1, 0); }
};

struct Callable_822EAAC8 {
    const void *vt;
    Payload_822EAAC8 p;
};

struct Func_822EAAC8 {
    Callable_822EAAC8 c;
    Callable_822EAAC8 *ptr;
    __forceinline Func_822EAAC8(const Payload_822EAAC8 &p)
    {
        c.p = p;
        ptr = &c;
        c.vt = lbl_821AE1F0;
    }
    __forceinline ~Func_822EAAC8() { fn_82359C18(this); }
};

struct Inner_822EAAC8 {
    __forceinline Inner_822EAAC8(const Str_822EAAC8 &a, int b, int c,
                                 const Str_822EAAC8 &d, int e,
                                 const Func_822EAAC8 &f)
    {
        fn_822FB850(this, a, b, c, d, e, f);
    }
};

struct Outer_822EAAC8 {
    const void *vt;
    int uses;
    int weaks;
    int pad;
    unsigned char inner[1];
};

extern "C" Outer_822EAAC8 *fn_822EAAC8(Outer_822EAAC8 *self, int *p2, int p3, int p4,
                                      int *p5, int *p6, Payload_822EAAC8 *p7)
{
    self->uses = 1;
    self->vt = lbl_821A8D8C;
    self->weaks = 1;
    new ((void *)self->inner) Inner_822EAAC8(*p2, p3, p4, *p5, *p6, *p7);
    return self;
}
