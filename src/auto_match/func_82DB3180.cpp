#include "havok/hkBase.h"
#include "havok/hkpEntityListener.h"
class hkpPhantomListener { public: virtual ~hkpPhantomListener() {} };
class hkpTreeWorldManager : public hkReferencedObject {
public:
 hkpTreeWorldManager(): b(0),c(0) {}
 int a,b,c;
};
extern "C" { void fn_82D83DA8(void *,hkpEntityListener *); void fn_82D83E20(void *,hkpPhantomListener *); }
class hkpKdTreeWorldManager : public hkpTreeWorldManager, public hkpEntityListener, public hkpPhantomListener {
public:
 HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
 hkpKdTreeWorldManager(void *w, hkBool b);
 void *world; hkBool enabled; hkBool option;
};
hkpKdTreeWorldManager::hkpKdTreeWorldManager(void *w, hkBool b): world(w),enabled(true),option(b) {
 a=0;
 fn_82D83DA8(world,this); fn_82D83E20(world,this);
}
