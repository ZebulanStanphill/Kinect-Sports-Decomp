extern "C" {
void fn_8267C488(void *self);
void fn_8267C498(void *p);
void fn_82773930(void *p);
extern char lbl_82010CE4[];
}

class __declspec(novtable) GRefCountImplCore {
public:
    virtual __forceinline ~GRefCountImplCore() { fn_8267C488(this); }
};

class GFxState : public GRefCountImplCore {
public:
    virtual __forceinline ~GFxState() {}
};

class Derived_82724580 : public GFxState {
public:
    int pad4;
    int pad8;
    int sub[4];
    void *f1c;
    __forceinline void Dtor() {
        *(void **)this = lbl_82010CE4;
        if (f1c != 0) {
            fn_8267C498(f1c);
            f1c = 0;
        }
        fn_82773930(&sub[0]);
        this->GFxState::~GFxState();
    }
};

extern "C" void fn_82724580(Derived_82724580 *self)
{
    self->Dtor();
}
