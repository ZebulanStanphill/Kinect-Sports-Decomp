// hkpTyremarksWheel::setNumPoints(int numPoints) (Havok 2010, Physics/Vehicle/TyreMarks/hkpTyremarksInfo.cpp):
// sets the ring buffer's size, restarts it and appends that many zeroed points.
#include "havok/hkpTyremarksInfo.h"

inline void *operator new(unsigned int, void *p) throw() { return p; }

// hkArray::pushBack as this unit inlines it: the members are reached through the array, and the point is
// copy-constructed with the placement new above (declared throw(), so its result is null checked). The
// header's pushBack (hkArrayUtil::constructWithCopy) gives the same calls without the null check.
template <typename T>
static HK_FORCE_INLINE void pushBack_82DFA668(hkArray<T> &array, const T &e)
{
    hkMemoryAllocator &alloc = hkContainerHeapAllocator::get(&array);
    if (array.m_size == array.getCapacity())
        hkArrayUtil::_reserveMore(alloc, &array, sizeof(T));
    new (array.m_data + array.m_size) T(e);
    array.m_size++;
}

void hkpTyremarksWheel::setNumPoints(int numPoints)
{
    m_numPoints = numPoints;
    m_currentPosition = 0;
    for (int i = 0; i < m_numPoints; i++) {
        hkpTyremarkPoint point;
        point.m_pointLeft.setZero4();
        point.m_pointRight.setZero4();
        pushBack_82DFA668(m_tyremarkPoints, point);
    }
}
