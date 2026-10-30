// R1::Soundscape::AudioVariant_c copy constructor: vtable, std::string name, id.
// std::string members stay out of line under the fn_ names C units use.
#include <xstring>

extern "C" {
void fn_82230300(void *self, bool built, unsigned int newsize);
void fn_8223B688(void *self, const void *src);
}
template <>
__forceinline std::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(const basic_string &right)
{
    fn_8223B688(this, &right);
}
#include <string>
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
    __forceinline AudioVariant_c(const AudioVariant_c &o);
    virtual ~AudioVariant_c();
    std::string m_name;
    unsigned int m_id;
};

__forceinline AudioVariant_c::AudioVariant_c(const AudioVariant_c &o)
    : m_name(o.m_name), m_id(o.m_id)
{
}
}
}

extern "C" R1::Soundscape::AudioVariant_c *fn_82292780(R1::Soundscape::AudioVariant_c *self,
                                                     const R1::Soundscape::AudioVariant_c *o)
{
    self->R1::Soundscape::AudioVariant_c::AudioVariant_c(*o);
    return self;
}
