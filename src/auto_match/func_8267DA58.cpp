struct Args_8267DA58 {
    unsigned int a;
    unsigned int b;
    unsigned int c;
    unsigned int d;
    unsigned int e;
    unsigned int kind;
};

extern "C" void fn_8267EA40(void *self, int flag);
extern "C" void fn_8267D608(void *self, Args_8267DA58 *args);
extern "C" char lbl_82005670[];
extern "C" char lbl_8200565C[];

struct __declspec(novtable) Base_8267DA58 {
    virtual void Dummy0();
    int pad[2];
    __forceinline Base_8267DA58() { fn_8267EA40(this, 1); }
};

class GAcquireInterface {
public:
    virtual void Dummy();
};

struct __declspec(novtable) Derived_8267DA58 : Base_8267DA58, GAcquireInterface {
    __forceinline Derived_8267DA58(unsigned int c, unsigned int d)
    {
        Args_8267DA58 args;
        *(void **)this = lbl_82005670;
        *(void **)((char *)this + 0xc) = lbl_8200565C;
        args.a = 0;
        args.b = 0;
        args.c = c;
        args.d = d;
        args.e = 0;
        args.kind = 3;
        fn_8267D608(this, &args);
    }
};

extern "C" Derived_8267DA58 *fn_8267DA58(Derived_8267DA58 *self, unsigned int c, unsigned int d) {
 self->Derived_8267DA58::Derived_8267DA58(c,d);
 return self;
}
