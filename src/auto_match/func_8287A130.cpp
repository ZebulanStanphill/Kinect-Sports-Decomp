extern "C" {
void fn_82864898(void *);
}

struct AudioVariant_82864898 {
    int data[4];
    ~AudioVariant_82864898() { fn_82864898(this); }
};

namespace R1 {
namespace Soundscape {
namespace Maths {
class Spring_i {
public:
    virtual ~Spring_i() {}
};

class mathSpringBase_c : public Spring_i {
public:
    virtual __forceinline ~mathSpringBase_c();
    int pad[12];
    AudioVariant_82864898 v;
};

__forceinline mathSpringBase_c::~mathSpringBase_c()
{
}
}
}
}

extern "C" void fn_8287A130(R1::Soundscape::Maths::mathSpringBase_c *self)
{
    self->R1::Soundscape::Maths::mathSpringBase_c::~mathSpringBase_c();
}
