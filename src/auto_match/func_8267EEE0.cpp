// Constructor of Wrapper_8267EF68 (see func_8267EF68.cpp for the class), called by name
// from C units, so it stays fn_8267EEE0 and builds the object by placement new.
extern "C" {
void fn_8267D248(void *self);
void fn_8267D2B0(void *self);
void fn_8267EE90(void *self);
void fn_8267EA40(void *self, unsigned int a);
void fn_8267CC38(void *self, int a, int b);
void fn_8267CF08(void *self);
}

inline void *operator new(unsigned int, void *p) { return p; }

class GAcquireInterface {
public:
    virtual ~GAcquireInterface() {}
};

class __declspec(novtable) Base_8267EE90 {
public:
    Base_8267EE90(unsigned int a) { fn_8267EA40(this, a); }
    virtual __forceinline ~Base_8267EE90() { fn_8267EE90(this); }
    char pad[8];
};

struct Node_8267D248 {
    void *bytes[5];
    Node_8267D248() { fn_8267CC38(this, 1, 0); }
    __forceinline ~Node_8267D248() { fn_8267D248(this); }
};

struct Owned_8267D2B0 {
    void *p;
    Owned_8267D2B0() { fn_8267CF08(this); }
    __forceinline ~Owned_8267D2B0() { fn_8267D2B0(this); }
};

class Wrapper_8267EF68 : public Base_8267EE90, public GAcquireInterface {
public:
    __forceinline Wrapper_8267EF68(unsigned char b, unsigned int a) : Base_8267EE90(a)
    {
        m_10 = b;
        m_11 = 0;
    }
    virtual ~Wrapper_8267EF68();
    unsigned char m_10;
    unsigned char m_11;
    Node_8267D248 node;
    Owned_8267D2B0 owned;
};

extern "C" Wrapper_8267EF68 *fn_8267EEE0(Wrapper_8267EF68 *w, unsigned char b, unsigned int a)
{
    w->Wrapper_8267EF68::Wrapper_8267EF68(b, a);
    return w;
}
