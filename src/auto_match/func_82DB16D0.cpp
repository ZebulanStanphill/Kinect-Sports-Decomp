#include "havok/hkBase.h"
#include "havok/hkpEntityListener.h"
#include "havok/hkpWorldPostSimulationListener.h"
#include "havok/hkpIslandActivationListener.h"
#include "havok/hkpPhantomListener.h"
#include "havok/hkAabbTree.h"
#include "havok/hkpWorld.h"
#include "havok/hkpProcessCollisionInput.h"
class hkpTreeWorldManager:public hkReferencedObject {public:
 int type;void *tree,*other;
 HK_FORCE_INLINE hkpTreeWorldManager():tree(0),other(0){} virtual ~hkpTreeWorldManager();
};
extern "C" {
 void *fn_82CFBA90(void *,int,int);
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
 world->addEntityListener(this);world->addPhantomListener(this);world->addIslandActivationListener(this);world->addWorldPostSimulationListener(this);
 if(use){const hkpCollisionInput::Aabb32Info *bp=&world->m_collisionInput->m_aabb32Info;tree=new hkAabbTree<hkAabbTreeData::hkAabbTreeAabb16,hkUint16>(bp->m_bitOffsetLow,bp->m_bitOffsetHigh,bp->m_bitScale);}
 flag=false;flag2=false;a=0;b=30;data.m_size=0;*(char *)((char *)this+0x2c)=0;flag3=false;
}
