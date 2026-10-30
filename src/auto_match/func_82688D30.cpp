// Destructor of a GFxState-derived class (StateImpl_82688D30; its vtable is lbl_82005BAC, which
// other C units refer to by that name, so the vtable is stored by hand):
// destroys the owned object at +0xc through fn_82688A80 (a destructor taking a free-flag, called
// directly with 1), then the inline ~GFxState and the out-of-line ~GRefCountImplCore (fn_8267C488).
extern "C" {
void fn_82688A80(void *p, int flags);
void fn_8267C488(void *self);
extern void *lbl_82005BAC[];
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

class StateImpl_82688D30 : public GFxState {
public:
    void *owned;
};

extern "C" void fn_82688D30(StateImpl_82688D30 *self)
{
    *(void ***)self = lbl_82005BAC;
    if (self->owned != 0)
        fn_82688A80(self->owned, 1);
    self->GFxState::~GFxState();
}
