// hkpDisableEntityCollisionFilter: registers an entity whose collisions the filter disables (adds it to
// m_disabledEntities and makes the filter one of its entity listeners).
// hkpCollisionFilter and its interfaces as in havok/hkpCollisionFilter.h, plus the out-of-line default constructor
// (fn_82D41870, ??0hkpCollisionFilter@@QAA@XZ), which that header does not declare.
#include "havok/hkBase.h"

class hkpCollidable;
class hkpCdBody;
class hkpShapeContainer;
class hkpCollisionInput;
class hkpWorld;
struct hkpShapeRayCastInput;
struct hkpWorldRayCastInput;
typedef hkUint32 hkpShapeKey;

extern "C" void fn_8265CA20(void *p);   // global operator delete

class hkpCollidableCollidableFilter {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpCollidableCollidableFilter() {}
    virtual hkBool isCollisionEnabled(const hkpCollidable &a, const hkpCollidable &b) const;
};

class hkpShapeCollectionFilter {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual hkBool isCollisionEnabled(const hkpCollisionInput &input, const hkpCdBody &a, const hkpCdBody &b,
                                      const hkpShapeContainer &bContainer, hkpShapeKey bKey) const;
    virtual hkBool isCollisionEnabled(const hkpCollisionInput &input, const hkpCdBody &collectionBodyA,
                                      const hkpCdBody &collectionBodyB, const hkpShapeContainer &containerShapeA,
                                      const hkpShapeContainer &containerShapeB, hkpShapeKey keyA,
                                      hkpShapeKey keyB) const;
    virtual int numShapeKeyHitsLimitBreached(const hkpCollisionInput &input, const hkpCdBody &bodyA,
                                             hkpShapeKey keyA, const hkpCdBody &bodyB, hkpShapeKey keyB,
                                             hkpShapeKey *shapeKeysInOut, int numShapeKeys) const;
    virtual ~hkpShapeCollectionFilter() {}
};

class hkpRayShapeCollectionFilter {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual hkBool isCollisionEnabled(const hkpShapeRayCastInput &aInput, const hkpShapeContainer &bContainer,
                                      hkpShapeKey bKey) const;
    virtual ~hkpRayShapeCollectionFilter() {}
};

class hkpRayCollidableFilter {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpRayCollidableFilter() {}
    virtual hkBool isCollisionEnabled(const hkpWorldRayCastInput &a, const hkpCollidable &collidableB) const;
};

class hkpCollisionFilter : public hkReferencedObject,
                           public hkpCollidableCollidableFilter,
                           public hkpShapeCollectionFilter,
                           public hkpRayShapeCollectionFilter,
                           public hkpRayCollidableFilter {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    enum hkpFilterType {
        HK_FILTER_UNKNOWN = 0,
        HK_FILTER_NULL = 1,
        HK_FILTER_GROUP = 2,
        HK_FILTER_LIST = 3,
        HK_FILTER_CUSTOM = 4,
        HK_FILTER_PAIR = 5,
        HK_FILTER_CONSTRAINT = 6
    };
    hkpCollisionFilter();
    virtual void init(hkpWorld *world);   // primary vtable +0xC
    hkpCollisionFilter(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}

    hkUint32 m_prepad[2];   // +0x18
    hkUint32 m_type;        // +0x20 hkEnum<hkpFilterType, hkUint32>
    hkUint32 m_postpad[3];  // +0x24
};

class hkpEntity;
class hkpConstraintInstance;
struct hkpConstraintBrokenEvent;
struct hkpConstraintRepairedEvent;

extern "C" void fn_8265CA20(void *p);   // global operator delete

// Listener interfaces with no base (RTTI). Vtables: the deleting destructor, then five callbacks whose default
// implementations are empty (folded into fn_82BA02A8; hkpEntityListener's slot 3 is fn_82DB2F50).
class hkpConstraintListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpConstraintListener() {}
    virtual void constraintAddedCallback(hkpConstraintInstance *constraint) {}
    virtual void constraintRemovedCallback(hkpConstraintInstance *constraint) {}
    virtual void constraintDeletedCallback(hkpConstraintInstance *constraint) {}
    virtual void constraintBreakingCallback(const hkpConstraintBrokenEvent &event) {}
    virtual void constraintRepairedCallback(const hkpConstraintRepairedEvent &event) {}
};

class hkpEntityListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpEntityListener() {}
    virtual void entityAddedCallback(hkpEntity *entity) {}
    virtual void entityRemovedCallback(hkpEntity *entity) {}
    virtual void entityShapeSetCallback(hkpEntity *entity);
    virtual void entitySetMotionTypeCallback(hkpEntity *entity) {}
    virtual void entityDeletedCallback(hkpEntity *entity) {}
};

extern "C" {
void *fn_82DF06C0(hkpEntity *entity);                                // hkpEntity::getEntityListeners
void fn_82D8A228(hkpEntity *entity, hkpEntityListener *listener);    // hkpEntity::removeEntityListener
void fn_82D8A110(hkpEntity *entity, hkpEntityListener *listener);    // hkpEntity::addEntityListener
int fn_82CE63B0(hkMemoryAllocator *alloc, void *array, int sizeElem); // hkArrayUtil::_reserveMore
}

// Havok's small array (Common/Base/Container/Array/hkSmallArray.h): T *m_data; hkUint16 m_size, m_capacityAndFlags.
// indexOf is written as the guarded pointer loop the game's code has (a plain indexed for loop compiles to an
// offset-based loop here).
template <typename T>
class hkSmallArray {
public:
    HK_FORCE_INLINE int getSize() const { return m_size; }
    HK_FORCE_INLINE int indexOf(const T &t) const
    {
        int i = 0;
        const int size = m_size;
        if (size > 0) {
            const T *p = m_data;
            do {
                if (*p == t)
                    return i;
                ++p;
                ++i;
            } while (i < size);
        }
        return -1;
    }

    T *m_data;
    hkUint16 m_size;
    hkUint16 m_capacityAndFlags;
};

// Only the members these functions use; getEntityListeners and removeEntityListener are out of line.
class hkpEntity {
public:
    hkSmallArray<hkpEntityListener *> &getEntityListeners()
    {
        return *static_cast<hkSmallArray<hkpEntityListener *> *>(fn_82DF06C0(this));
    }
    void removeEntityListener(hkpEntityListener *el) { fn_82D8A228(this, el); }
    void addEntityListener(hkpEntityListener *el) { fn_82D8A110(this, el); }
};

// hkArray::pushBack as this function inlines it: the allocator is fetched before the capacity test
// (hkArrayUtil::_reserveMore), then the element is constructed in place (hkArrayUtil::construct) and m_size grows.
template <typename T>
class hkArrayEx_82DF05A8 : public hkArray<T> {
public:
    HK_FORCE_INLINE hkArrayEx_82DF05A8(hkFinishLoadedObjectFlag f) : hkArray<T>(f) {}
    static HK_FORCE_INLINE void construct(T *t, int n, const T &tcopy)
    {
        for (int i = 0; i < n; ++i)
            t[i] = tcopy;
    }
    HK_FORCE_INLINE void pushBack(const T &t)
    {
        hkMemoryAllocator &alloc = hkContainerHeapAllocator::get(this);
        if (this->m_size == this->getCapacity())
            fn_82CE63B0(&alloc, this, sizeof(T));
        construct(this->m_data + this->m_size, 1, t);
        this->m_size++;
    }
};

// Physics/Collide/Filter/DisableEntity/hkpDisableEntityCollisionFilter.h. RTTI: hkpCollisionFilter (its four
// filter interfaces at +0x8..+0x14), then hkpEntityListener at +0x30.
class hkpDisableEntityCollisionFilter : public hkpCollisionFilter, public hkpEntityListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpDisableEntityCollisionFilter();
    hkpDisableEntityCollisionFilter(hkFinishLoadedObjectFlag flag) : hkpCollisionFilter(flag), m_disabledEntities(flag) {}
    virtual ~hkpDisableEntityCollisionFilter();

    hkArrayEx_82DF05A8<hkpEntity *> m_disabledEntities;   // +0x34
};


extern "C" hkBool fn_82DF05A8(hkpDisableEntityCollisionFilter *self, hkpEntity *entity)
{
    if (entity == HK_NULL)
        return false;
    // m_disabledEntities.indexOf(entity) >= 0, with the index test folded away.
    {
        int i = 0;
        const int size = self->m_disabledEntities.m_size;
        if (size > 0) {
            hkpEntity *const *p = self->m_disabledEntities.m_data;
            do {
                if (*p == entity)
                    return false;
                ++p;
                ++i;
            } while (i < size);
        }
    }
    self->m_disabledEntities.pushBack(entity);
    if (entity->getEntityListeners().indexOf(self) < 0)
        entity->addEntityListener(self);
    return true;
}
