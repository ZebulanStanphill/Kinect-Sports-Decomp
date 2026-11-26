#ifndef HAVOK_HKSINGLETON_H
#define HAVOK_HKSINGLETON_H

#include "havok/hkBase.h"

// hkSingleton<T> (Common/Base/Container/... hkSingleton.h in Havok): the empty base that gives a class its
// one instance. s_instance keeps its lbl_ name in the game, so each class's header specialises
// instanceRef() to return it; getInstance, getInstancePtr and replaceInstance are Havok's members
// (the units that report through hkError read lbl_8323B464 and call through it: getInstance).
template <typename T>
class hkSingleton {
public:
    static HK_FORCE_INLINE T *&instanceRef();
    static HK_FORCE_INLINE T &HK_CALL getInstance() { return *instanceRef(); }
    static HK_FORCE_INLINE T *getInstancePtr() { return instanceRef(); }
    static HK_FORCE_INLINE void replaceInstance(T *t)
    {
        if (instanceRef())
            instanceRef()->removeReferenceLockUnchecked();
        instanceRef() = t;
    }
};

#endif
