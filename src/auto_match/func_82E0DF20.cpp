// hkContentsUpdateTracker::removeFinish (a class in an anonymous namespace of hkBinaryPackfileReader.cpp, ?A0x11ff29d5,
// deriving from hkPackfileObjectUpdateTracker): a change to the loaded objects marks the tracker (+0x38) and
// drops the reader's packfile class registry (the hkRefPtr the reader passed as m_owner), then
// hkPackfileObjectUpdateTracker's removeFinish. It keeps its fn_ name: the anonymous namespace's mangled name cannot be
// reproduced.
#include "havok/hkPackfileObjectUpdateTracker.h"
#include "havok/hkClassNameRegistry.h"

namespace {

class hkContentsUpdateTracker : public hkPackfileObjectUpdateTracker {
public:
    int m_changed;                                 // +0x38
    hkRefPtr<hkClassNameRegistry> *m_owner;        // +0x3C
};

}

extern "C" void fn_82E0DF20(hkContentsUpdateTracker *self, void *oldObject)
{
    self->m_changed = 1;
    *self->m_owner = HK_NULL;
    self->hkPackfileObjectUpdateTracker::removeFinish(oldObject);
}
