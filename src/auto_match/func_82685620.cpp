// Destructor of a GFxState-derived class (StateImpl_82685620):
// releases three reference-counted members in reverse order, then runs the inline
// ~GFxState (vtable store) and the out-of-line ~GRefCountImplCore (fn_8267C488).
extern "C" {
void fn_8267C498(void *p);
void fn_8267BC98(void *p);
void fn_8267C488(void *self);
}

class __declspec(novtable) GRefCountImplCore {
public:
    virtual __forceinline ~GRefCountImplCore() { fn_8267C488(this); }
};

class GFxState : public GRefCountImplCore {
public:
    virtual __forceinline ~GFxState() {}
    char pad[8];
};

struct RefA_82685620 {
    void *p;
    ~RefA_82685620() { fn_8267C498(p); }
};

struct RefB_82685620 {
    void *p;
    ~RefB_82685620() { fn_8267BC98(p); }
};

class StateImpl_82685620 : public GFxState {
public:
    virtual __forceinline ~StateImpl_82685620();
    RefB_82685620 a;
    RefA_82685620 b;
    RefA_82685620 c;
};

__forceinline StateImpl_82685620::~StateImpl_82685620()
{
}

extern "C" void fn_82685620(StateImpl_82685620 *self)
{
    self->StateImpl_82685620::~StateImpl_82685620();
}
