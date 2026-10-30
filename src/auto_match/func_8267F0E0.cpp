// Destructor of Wrapper_8267F0E0 (two polymorphic bases: Base_8267EE90 and GAcquireInterface at +0xc):
// stores its two vtables, destroys the owned object (fn_8267D2B0) and the Node_8267D248 member
// (fn_8267D248) in reverse order, then the inline ~GAcquireInterface and the out-of-line base
// destructor (fn_8267EE90).
extern "C" {
void fn_8267D248(void *self);
void fn_8267D2B0(void *self);
void fn_8267EE90(void *self);
}

class GAcquireInterface {
public:
    virtual ~GAcquireInterface() {}
};

class __declspec(novtable) Base_8267EE90 {
public:
    virtual __forceinline ~Base_8267EE90() { fn_8267EE90(this); }
    char pad[8];
};

struct Node_8267D248 {
    void *bytes[5];
    __forceinline ~Node_8267D248() { fn_8267D248(this); }
};

struct Owned_8267D2B0 {
    void *p;
    __forceinline ~Owned_8267D2B0() { fn_8267D2B0(this); }
};

class Wrapper_8267F0E0 : public Base_8267EE90, public GAcquireInterface {
public:
    virtual ~Wrapper_8267F0E0();
    int m_10;
    int m_14;
    Node_8267D248 node;
    Owned_8267D2B0 owned;
};

Wrapper_8267F0E0::~Wrapper_8267F0E0()
{
}
