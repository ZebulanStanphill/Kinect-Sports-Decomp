#include "havok/hkBase.h"
class hkpWorld { public:char pad[0x78]; char *broadphase;};
class hkpTreeWorldManager:public hkReferencedObject {public:
 int type;void *tree,*other;
 HK_FORCE_INLINE hkpTreeWorldManager():tree(0),other(0){} virtual ~hkpTreeWorldManager();
};
class hkpEntityListener {public:virtual ~hkpEntityListener(){} static void operator delete(void *p){fn_8265CA20(p);}};
class hkpPhantomListener {public:virtual ~hkpPhantomListener(){} static void operator delete(void *p){fn_8265CA20(p);}};
class hkpIslandActivationListener {public:virtual ~hkpIslandActivationListener(){} static void operator delete(void *p){fn_8265CA20(p);}};
class hkpWorldPostSimulationListener {public:virtual ~hkpWorldPostSimulationListener(){} static void operator delete(void *p){fn_8265CA20(p);}};
extern "C" {
 void *fn_82CFBA90(void *,int,int);void *fn_82D35080(void *,void *,void *,void *);
 void fn_82D83DA8(hkpWorld *,hkpEntityListener *);void fn_82D83E20(hkpWorld *,hkpPhantomListener *);
 void fn_82D83E98(hkpWorld *,hkpIslandActivationListener *);void fn_82D83F88(hkpWorld *,hkpWorldPostSimulationListener *);
}
class hkpAabbTreeWorldManager:public hkpTreeWorldManager,public hkpEntityListener,public hkpPhantomListener,public hkpIslandActivationListener,public hkpWorldPostSimulationListener {
public:
 HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
 hkBool use; hkpWorld *world;int unused;int x,y,unused2;void *block;float timestep;
 hkArray<int> data;hkMap<hkUlong,hkUlong> map;hkBool flag;int a,b;hkBool flag2,flag3;void *random;
 hkpAabbTreeWorldManager(hkpWorld *,int,float);virtual ~hkpAabbTreeWorldManager();
};
hkpAabbTreeWorldManager::hkpAabbTreeWorldManager(hkpWorld *w,int mode,float t):world(w) {
 x=0;y=0;block=hkMemoryRouter::getInstance().heap().blockAlloc(16);
 void *p=hkMemoryRouter::getInstance().heap().blockAlloc(4);
 random=p?fn_82CFBA90(p,0,1000):0;timestep=t;
 type=1;other=0;tree=0;
 if(mode==0)use=true;else if(mode==1)use=false;
 fn_82D83DA8(world,this);fn_82D83E20(world,this);fn_82D83E98(world,this);fn_82D83F88(world,this);
 if(use){char *bp=world->broadphase+0x20;void *p=hkMemoryRouter::getInstance().heap().blockAlloc(128);tree=p?fn_82D35080(p,bp,bp+0x10,bp+0x20):0;}
 flag=false;flag2=false;a=0;b=30;data.m_size=0;*(char *)((char *)this+0x2c)=0;flag3=false;
}
