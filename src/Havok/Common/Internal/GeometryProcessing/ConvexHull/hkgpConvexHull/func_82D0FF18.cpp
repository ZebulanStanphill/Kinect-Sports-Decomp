// Subtracts every operand of an array from a convex hull (Havok's
// hkgpConvexHull code; the class and the method name are placeholders). It
// starts from a copy of the hull and, operand by operand, replaces each piece
// that the operand cuts (Hull_82D0FE70::subtract, func_82D0FE70.cpp) by what
// is left of it. The remaining pieces are appended to `out`; the result is
// whether anything remains.
#include "havok/hkBase.h"
#include "havok/hkArray.h"

extern "C" void fn_82CE63B0(hkMemoryAllocator *alloc, void *array, int elemSize); // hkArrayUtil::_reserveMore

template <typename T>
static HK_FORCE_INLINE void constructWithCopy(T *p, int n, const T &tcopy)
{
    for (int i = 0; i < n; ++i)
        p[i] = tcopy;
}

template <typename T>
static HK_FORCE_INLINE void swapT(T &a, T &b)
{
    T t = a;
    a = b;
    b = t;
}

// hkArray with the members this function uses (the shared header has only
// the constructor, the accessors and the destructor).
template <typename T>
class Array_82D0FF18 : public hkArray<T> {
public:
    HK_FORCE_INLINE void pushBackUnchecked(const T &e)
    {
        constructWithCopy(this->m_data + this->m_size, 1, e);
        this->m_size++;
    }
    HK_FORCE_INLINE void _pushBack(hkMemoryAllocator &alloc, const T &e)
    {
        if (this->m_size == this->getCapacity())
            fn_82CE63B0(&alloc, this, sizeof(T));
        pushBackUnchecked(e);
    }
    HK_FORCE_INLINE void pushBack(const T &e)
    {
        _pushBack(hkContainerHeapAllocator::get(this), e);
    }
    HK_FORCE_INLINE void swap(Array_82D0FF18 &other)
    {
        swapT(this->m_data, other.m_data);
        swapT(this->m_size, other.m_size);
        swapT(this->m_capacityAndFlags, other.m_capacityAndFlags);
    }
};

struct ObjectArray_82D0FE70;

// The object a hull keeps at +8; fn_82D14790 updates it after `scale` is set.
struct Impl_82D0FF18 {
    int unknown0;
    float scale;
};

class Hull_82D0FE70 {
public:
    virtual ~Hull_82D0FE70();
    int unknown4;
    Impl_82D0FF18 *impl;

    bool subtract(void *operand, ObjectArray_82D0FE70 *pieces, float thickness);
};

typedef Array_82D0FF18<Hull_82D0FE70 *> HullArray_82D0FF18;

extern "C" {
Hull_82D0FE70 *fn_82D0D770(Hull_82D0FE70 *self); // a copy of the hull
void fn_82D14790(Impl_82D0FF18 *impl);
}

extern "C" bool fn_82D0FF18(Hull_82D0FE70 *self, const hkArrayBase<void *> &operands, HullArray_82D0FF18 &out,
                            float thickness)
{
    HullArray_82D0FF18 current;
    HullArray_82D0FF18 next;
    HullArray_82D0FF18 pieces;

    current.pushBack(fn_82D0D770(self));
    for (int j = 0; j < operands.getSize(); j++) {
        const int count = current.getSize();
        for (int i = 0; i < count; i++) {
            pieces.clear();
            if (current[i]->subtract(operands[j], (ObjectArray_82D0FE70 *)&pieces, thickness)) {
                delete current[i];
                for (int k = 0; k < pieces.getSize(); k++) {
                    next.pushBack(pieces[k]);
                    Hull_82D0FE70 *piece = pieces[k];
                    piece->impl->scale = 0.9999f;
                    fn_82D14790(piece->impl);
                }
            } else {
                next.pushBack(current[i]);
            }
        }
        current.swap(next);
        next.clear();
    }
    for (int i = 0; i < current.getSize(); i++)
        out.pushBack(current[i]);
    return current.getSize() > 0;
}
