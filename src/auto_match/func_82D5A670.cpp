// hkpHeightFieldAgent::hkpHeightFieldAgent(const hkpCdBody &, const hkpCdBody &, const hkpCollisionInput &,
// hkpContactMgr *) (Physics/Collide/Agent/MiscAgent/HeightField/hkpHeightFieldAgent.cpp): with a contact
// manager, one contact point id per collision sphere of body A's shape, all HK_INVALID_CONTACT_POINT.
// hkArray::setSize(n, fill) is inlined: the allocator is fetched first, the capacity is doubled or set to n
// through hkArrayUtil::_reserve (fn_82CE6310, which keeps its fn_ name), then the new items are filled.
#include "havok/hkBase.h"

class hkpCdBody;
class hkpContactMgr;
class hkpConstraintOwner;
class hkpCdBodyPairCollector;
class hkpCdPointCollector;
typedef hkpConstraintOwner hkCollisionConstraintOwner;
struct hkpCollisionInput;
struct hkpLinearCastCollisionInput;
struct hkpProcessCollisionInput;
struct hkpProcessCollisionOutput;
typedef hkUint32 hkpShapeKey;

// hkpCollisionAgent (Physics/Collide/Agent/hkpCollisionAgent.h): hkReferencedObject, then
// hkpContactMgr *m_contactMgr (+0x8). Vtable slots from func_82D60AC8.
class hkpCollisionAgent : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpCollisionAgent(hkpContactMgr *contactMgr) : m_contactMgr(contactMgr) {}
    virtual void getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                 hkpCdBodyPairCollector &collector);   // +0xC
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                  hkpCdPointCollector &collector);   // +0x10
    virtual void linearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                            hkpCdPointCollector &collector, hkpCdPointCollector *startCollector);   // +0x14
    virtual void processCollision(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpProcessCollisionInput &input,
                                  hkpProcessCollisionOutput &result);   // +0x18
    virtual void cleanup(hkCollisionConstraintOwner &constraintOwner);   // +0x1C

    hkpContactMgr *m_contactMgr;   // +0x8
};

typedef hkUint16 hkContactPointId;
#define HK_INVALID_CONTACT_POINT 0xffff

extern "C" void fn_82CE6310(hkMemoryAllocator *alloc, void *array, int reqCapacity, int sizeElem);   // hkArrayUtil::_reserve

struct hkArrayUtil_ {
    static HK_FORCE_INLINE void HK_CALL _reserve(hkMemoryAllocator &a, void *array, int reqCapacity, int sizeElem)
    {
        fn_82CE6310(&a, array, reqCapacity, sizeElem);
    }
    template <typename T>
    static HK_FORCE_INLINE void HK_CALL constructWithCopy(T *p, int n, const T &fill)
    {
        for (int i = 0; i < n; ++i)
            p[i] = fill;
    }
};

// hkArray with the setSize(n, fill) the agent uses.
template <typename T>
class hkArrayWithSetSize : public hkArray<T> {
public:
    HK_FORCE_INLINE void _reserve(hkMemoryAllocator &a, int n)
    {
        const int capacity = this->getCapacity();
        if (capacity < n) {
            int cap2 = 2 * capacity;
            int newSize = (n < cap2) ? cap2 : n;
            hkArrayUtil_::_reserve(a, this, newSize, sizeof(T));
        }
    }
    HK_FORCE_INLINE void _setSize(hkMemoryAllocator &a, int n, const T &fill)
    {
        _reserve(a, n);
        hkArrayUtil_::constructWithCopy<T>(this->m_data + this->m_size, n - this->m_size, fill);
        this->m_size = n;
    }
    HK_FORCE_INLINE void setSize(int n, const T &fill) { _setSize(hkContainerHeapAllocator::get(this), n, fill); }
};

class hkpShape : public hkReferencedObject {
public:
    virtual hkReal getMaximumProjection(const void *direction) const;   // +0x0C
    virtual const void *getContainer() const;                           // +0x10
    virtual hkBool isConvex() const;                                    // +0x14
    virtual int calcSizeForSpu(const void *input, int spuBufferSizeLeft) const;   // +0x18
    virtual void getAabb(const void *localToWorld, hkReal tolerance, void *out) const;   // +0x1C
    virtual hkBool castRay(const void *input, void *output) const;     // +0x20
    virtual void castRayWithCollector(const void *input, const hkpCdBody &cdBody, void *collector) const;   // +0x24
    virtual int castRayBundle(const void *input, void *output, int mask) const;   // +0x28

    hkUlong m_userData;   // +0x8
    hkUint32 m_type;      // +0xC
};

class hkpSphereRepShape : public hkpShape {
public:
    virtual int getNumCollisionSpheres() const;   // +0x2C
};

class hkpCdBody {
public:
    const hkpShape *getShape() const { return m_shape; }
    const hkpShape *m_shape;   // +0x0
};

class hkpHeightFieldAgent : public hkpCollisionAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpHeightFieldAgent(const hkpCdBody &A, const hkpCdBody &B, const hkpCollisionInput &input, hkpContactMgr *mgr);

    hkArrayWithSetSize<hkContactPointId> m_contactPointId;   // +0xC
};

hkpHeightFieldAgent::hkpHeightFieldAgent(const hkpCdBody &A, const hkpCdBody &B, const hkpCollisionInput &input,
                                         hkpContactMgr *mgr)
    : hkpCollisionAgent(mgr)
{
    if (mgr) {
        const hkpSphereRepShape *sphereShape = static_cast<const hkpSphereRepShape *>(A.getShape());
        int numSpheres = sphereShape->getNumCollisionSpheres();
        m_contactPointId.setSize(numSpheres, HK_INVALID_CONTACT_POINT);
    }
}
