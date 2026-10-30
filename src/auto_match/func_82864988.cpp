// R1::Soundscape::AudioVariant_c constructor (name): vtable, std::string name, id.
// std::string members stay out of line under the fn_ names C units use.
#include <xstring>

extern "C" {
void fn_82230300(void *self, bool built, unsigned int newsize);
void fn_82230110(void *self, const char *s);
unsigned int fn_82865088(const std::string *name);
}
template <>
__forceinline std::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(const char *s)
{
    fn_82230110(this, s);
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
    __forceinline AudioVariant_c(const char *name);
    virtual ~AudioVariant_c();
    std::string m_name;
    unsigned int m_id;
};

__forceinline AudioVariant_c::AudioVariant_c(const char *name)
    : m_name(name)
{
    {
        std::string tmp(name);
        m_id = fn_82865088(&tmp);
    }
    if (m_name.empty())
        m_id = 0;
}
}
}

extern "C" R1::Soundscape::AudioVariant_c *fn_82864988(R1::Soundscape::AudioVariant_c *self, const char *name)
{
    self->R1::Soundscape::AudioVariant_c::AudioVariant_c(name);
    return self;
}
