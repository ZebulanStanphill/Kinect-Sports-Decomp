// Destructor of Holder_8267F3B8 (two polymorphic bases: Base_8267EE90 and GAcquireInterface at +0xc):
// stores its two vtables, releases its registration with the object at +0x10 through
// fn_8267EBA0(obj, fn_8267EE78, this), then the inline ~GAcquireInterface and the out-of-line
// base destructor (fn_8267EE90).
extern "C" void fn_8267EBA0(void *obj, void (*cb)(void), void *self);
extern "C" void fn_8267EE78(void);
extern "C" void fn_8267EE90(void *self);

class GAcquireInterface {
public:
    virtual ~GAcquireInterface() {}
};

class __declspec(novtable) Base_8267EE90 {
public:
    virtual __forceinline ~Base_8267EE90() { fn_8267EE90(this); }
    char pad[8];
};

class Holder_8267F3B8 : public Base_8267EE90, public GAcquireInterface {
public:
    virtual __forceinline ~Holder_8267F3B8();
    void *obj;
};

__forceinline Holder_8267F3B8::~Holder_8267F3B8()
{
    fn_8267EBA0(obj, fn_8267EE78, this);
}

extern "C" void fn_8267F3B8(Holder_8267F3B8 *self)
{
    self->Holder_8267F3B8::~Holder_8267F3B8();
}
