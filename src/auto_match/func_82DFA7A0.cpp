// hkpTyremarksInfo::hkpTyremarksInfo(const hkpVehicleData &, int num_points)
#include "havok/hkBase.h"
extern "C" void fn_82CE6310(hkMemoryAllocator *alloc, void *array, int reqCapacity, int sizeElem);   // hkArrayUtil::_reserve

// hkArray with the inlined setSize/clear this unit uses. setSize fetches the allocator first, then
// doubles the capacity or sets it to n through hkArrayUtil::_reserve; m_size is stored through the
// array's this (so the loop below reloads it). clear() runs an (empty) destruct loop over the elements,
// which leaves the dead `addi r11, r3, 0x10` in the inlined hkpTyremarksWheel constructor.
template <typename T>
class hkArrayS : public hkArray<T> {
public:
    HK_FORCE_INLINE hkArrayS() {}
    HK_FORCE_INLINE void _reserve(hkMemoryAllocator &a, int n)
    {
        const int capacity = this->getCapacity();
        if (capacity < n) {
            int cap2 = 2 * capacity;
            int newSize = (n < cap2) ? cap2 : n;
            fn_82CE6310(&a, this, newSize, sizeof(T));
        }
    }
    HK_FORCE_INLINE void _setSize(hkMemoryAllocator &a, int n)
    {
        _reserve(a, n);
        this->m_size = n;
    }
    HK_FORCE_INLINE void setSize(int n) { _setSize(hkContainerHeapAllocator::get(this), n); }
    HK_FORCE_INLINE void clear()
    {
        T *t = this->m_data;
        int n = this->m_size;
        for (int i = n - 1; i >= 0; --i)
            t[i].~T();
        this->m_size = 0;
    }
};

class hkpTyremarksWheel;
extern "C" void fn_82DFA668(hkpTyremarksWheel *self, int num_points);   // hkpTyremarksWheel::setNumPoints

struct hkpTyremarkPoint {
    hkReal m_pointLeft[4];
    hkReal m_pointRight[4];
};

class hkpTyremarksWheel : public hkReferencedObject {
public:
    HK_FORCE_INLINE hkpTyremarksWheel()
    {
        m_numPoints = 0;
        m_currentPosition = 0;
        m_tyremarkPoints.clear();
    }
    virtual ~hkpTyremarksWheel();
    HK_FORCE_INLINE void setNumPoints(int num_points) { fn_82DFA668(this, num_points); }

    int m_currentPosition;                       // +0x8
    int m_numPoints;                             // +0xc
    hkArrayS<hkpTyremarkPoint> m_tyremarkPoints; // +0x10
};

struct hkpVehicleData {
    char pad[0x20];
    hkInt8 m_numWheels;   // +0x20
};

class hkpTyremarksInfo : public hkReferencedObject {
public:
    hkpTyremarksInfo(const hkpVehicleData &data, int num_points);
    virtual ~hkpTyremarksInfo();

    hkReal m_minTyremarkEnergy;                    // +0x8
    hkReal m_maxTyremarkEnergy;                    // +0xc
    hkArrayS<hkpTyremarksWheel *> m_tyremarkWheel; // +0x10
};

hkpTyremarksInfo::hkpTyremarksInfo(const hkpVehicleData &data, int num_points)
{
    m_minTyremarkEnergy = 0;
    m_maxTyremarkEnergy = 0;
    m_tyremarkWheel.setSize(data.m_numWheels);
    for (int sd_it = 0; sd_it < m_tyremarkWheel.getSize(); sd_it++) {
        hkpTyremarksWheel *tyremarks_wheel = new hkpTyremarksWheel();
        tyremarks_wheel->setNumPoints(num_points);
        m_tyremarkWheel[sd_it] = tyremarks_wheel;
    }
}
