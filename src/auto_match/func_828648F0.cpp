// R1::Soundscape::AudioVariant_c constructor from a std::string name: copies
// the name and hashes it into the Wwise ID (fn_82865088, through a temporary
// string); an empty name gets ID 0. AudioVariant_c's other members are still
// extern "C" (see AudioVariant.h), so this keeps its fn_ name.
#include "game/String_82230110.h"

extern "C" {
void *fn_8223B688(void *self, const void *src); // std::string copy constructor
unsigned int fn_82865088(const String_82230110 *name);
}

// std::string::c_str (VC10: the heap pointer once the capacity reaches 16).
static __forceinline const char *CStr_828648F0(const String_82230110 &s)
{
    return s.capacity >= 16 ? s.bx.ptr : s.bx.buf;
}

namespace R1 {
namespace Soundscape {

// Declared locally: AudioVariant.h's class is novtable (its members are still
// extern "C" forwarders), and this constructor stores the vtable. The deleting
// destructor (func_822927D8) stays C: it calls the destructor by its fn_ name.
class AudioVariant_c {
public:
    __forceinline AudioVariant_c(const String_82230110 &name);
    // fn_82864898 (out of line, still C).
    virtual ~AudioVariant_c();

    String_82230110 m_name;
    unsigned int m_id;
};

__forceinline AudioVariant_c::AudioVariant_c(const String_82230110 &name)
    : m_name(String_82230110::Raw())
{
    fn_8223B688(&m_name, &name);
    m_id = fn_82865088(&String_82230110(CStr_828648F0(name)));
    if (name.size == 0) {
        m_id = 0;
    }
}

} // namespace Soundscape
} // namespace R1

extern "C" R1::Soundscape::AudioVariant_c *fn_828648F0(R1::Soundscape::AudioVariant_c *self,
                                                             const String_82230110 *name)
{
    self->R1::Soundscape::AudioVariant_c::AudioVariant_c(*name);
    return self;
}
