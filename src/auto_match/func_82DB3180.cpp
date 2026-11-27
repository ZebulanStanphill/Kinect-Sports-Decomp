#include "havok/hkBase.h"
#include "havok/hkpEntityListener.h"
#include "havok/hkpPhantomListener.h"
#include "havok/hkpWorld.h"
class hkpTreeWorldManager : public hkReferencedObject {
public:
 hkpTreeWorldManager(): b(0),c(0) {}
 int a,b,c;
};
class hkpKdTreeWorldManager : public hkpTreeWorldManager, public hkpEntityListener, public hkpPhantomListener {
public:
 HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
 hkpKdTreeWorldManager(void *w, hkBool b);
 hkpWorld *world; hkBool enabled; hkBool option;
};
hkpKdTreeWorldManager::hkpKdTreeWorldManager(void *w, hkBool b): world(static_cast<hkpWorld *>(w)),enabled(true),option(b) {
 a=0;
 world->addEntityListener(this); world->addPhantomListener(this);
}
