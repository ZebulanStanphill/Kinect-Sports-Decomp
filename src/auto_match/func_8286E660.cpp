extern "C" {
void fn_82360F68(void *v, int n);
}

struct Vec {
    void *first;
    void *last;
    void *end;
    int al;
    Vec() : first(0), last(0), end(0) {}
};

namespace R1 {
namespace Soundscape {
class WwiseBankFactory_c {
public:
    WwiseBankFactory_c();
    virtual ~WwiseBankFactory_c();
    Vec a;
    Vec b;
};

__forceinline WwiseBankFactory_c::WwiseBankFactory_c()
{
    fn_82360F68(&a, 0xf);
    fn_82360F68(&b, 0xf);
}
}
}

extern "C" R1::Soundscape::WwiseBankFactory_c *fn_8286E660(R1::Soundscape::WwiseBankFactory_c *self)
{
    self->R1::Soundscape::WwiseBankFactory_c::WwiseBankFactory_c();
    return self;
}
