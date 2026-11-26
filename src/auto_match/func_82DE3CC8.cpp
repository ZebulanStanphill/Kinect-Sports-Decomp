// hkpConstrainedSystemFilter scalar deleting destructor ??_GhkpConstrainedSystemFilter@@UAAPAXI@Z: calls the out-of-line ~hkpConstrainedSystemFilter below (fn_82DEFAE0, ??1hkpConstrainedSystemFilter@@UAA@XZ), then frees through the class allocator. The deleting destructor is emitted with the vtable.
// hkpConstrainedSystemFilter::~hkpConstrainedSystemFilter (hkpConstrainedSystemFilter.cpp).
#include "havok/hkBase.h"
#include "havok/hkpConstrainedSystemFilter.h"

hkpConstrainedSystemFilter::~hkpConstrainedSystemFilter()
{
    if (m_otherFilter)
        m_otherFilter->removeReference();
}
