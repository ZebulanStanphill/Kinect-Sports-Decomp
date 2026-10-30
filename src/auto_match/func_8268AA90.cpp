// Destructor of a GFxState-derived class (StateImpl_8268AA90; its vtable is lbl_82005C3C, which
// other C units refer to by that name, so the vtable is stored by hand):
// destroys and frees the owned object (fn_8268A4B8, then fn_8267BE38), then the inline
// ~GFxState and the out-of-line ~GRefCountImplCore (fn_8267C488).
extern "C" {
void fn_8268A4B8(void *p);
void fn_8267BE38(void *p);
void fn_8267C488(void *self);
extern void *lbl_82005C3C[];
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

class StateImpl_8268AA90 : public GFxState {
public:
    void *owned;
};

extern "C" void fn_8268AA90(StateImpl_8268AA90 *self)
{
    *(void ***)self = lbl_82005C3C;
    void *p = self->owned;
    if (p != 0) {
        fn_8268A4B8(p);
        fn_8267BE38(p);
    }
    self->GFxState::~GFxState();
}
