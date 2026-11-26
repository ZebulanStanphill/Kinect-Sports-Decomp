#include "havok/hkBase.h"
#include "havok/hkpGenericConstraintDataScheme.h"
inline void *operator new(unsigned int, void *p) { return p; }
extern "C" void fn_82D80180(void *p, int finishing) {
    hkFinishLoadedObjectFlag f; f.m_finishing = finishing;
    new (p) hkpGenericConstraintDataScheme(f);
}
