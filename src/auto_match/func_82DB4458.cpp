#include "havok/hkBase.h"
#include "havok/hkpConstraintListener.h"
#include "havok/hkpWorldDeletionListener.h"
extern "C" void fn_82DC8A30(void *);
class CallbackMap { public: CallbackMap() { fn_82DC8A30(this); } int data[4]; };
class hkpCollisionCallbackUtil : public hkReferencedObject, public hkpConstraintListener, public hkpWorldDeletionListener {
public: HK_DECLARE_CLASS_ALLOCATOR(0); hkpCollisionCallbackUtil(); int m_count; CallbackMap m_map;
};
hkpCollisionCallbackUtil::hkpCollisionCallbackUtil() : m_count(1) {}
