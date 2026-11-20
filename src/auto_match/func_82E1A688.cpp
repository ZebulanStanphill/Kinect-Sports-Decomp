// A destructor, written out: frees the owned string map (its keys first,
// fn_82E1A7F0), then the four arrays in reverse order of declaration.
#include "havok/hkMap.h"

typedef hkCachedHashMap<hkStringMapOperations> StringHashMap;

extern "C" void fn_82E1A7F0(StringHashMap *map);

struct Elem8_82E1A688 {
    hkUint32 m_data[2];
};

struct Elem16_82E1A688 {
    hkUint32 m_data[4];
};

struct Obj_82E1A688 {
    hkArray<Elem8_82E1A688> m_array0;    // +0x00
    hkArray<Elem16_82E1A688> m_array1;   // +0x0C
    hkArray<Elem8_82E1A688> m_array2;    // +0x18
    hkArray<Elem8_82E1A688> m_array3;    // +0x24
    StringHashMap *m_map;                // +0x30 (allocated with 0x10 bytes)
};

extern "C" void fn_82E1A688(Obj_82E1A688 *o)
{
    StringHashMap *map = o->m_map;
    if (map != HK_NULL) {
        fn_82E1A7F0(map);
        map->~StringHashMap();
        hkMemoryRouter::getInstance().heap().blockFree(map, 0x10);
    }
    o->m_array3.~hkArray<Elem8_82E1A688>();
    o->m_array2.~hkArray<Elem8_82E1A688>();
    o->m_array1.~hkArray<Elem16_82E1A688>();
    o->m_array0.~hkArray<Elem8_82E1A688>();
}
