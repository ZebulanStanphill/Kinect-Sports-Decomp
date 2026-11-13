// Returns a text as a string, written through a std::ostringstream.
#include "game/OStringStream_8223CFC0.h"

extern "C" {
String_82230110 *fn_823B4480(String_82230110 *result)
{
    OStringStream_8223CFC0 stream;
    fn_82240158(&stream, "SpectatorNetworkFrameMsg - ");
    fn_822403C8(result, stream.unk04);
    return result;
}
}
