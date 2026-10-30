extern "C" {
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
    int pad[2];
    void *owned;
};

extern "C" GFxState *fn_827293B0(GFxState *self, unsigned int flags)
{
    fn_8267BE38(self->owned);
    self->GFxState::~GFxState();
    if (flags & 1) {
        fn_8267BE38(self);
    }
    return self;
}
