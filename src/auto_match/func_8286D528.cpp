extern "C" {
void fn_82360F68(void *v, int n);
}

struct Vec {
    void *first;
    void *last;
    void *end;
    Vec() : first(0), last(0), end(0) {}
};

namespace R1 {
namespace Soundscape {
namespace Maths {
class SpringFactory_c {
public:
    SpringFactory_c();
    virtual ~SpringFactory_c();
    Vec a;
};

__forceinline SpringFactory_c::SpringFactory_c()
{
    fn_82360F68(&a, 10);
}
}
}
}

extern "C" R1::Soundscape::Maths::SpringFactory_c *fn_8286D528(R1::Soundscape::Maths::SpringFactory_c *self)
{
    self->R1::Soundscape::Maths::SpringFactory_c::SpringFactory_c();
    return self;
}
