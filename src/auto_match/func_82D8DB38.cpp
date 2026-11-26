// hkpBroadPhaseBorder::deactivate() (Physics/Dynamics/World/BroadPhaseBorder/hkpBroadPhaseBorder.cpp; slot +0x10
// of ??_7hkpBroadPhaseBorder@@6BhkReferencedObject@@@, also of the game's subclass at lbl_821C40C4): when still
// in a world, removes the six border phantoms from it (hkpWorld::removePhantomBatch, fn_82D86660), stops
// listening to them and releases them, then runs its own world-deleted callback. Havok code, /O2.
// The class is the one func_82D8DDB8.cpp writes out (its constructor); the body is an inline member so that
// `this` converts to the listener base without a null test.
#include "havok/hkBase.h"
#include "havok/hkpBroadPhaseBorder.h"

extern "C" void fn_82D8DB38(hkpBroadPhaseBorder *self)
{
    self->deactivate();
}
