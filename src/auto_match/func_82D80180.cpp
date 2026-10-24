#include "havok/hkBase.h"
inline void *operator new(unsigned int, void *p) { return p; }
class hkpGenericConstraintDataScheme {
public:
    hkpGenericConstraintDataScheme(hkFinishLoadedObjectFlag flag);
};
extern "C" void fn_82D80180(void *p, int finishing) {
    hkFinishLoadedObjectFlag f; f.m_finishing = finishing;
    new (p) hkpGenericConstraintDataScheme(f);
}
