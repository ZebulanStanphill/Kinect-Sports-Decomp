#include "R1/Soundscape/BankEntryContext.h"
#include "game/OStringStream_8223CFC0.h"

extern "C" {
extern char lbl_8202253D[];
}

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
