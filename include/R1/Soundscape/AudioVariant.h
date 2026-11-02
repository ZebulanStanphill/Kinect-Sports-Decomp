// R1::Soundscape::AudioVariant_c: a sound name (std::string) and its Wwise ID.
//
// The class name comes from RTTI (no base class). Field names are placeholders.
//
// AudioVariant_c's own units (func_82864848, func_828647F0,
// func_82864988, func_82864898, func_82292780) still define their functions
// under extern "C" fn_ names, so this header reaches them through inline
// forwarders: the copy constructor is fn_82292780 and the destructor
// fn_82864898. novtable keeps the inline forwarders from storing
// AudioVariant_c's vtable first. The name is kept as opaque bytes (a VC10
// std::string is 0x1C bytes) so units can use this header without <string>.

#ifndef R1_SOUNDSCAPE_AUDIOVARIANT_H
#define R1_SOUNDSCAPE_AUDIOVARIANT_H

extern "C" {
void *fn_82292780(void *self, const void *src);
void fn_82864898(void *self);
}

namespace R1 {
namespace Soundscape {

class __declspec(novtable) AudioVariant_c {
public:
    __forceinline AudioVariant_c(const AudioVariant_c &o) { fn_82292780(this, &o); }
    virtual __forceinline ~AudioVariant_c() { fn_82864898(this); }

    char m_name[0x1C]; // std::string
    unsigned int m_id;
};

} // namespace Soundscape
} // namespace R1

#endif
