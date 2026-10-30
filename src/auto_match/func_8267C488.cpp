// GRefCountImplCore::~GRefCountImplCore(): stores the vtable. It keeps its fn_ name (C units
// call it), so the destructor is inlined into an extern "C" wrapper.
class GRefCountImplCore {
public:
    virtual __forceinline ~GRefCountImplCore() {}
};

extern "C" void fn_8267C488(GRefCountImplCore *self)
{
    self->GRefCountImplCore::~GRefCountImplCore();
}
