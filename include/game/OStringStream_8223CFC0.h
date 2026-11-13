// A std::ostringstream with Visual C++ 2010's layout, as the Soundscape name
// functions use it; its constructor and members are out-of-line library code
// under fn_ names, its destruction is the real class's (see
// game/OStringStreamObject_8223DCC8.h). Placeholder named after its constructor
// until the units can use the real class throughout.

#ifndef GAME_OSTRINGSTREAM_8223CFC0_H
#define GAME_OSTRINGSTREAM_8223CFC0_H

#include "game/OStringStreamObject_8223DCC8.h"
#include "game/String_82230110.h"

extern "C" {
void fn_8223CFC0(void *stream, unsigned int mode, unsigned int unk);
void fn_82240158(void *stream, const char *text); // stream << text
void fn_822403C8(String_82230110 *result, void *buffer);
}

struct OStringStream_8223CFC0 {
    unsigned int unk00;
    unsigned char unk04[156]; // The string buffer
    __forceinline OStringStream_8223CFC0() { fn_8223CFC0(this, 2, 1); }
    __forceinline ~OStringStream_8223CFC0() { DestroyOStringStream_8223DCC8(this); }
};

#endif
