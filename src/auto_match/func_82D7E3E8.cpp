// hkpAabbPhantom::hkpAabbPhantom(hkFinishLoadedObjectFlag), the serialization "finish" constructor
// (Physics/Dynamics/Phantom/hkpAabbPhantom.h). The arrays that are not serialised are default-constructed; the
// hkpPhantom vtable store is dead and removed.
#include "havok/hkpAabbPhantom.h"

hkpAabbPhantom::hkpAabbPhantom(hkFinishLoadedObjectFlag flag) : hkpPhantom(flag)
{
    if (flag.m_finishing) {
        fn_82D7E1E0(this);
    }
}
