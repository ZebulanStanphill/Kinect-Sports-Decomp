// hkpMouseSpringAction::hkpMouseSpringAction(const hkVector4 &, const hkVector4 &, hkReal, hkReal, hkReal, hkpRigidBody *,
// const hkArray<mouseSpringAppliedCallback> *) (Physics/Utilities/Actions/MouseSpring/hkpMouseSpringAction.cpp), /O2 /QVMXReserve.
// 250.0f and 1.0f are literals (the rename map names the game's copy of 250.0f __real@437a0000); HK_REAL_MAX
// (__real@7f7fffee) keeps its name because Matching units reference it. hkpCollisionInput's members are hkPadSpu
// wrappers, so its implicit copy moves m_tolerance through integer registers; the closest-points function is
// looked up before the input copy and the collector are built.
// A vector member is copy-constructed through a vector register here (see havok/hkVector4.h).
#define HK_VECTOR4_COPY_CONSTRUCTOR
#include "havok/hkBase.h"
#include "havok/hkpCollisionDispatcher.h"
#include "havok/hkpRigidBody.h"
#include "havok/hkpSphereShape.h"
#include "havok/hkpMouseSpringAction.h"
#include "havok/hkpClosestCdPointCollector.h"
#include "havok/hkpWorld.h"
#include "havok/hkpProcessCollisionInput.h"

template <typename T>
static HK_FORCE_INLINE void _copyFromArray(hkArrayBase<T> &self, hkMemoryAllocator &alloc, const hkArrayBase<T> &a)
{
    if (self.getCapacity() < a.getSize()) {
        if ((self.m_capacityAndFlags & hkArrayBase<T>::DONT_DEALLOCATE_FLAG) == 0)
            alloc.bufFree(self.m_data, self.getCapacity(), sizeof(T));
        int n = a.getSize();
        self.m_data = static_cast<T *>(alloc.bufAlloc(n, sizeof(T)));
        self.m_capacityAndFlags = n;
    }
    self.m_size = a.getSize();
    T *dst = self.m_data;
    const T *src = a.m_data;
    int cnt = self.m_size;
    for (int i = 0; i < cnt; ++i)
        dst[i] = src[i];
}

template <typename T>
static HK_FORCE_INLINE void assign(hkArray<T> &self, const hkArray<T> &a)
{
    _copyFromArray(self, hkContainerHeapAllocator::get(&self), a);
}

hkpMouseSpringAction::hkpMouseSpringAction(const hkVector4 &positionInRbLocal, const hkVector4 &mousePositionInWorld,
                                           const hkReal springDamping, const hkReal springElasticity,
                                           const hkReal objectDamping, hkpRigidBody *rb,
                                           const hkArray<mouseSpringAppliedCallback> *appliedCallbacks)
    : hkpUnaryAction(rb),
      m_positionInRbLocal(positionInRbLocal),
      m_mousePositionInWorld(mousePositionInWorld),
      m_springDamping(springDamping),
      m_springElasticity(springElasticity),
      m_objectDamping(objectDamping)
{
    m_maxRelativeForce = 250.0f;
    if (appliedCallbacks)
        assign(m_applyCallbacks, *appliedCallbacks);

    hkpWorld *world = rb->getWorld();
    m_shapeKey = HK_INVALID_SHAPE_KEY;
    if (world) {
        hkpSphereShape sphere(1.0f);
        hkTransform transform(hkTransform::getIdentity().getRotation(), mousePositionInWorld);
        hkpCollidable sphereCollidable(&sphere, &transform);

        hkpCollisionDispatcher::GetClosestPointsFunc getClosestPoints =
            world->getCollisionDispatcher()->getGetClosestPointsFunc(sphere.getType(),
                                                                 rb->getCollidable()->getShape()->getType());
        hkpCollisionInput input = *world->getCollisionInput();
        hkpClosestCdPointCollector collector;
        getClosestPoints(sphereCollidable, *rb->getCollidable(), input, collector);
        if (collector.hasHit())
            m_shapeKey = collector.getHit().m_shapeKeyB;
    }
    setName("hkpMouseSpringAction");
}
