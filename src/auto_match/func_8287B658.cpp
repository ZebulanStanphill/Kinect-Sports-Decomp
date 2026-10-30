extern "C" {
void fn_82864898(void *);
}

struct AudioVariant_82864898 {
    int data[4];
    ~AudioVariant_82864898() { fn_82864898(this); }
};

namespace R1 {
namespace Soundscape {
class ListenerBiasContext_c {
public:
    virtual ~ListenerBiasContext_c();
};

class Listener_i {
public:
    virtual ~Listener_i() {}
};

class WwiseListener_c : public Listener_i {
public:
    virtual __forceinline ~WwiseListener_c();
    AudioVariant_82864898 v;
    int pad[19];
    ListenerBiasContext_c ctx;
};

__forceinline WwiseListener_c::~WwiseListener_c()
{
}
}
}

extern "C" void fn_8287B658(R1::Soundscape::WwiseListener_c *self)
{
    self->R1::Soundscape::WwiseListener_c::~WwiseListener_c();
}
