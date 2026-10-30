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
};

extern "C" GFxState *fn_8266C958(GFxState *self, unsigned int flags)
{
    self->GFxState::~GFxState();
    if (flags & 1) {
        fn_8267BE38(self);
    }
    return self;
}
