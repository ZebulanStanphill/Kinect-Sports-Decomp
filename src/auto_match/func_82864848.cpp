// R1::Soundscape::AudioVariant_c default constructor: vtable, empty std::string name, id 0.
// std::string::_Tidy stays out of line as fn_82230300, the name C units use.
#include <string>

extern "C" void fn_82230300(void *self, bool built, unsigned int newsize);
template <>
__forceinline void std::basic_string<char, std::char_traits<char>, std::allocator<char> >::_Tidy(bool built,
                                                                                              size_t newsize)
{
    fn_82230300(this, built, newsize);
}

namespace R1 {
namespace Soundscape {
class AudioVariant_c {
public:
    __forceinline AudioVariant_c();
    virtual ~AudioVariant_c();
    std::string m_name;
    unsigned int m_id;
};

__forceinline AudioVariant_c::AudioVariant_c()
    : m_id(0)
{
}
}
}

extern "C" R1::Soundscape::AudioVariant_c *fn_82864848(R1::Soundscape::AudioVariant_c *self)
{
    self->R1::Soundscape::AudioVariant_c::AudioVariant_c();
    return self;
}
