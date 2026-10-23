#include "havok/hkBase.h"
class hkpConstraintListener { public: static void operator delete(void *p) {fn_8265CA20(p);} virtual ~hkpConstraintListener() {} };
class hkpWorldDeletionListener { public: static void operator delete(void *p) {fn_8265CA20(p);} virtual ~hkpWorldDeletionListener() {} };
extern "C" void fn_82DC8A30(void *);
class CallbackMap { public: CallbackMap() { fn_82DC8A30(this); } int data[4]; };
class hkpCollisionCallbackUtil : public hkReferencedObject, public hkpConstraintListener, public hkpWorldDeletionListener {
public: HK_DECLARE_CLASS_ALLOCATOR(0); hkpCollisionCallbackUtil(); int m_count; CallbackMap m_map;
};
hkpCollisionCallbackUtil::hkpCollisionCallbackUtil() : m_count(1) {}
