extern "C" {
void fn_82879C20(void *);
void fn_82872E60(void *);
}

struct Part_82879C20 {
    int data[4];
    ~Part_82879C20() { fn_82879C20(this); }
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
class Emitter_i {
public:
    virtual ~Emitter_i() {}
};

class WwiseEmitterPositionable_c : public Emitter_i {
public:
    virtual __forceinline ~WwiseEmitterPositionable_c();
    Part_82879C20 part;
    int pad[37];
    VecC c;
};

__forceinline WwiseEmitterPositionable_c::~WwiseEmitterPositionable_c()
{
}
}
}

extern "C" void fn_8287AD88(R1::Soundscape::WwiseEmitterPositionable_c *self)
{
    self->R1::Soundscape::WwiseEmitterPositionable_c::~WwiseEmitterPositionable_c();
}
