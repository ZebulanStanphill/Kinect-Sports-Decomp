extern "C" {
void fn_8267C4F0(void *p);
void fn_8267C488(void *self);
}

class __declspec(novtable) GRefCountImplCore {
public:
    virtual __forceinline ~GRefCountImplCore() { fn_8267C488(this); }
};

class GFxState : public GRefCountImplCore {
public:
    virtual __forceinline ~GFxState() {}
    int pad[2];
    void *owned;
};

extern "C" void fn_82684EC0(GFxState *self)
{
    if (self->owned)
        fn_8267C4F0(self->owned);
    self->GFxState::~GFxState();
}
