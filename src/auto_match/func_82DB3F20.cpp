// hkpKdTreeWorldManager scalar deleting destructor (slot 0 of ??_7hkpKdTreeWorldManager@@6BhkpTreeWorldManager@@@):
// the out-of-line destructor ??1hkpKdTreeWorldManager@@UAA@XZ (82DB3418), then the class allocator's delete when
// flags & 1. It keeps its fn_ name because the adjustor thunks of the two other vtables (fn_82DB3F10,
// fn_82DB3F18: subi r3, r3, N; b fn_82DB3F20) jump to it by that name, so it is written out by hand, as for
// func_82DB30D8 (hkpAabbTreeWorldManager). The class is havok/hkpKdTreeWorldManager.h.
#include "havok/hkBase.h"
#include "havok/hkpKdTreeWorldManager.h"

extern "C" hkpKdTreeWorldManager *fn_82DB3F20(hkpKdTreeWorldManager *self, unsigned int flags)
{
    self->hkpKdTreeWorldManager::~hkpKdTreeWorldManager();
    if (flags & 1)
        hkpKdTreeWorldManager::operator delete(self);
    return self;
}
