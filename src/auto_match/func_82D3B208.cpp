// getVtablehkpSingleShapeContainer, from HK_REFLECTION_DEFINE_VIRTUAL in hkpSingleShapeContainerClass.cpp (static in Havok).
#include "havok/hkpShape.h"

const void *HK_CALL getVtablehkpSingleShapeContainer()
{
    union {
        void *ptr;
        char buf[sizeof(hkpSingleShapeContainer)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpSingleShapeContainer(f);
    return u.ptr;
}
