#ifndef HAVOK_HKSTRINGMAPC_H
#define HAVOK_HKSTRINGMAPC_H

#include "havok/hkMap.h"

template <typename V>
class hkStringMapC : public hkStringMap<V> {
public:
    HK_FORCE_INLINE hkStringMapC() {}
};

#endif
