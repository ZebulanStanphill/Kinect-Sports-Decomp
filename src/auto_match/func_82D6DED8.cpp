#include "havok/hkBase.h"
extern "C" unsigned __int64 __mftb();
struct Record { const char *name; unsigned time,pad; };
struct Monitor { int pad; Record *next; int pad2; Record *end; };
extern "C" { Monitor *KeTlsGetValue(unsigned); extern unsigned lbl_8323B4A0; extern float lbl_82134508; }
static HK_FORCE_INLINE void beginList() {
 Monitor *m=KeTlsGetValue(lbl_8323B4A0); Record *p=m->next;
 if(p<m->end) {p->name="LthkpBvAgent"; ((const char **)p)[3]="StcheckBvShape"; p->time=(unsigned)__mftb();m->next=(Record *)((char *)p+16);}
}
static HK_FORCE_INLINE void mark(const char *name) {
 Monitor *m=KeTlsGetValue(lbl_8323B4A0); Record *p=m->next;
 if(p<m->end) {p->name=name;p->time=(unsigned)__mftb();m->next=p+1;}
}
struct Shape { int pad[3]; int type; Shape *bv; int unused; Shape *child; };
struct Body { Shape *shape; unsigned key; void *motion; const Body *parent; };
struct Input;
class Agent { public: virtual ~Agent(); virtual void dummy1(); virtual void dummy2();
 virtual void penetrations(const Body &,const Body &,const Input &,void *);
 virtual void closest(const Body &,const Body &,const Input &,void *);
 virtual void linear(const Body &,const Body &,const Input &,void *,void *);
 virtual void process(const Body &,const Body &,const Input &,void *);
 virtual void cleanup(void *);
};
struct Entry { Agent *(*create)(const Body &,const Body &,const Input &,void *); int pad[4]; };
struct Dispatcher { char pad[0x1a0]; unsigned char table[32][32]; unsigned char tablePredictive[32][32]; Entry entries[32]; };
struct Input { Dispatcher *dispatcher; int pad[4]; int predictive; };
struct BvAgent { void *vptr; int pad; void *mgr; Agent *bv; Agent *child; };
class hkpCdBodyPairCollector { public: hkpCdBodyPairCollector(){} virtual void add(const Body &,const Body &); virtual ~hkpCdBodyPairCollector(){} hkBool early; };
class hkpFlagCdBodyPairCollector:public hkpCdBodyPairCollector {public:hkpFlagCdBodyPairCollector(){early=false;}virtual void add(const Body &,const Body &);};
class hkpCdPointCollector { public: hkpCdPointCollector():distance(lbl_82134508){} virtual void add(void *);virtual ~hkpCdPointCollector(){} float distance; };
class __declspec(align(16)) hkpSimpleClosestContactCollector: public hkpCdPointCollector {public: hkpSimpleClosestContactCollector():hit(false),fraction(lbl_82134508){}virtual void add(void *);bool hit;char pad[35];float fraction;};
static HK_FORCE_INLINE Agent *createChild(const Body &a,const Body &b,const Input &input,void *mgr) {
 int typeA=a.shape->type;int typeB=b.shape->type;
 Dispatcher *d=input.dispatcher;
 unsigned char (*table)[32]=input.predictive ? d->tablePredictive : d->table;
 int agentType=table[typeA][typeB];
 return d->entries[agentType].create(a,b,input,mgr);
}
extern "C" void fn_82D6DED8(BvAgent *self,const Body &a,const Body &b,const Input &input,void *arg) {
 beginList();
 Body child; child.parent=&a; child.motion=a.motion; Shape *shape=a.shape; child.shape=shape->bv; child.key=~0u;
 { hkpFlagCdBodyPairCollector collector; self->bv->penetrations(child,b,input,&collector);
 if((bool)collector.early) {
 mark("Stchild"); child.shape=shape->child; child.key=0;
 if(!self->child) self->child=createChild(child,b,input,self->mgr);
 self->child->process(child,b,input,arg);
 } else if(self->child) {self->child->cleanup(((void **)arg)[1]);self->child=0;}
 mark("lt");
 }
}
