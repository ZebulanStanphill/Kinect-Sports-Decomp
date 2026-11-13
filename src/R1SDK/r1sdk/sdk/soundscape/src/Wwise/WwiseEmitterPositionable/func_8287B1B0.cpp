#include <vector>

#include "R1/Soundscape/WwiseEmitterPositionable.h"
#include "game/OStringStream_8223CFC0.h"

extern "C" char lbl_82022BAD[];

namespace R1 {
namespace Soundscape {

String_82230110 WwiseEmitterPositionable_c::evf68()
{
    OStringStream_8223CFC0 stream;
    fn_82240158(&stream, lbl_82022BAD);
    String_82230110 text((String_82230110::Raw()));
    fn_822403C8(&text, stream.unk04);
    return text;
}

} // namespace Soundscape
} // namespace R1
