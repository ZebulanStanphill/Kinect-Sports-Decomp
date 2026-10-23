#include "havok/hkBase.h"
extern "C" void fn_82D585E0(void *);
struct AgentA {
 char pad[16]; unsigned char a,b; char tail[2];
 AgentA() : a(0),b(0) {}
};
struct AgentB {
 char pad[0x18]; int a,b,c,d,e; char pad2c[4];
 unsigned char x,y,z; char tail[0x1d];
 AgentB() { x=0; y=0; z=0; a=0; b=0; c=0; d=0; e=0; }
};
static HK_FORCE_INLINE void row(hkReferencedObject **out,hkReferencedObject *p) {for(int j=0;j<8;++j){out[j]=p; if(p)p->addReference();}}
class hkpCollisionDispatcher : public hkReferencedObject {
public:
 hkpCollisionDispatcher(void *, hkReferencedObject *);
 void *arg;
 hkReferencedObject *table[8][8];
 int gap;
 unsigned int masks[32];
 char pad190[0x810];
 AgentA agentA[64];
 int agentCount;
 char padea4[0x80c];
 AgentB agentB[16];
 char pad1bb0[0x270];
 unsigned char flags[4];
 hkArrayBase<int> array;
 int a,b,c,d;
};
hkpCollisionDispatcher::hkpCollisionDispatcher(void *value,hkReferencedObject *entry) : arg(value),a(0),b(0),c(0),d(0) {
 flags[0]=0; flags[3]=1; agentCount=0; flags[2]=0;
 hkReferencedObject **dest=&table[0][0]; for(int i=8;i;--i,dest+=8) row(dest,entry);
 unsigned int mask=1;
 for (int i=0;i<32;++i) { masks[i]=mask; mask=(mask<<1)|(mask>>31); }
 fn_82D585E0(this);
 flags[1]=0;
}
