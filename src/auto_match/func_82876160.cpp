#include "R1/Soundscape/BankEntryContext.h"

extern "C" {
void fn_8223CFC0(void *stream, unsigned int mode, unsigned int unk);
void fn_8223DCC8(void *stream);
void fn_82240158(void *stream, const char *text);
void fn_822403C8(String_82230110 *result, void *buffer);
extern char lbl_8202253D[];
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

String_82230110 BankEntryContext_c::vf00()
{
    OStringStream_8223CFC0 stream;
    fn_82240158(&stream, lbl_8202253D);
    String_82230110 text((String_82230110::Raw()));
    fn_822403C8(&text, stream.unk04);
    return text;
}

} // namespace Soundscape
} // namespace R1
