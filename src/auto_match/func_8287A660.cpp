extern "C" {
void fn_8287A130(void *self);
void fn_8265CA20(void *p);
}

namespace R1 { namespace Soundscape { namespace Maths {
class mathSpringAngle_c {
public:
    virtual __forceinline ~mathSpringAngle_c() { fn_8287A130(this); }
};
}}}

extern "C" R1::Soundscape::Maths::mathSpringAngle_c *fn_8287A660(R1::Soundscape::Maths::mathSpringAngle_c *self, unsigned int flags)
{
    self->mathSpringAngle_c::~mathSpringAngle_c();
    if (flags & 1) {
        fn_8265CA20(self);
    }
    return self;
}
