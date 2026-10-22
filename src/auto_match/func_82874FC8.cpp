extern "C" {
void fn_82875710(void *v, int n);
void fn_82875368(void *v, int n);
}

struct VecA {
    void *first;
    void *last;
    void *end;
    int al;
    VecA() : first(0), last(0), end(0) { fn_82875710(this, 8); }
};

struct VecC {
    void *first;
    void *last;
    void *end;
    int al;
    VecC() : first(0), last(0), end(0) { fn_82875368(this, 8); }
};

namespace R1 {
namespace Soundscape {
class WwiseListenerFactory_c {
public:
    WwiseListenerFactory_c();
    virtual ~WwiseListenerFactory_c();
    VecA a;
    int b;
    VecC c;
    int d;
};

__forceinline WwiseListenerFactory_c::WwiseListenerFactory_c() : b(0), d(0)
{
}
}
}

extern "C" R1::Soundscape::WwiseListenerFactory_c *fn_82874FC8(R1::Soundscape::WwiseListenerFactory_c *self)
{
    self->R1::Soundscape::WwiseListenerFactory_c::WwiseListenerFactory_c();
    return self;
}
