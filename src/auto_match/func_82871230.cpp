#include "R1/Soundscape/EventHandleContext.h"

extern "C" {
void fn_8223CFC0(void *stream, unsigned int mode, unsigned int unk);
void fn_8223DCC8(void *stream);
void fn_822403C8(String_82230110 *result, void *buffer);
}

// A std::ostringstream with Visual C++ 2010's layout; its parts are out-of-line library code.
struct OStringStream_8223CFC0 {
    unsigned int unk00;
    unsigned char unk04[156]; // The string buffer
    __forceinline OStringStream_8223CFC0() { fn_8223CFC0(this, 2, 1); }
    __forceinline ~OStringStream_8223CFC0() { fn_8223DCC8(this); }
};

namespace R1 {
namespace Soundscape {

String_82230110 EventHandleContext_c::vf14()
{
    OStringStream_8223CFC0 stream;
    String_82230110 text((String_82230110::Raw()));
    fn_822403C8(&text, stream.unk04);
    return String_82230110(text);
}

} // namespace Soundscape
} // namespace R1
