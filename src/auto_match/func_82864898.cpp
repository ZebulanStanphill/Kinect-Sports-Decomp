// R1::Soundscape::AudioVariant_c destructor: vtable, std::string name, id.
// std::string members stay out of line under the fn_ names C units use.
#include <xstring>

extern "C" {
void fn_82230300(void *self, bool built, unsigned int newsize);
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
    virtual __forceinline ~AudioVariant_c();
    std::string m_name;
    unsigned int m_id;
};

__forceinline AudioVariant_c::~AudioVariant_c()
{
}
}
}

extern "C" void fn_82864898(R1::Soundscape::AudioVariant_c *self)
{
    self->R1::Soundscape::AudioVariant_c::~AudioVariant_c();
}
