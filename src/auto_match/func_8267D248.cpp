// Destructor of a class with two polymorphic bases (Node_8267D248 : Base_8267EE90, GAcquireInterface
// at +0xc): stores its two vtables, deletes the Inner_8267D248 at +0x10 (inline destructor and
// the heap free fn_8267BE38), then the inline ~GAcquireInterface and the out-of-line base
// destructor (fn_8267EE90).
extern "C" {
void fn_8267BE38(void *p);
int fn_82A1E658(void *p);
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

struct Inner_8267D248 {
    void *handle;
    char pad[8];
    GAcquireInterface acquire;
    ~Inner_8267D248() { fn_82A1E658(handle); }
    static void operator delete(void *p) { fn_8267BE38(p); }
};

class Node_8267D248 : public Base_8267EE90, public GAcquireInterface {
public:
    virtual __forceinline ~Node_8267D248();
    Inner_8267D248 *inner;
};

__forceinline Node_8267D248::~Node_8267D248()
{
    delete inner;
}

extern "C" void fn_8267D248(Node_8267D248 *self)
{
    self->Node_8267D248::~Node_8267D248();
}
