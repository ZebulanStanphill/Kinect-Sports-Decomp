extern "C" {
void fn_8287A130(void *self);
void fn_8265CA20(void *p);
}

namespace R1 { namespace Soundscape { namespace Maths {
class mathSpring_c {
public:
    virtual __forceinline ~mathSpring_c() { fn_8287A130(this); }
};
}}}

extern "C" R1::Soundscape::Maths::mathSpring_c *fn_8287A608(R1::Soundscape::Maths::mathSpring_c *self, unsigned int flags)
{
    self->mathSpring_c::~mathSpring_c();
    if (flags & 1) {
        fn_8265CA20(self);
    }
    return self;
}
