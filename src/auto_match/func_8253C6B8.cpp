// hkpWorldCinfo's scalar deleting destructor (slot 0 of ??_7hkpWorldCinfo@@6B@), emitted in a game object
// (/O1) next to the destructor it calls. The helper below destroys a cinfo, which makes the compiler emit the
// class's vtable and with it this function.
#include "havok/hkBase.h"
#include "havok/hkpWorldCinfo.h"

void destroyWorldCinfo_8253C6B8(hkpWorldCinfo *p)
{
    p->hkpWorldCinfo::~hkpWorldCinfo();
}
