#include "R1/Soundscape/EventHandleContext.h"
#include "game/OStringStream_8223CFC0.h"

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
