#include <vector>

#include "R1/Soundscape/WwiseEmitter.h"
#include "game/OStringStream_8223CFC0.h"

extern "C" char lbl_820227B9[];

namespace R1 {
namespace Soundscape {

String_82230110 WwiseEmitter_c::evf68()
{
    OStringStream_8223CFC0 stream;
    fn_82240158(&stream, lbl_820227B9);
    String_82230110 text((String_82230110::Raw()));
    fn_822403C8(&text, stream.unk04);
    return text;
}

} // namespace Soundscape
} // namespace R1
