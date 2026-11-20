#ifndef HAVOK_HKSINGLETON_H
#define HAVOK_HKSINGLETON_H

#include "havok/hkBase.h"

template <typename T>
class hkSingleton {
public:
    static HK_FORCE_INLINE T *&instanceRef();
    static HK_FORCE_INLINE T *getInstancePtr() { return instanceRef(); }
    static HK_FORCE_INLINE void replaceInstance(T *t)
    {
        if (instanceRef())
            instanceRef()->removeReferenceLockUnchecked();
        instanceRef() = t;
    }
};

#endif
