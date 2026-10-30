// Destructor of a GFxState-derived class (StateImpl_82777818):
// destroys and frees the owned object (fn_82777298, then fn_8267BE38), then the inline
// ~GFxState and the out-of-line ~GRefCountImplCore (fn_8267C488).
extern "C" {
void fn_82777298(void *p);
void fn_8267BE38(void *p);
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

class StateImpl_82777818 : public GFxState {
public:
    virtual __forceinline ~StateImpl_82777818();
    char pad2[0x38];
    void *owned;
};

__forceinline StateImpl_82777818::~StateImpl_82777818()
{
    void *p = owned;
    if (p != 0) {
        fn_82777298(p);
        fn_8267BE38(p);
    }
}

extern "C" void fn_82777818(StateImpl_82777818 *self)
{
    self->StateImpl_82777818::~StateImpl_82777818();
}
