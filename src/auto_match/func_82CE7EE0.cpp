// hkStringBuf::hkStringBuf() (Common/Base/Container/String/hkStringBuf.cpp): an empty string, the array sized to
// the terminating zero. It keeps its fn_ name (hkNativeFileSystem::openReader, 82CE7F80, calls it), so the
// header's inline constructor is expanded into an extern "C" definition.
#include "havok/hkStringBuf.h"

extern "C" hkStringBuf *fn_82CE7EE0(hkStringBuf *self)
{
    self->hkStringBuf::hkStringBuf();
    return self;
}
