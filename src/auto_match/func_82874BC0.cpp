extern "C" {
void fn_82875280(void *);
void fn_82872E60(void *);
}

struct VecA {
    void *first;
    void *last;
    void *end;
    int al;
    ~VecA() { fn_82875280(this); }
};

struct VecC {
    void *first;
    void *last;
    void *end;
    int al;
    ~VecC() { fn_82872E60(this); }
};

namespace R1 {
namespace Soundscape {
class ListenerFactory_i {
public:
    virtual ~ListenerFactory_i() {}
};

class WwiseListenerFactory_c : public ListenerFactory_i {
public:
    virtual __forceinline ~WwiseListenerFactory_c();
    VecA a;
    int b;
    VecC c;
    int d;
};

__forceinline WwiseListenerFactory_c::~WwiseListenerFactory_c()
{
}
}
}

extern "C" void fn_82874BC0(R1::Soundscape::WwiseListenerFactory_c *self)
{
    self->R1::Soundscape::WwiseListenerFactory_c::~WwiseListenerFactory_c();
}
