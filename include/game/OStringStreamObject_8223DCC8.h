// Destroys a std::ostringstream that a unit still holds as raw storage (its
// constructor and members are out-of-line library code that those units call by
// fn_ names). The stream is destroyed as a complete object, a member of
// OStringStreamObject_8223DCC8, so that the compiler calls std::ostringstream's
// vbase destructor (func_8223DCC8), which destroys the virtual base std::ios_base
// as well.

#ifndef GAME_OSTRINGSTREAMOBJECT_8223DCC8_H
#define GAME_OSTRINGSTREAMOBJECT_8223DCC8_H

#include <sstream>

struct OStringStreamObject_8223DCC8 {
    std::ostringstream stream;
};

inline void DestroyOStringStream_8223DCC8(void *stream)
{
    ((OStringStreamObject_8223DCC8 *)stream)->~OStringStreamObject_8223DCC8();
}

#endif
