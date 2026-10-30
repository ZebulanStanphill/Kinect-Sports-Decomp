// R1::Soundscape::ReverbEntry_c copy constructor: vtable, embedded AudioVariant_c copy
// (out of line, fn_82292780), a flag byte and a float.
extern "C" void *fn_82292780(void *self, const void *o);

namespace R1 {
namespace Soundscape {
class ReverbEntry_c {
public:
    __forceinline ReverbEntry_c(const ReverbEntry_c &o);
    virtual ~ReverbEntry_c();
    char variant[0x24];
    unsigned char flag;
    float gain;
};

__forceinline ReverbEntry_c::ReverbEntry_c(const ReverbEntry_c &o)
{
    fn_82292780(variant, o.variant);
    flag = o.flag;
    gain = o.gain;
}
}
}

extern "C" R1::Soundscape::ReverbEntry_c *fn_82878358(R1::Soundscape::ReverbEntry_c *self,
                                                    const R1::Soundscape::ReverbEntry_c *o)
{
    self->R1::Soundscape::ReverbEntry_c::ReverbEntry_c(*o);
    return self;
}
