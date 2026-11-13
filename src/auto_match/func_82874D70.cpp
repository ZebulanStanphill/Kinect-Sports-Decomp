// Returns a text as a string, written through a std::ostringstream.
#include "game/OStringStream_8223CFC0.h"

extern "C" {
extern char lbl_82022420[];

String_82230110 *fn_82874D70(String_82230110 *result)
{
    OStringStream_8223CFC0 stream;
    fn_82240158(&stream, lbl_82022420);
    fn_822403C8(result, stream.unk04);
    return result;
}
}
