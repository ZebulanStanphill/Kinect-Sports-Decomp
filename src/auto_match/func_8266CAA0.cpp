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
};

class GFxLog;
template <class T> class GFxLogBase {
public:
    virtual __forceinline ~GFxLogBase() {}
};

class Log_8266CAA0 : public GFxState {
public:
    GFxLogBase<GFxLog> log;
};

extern "C" Log_8266CAA0 *fn_8266CAA0(Log_8266CAA0 *self, unsigned int flags)
{
    self->log.GFxLogBase<GFxLog>::~GFxLogBase();
    self->GFxState::~GFxState();
    if (flags & 1) {
        fn_8267BE38(self);
    }
    return self;
}
