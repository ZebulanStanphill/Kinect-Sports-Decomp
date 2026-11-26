// hkGeometryProcessing (Common/Internal/GeometryProcessing/hkGeometryProcessing.h): the helpers the hkgp
// classes share. The game's symbols name two of them, both structs: IFunction<hkVector4, float> and
// ConstFunction<IFunction<hkVector4, float> >. hkGeometryProcessing is declared as a namespace: mangling cannot
// tell a namespace from a struct, and a namespace lets other headers add to it.
//
//  - IFunction<IN, OUT> has no base class (RTTI), so its deleting destructor (82D1E668) frees through the global
//    operator delete, fn_8265CA20. Its vtable is the deleting destructor and one pure slot (_purecall), which
//    82D1DE40 calls with a vector and whose result it uses as a real. The slot is a plain virtual function here so
//    that a unit can construct a subclass without declaring it, as hkpConstraintData.h does. The slot's name is a
//    guess.
//  - ConstFunction<BASE> (8 bytes with IFunction as BASE) fills the slot with 82D1E660, which returns the real at
//    +0x4. 82D1DE40 builds a function-local static one with the value 1.0f as its default argument.
//  - PoolAllocator<T, N, ALLOCATOR> (0xC bytes) is not named by any symbol of the game; its name and those of
//    its members follow Havok's header. It is an array of pools of N items each. The layout comes from the
//    functions of hkgpAbstractMesh's lists, which all have N = 32: a new pool (82D2BEE8 for the triangulator's
//    vertices) is N * sizeof(T) + 8 bytes from the heap, its items chained into a free list through their first
//    word, the list head stored after the items and the number of used items after that; the pool is appended
//    to the array and then swapped to its front. The destructor is out of line in the game, one function for
//    each item size and only under fn_ names, so it is declared here and specialised in the header of the item
//    type (hkgpMesh.h, hkgpTriangulator.h, hkgpConvexHullImpl.h); the array is an hkArrayBase because that
//    destructor frees it, and the implicit destructor of an hkArray member would be inlined after it.
#ifndef HAVOK_HKGEOMETRYPROCESSING_H
#define HAVOK_HKGEOMETRYPROCESSING_H

#include "havok/hkBase.h"

extern "C" void fn_8265CA20(void *p);   // global operator delete

namespace hkGeometryProcessing {

template <typename IN, typename OUT>
struct IFunction {
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~IFunction() {}
    virtual OUT evaluate(const IN &x) const;   // +0x4, pure in the game
};

template <typename BASE>
struct ConstFunction : public BASE {
    hkReal m_value;   // +0x4
};

template <typename T, int N, typename ALLOCATOR>
struct PoolAllocator {
    struct Pool {
        T m_items[N];   // +0x0
        T *m_free;      // the first free item; a free item's first word points to the next one
        int m_used;     // the number of items in use
    };

    HK_FORCE_INLINE PoolAllocator() {}
    ~PoolAllocator();   // frees the pools and the array; out of line, see above

    hkArrayBase<Pool *> m_pools;   // +0x0; the first pool is the one with free items
};

}

#endif
