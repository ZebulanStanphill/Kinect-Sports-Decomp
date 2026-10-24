#include "havok/hkBase.h"
extern "C" unsigned __int64 __mftb();
struct Timer { void *a; unsigned *next; void *b; unsigned *end; };
extern "C" Timer *KeTlsGetValue(unsigned); extern "C" unsigned lbl_8323B4A0;
static HK_FORCE_INLINE void timer(const char *s,const char *next=0) { Timer *t=KeTlsGetValue(lbl_8323B4A0);unsigned *p=t->next;if(p<t->end) {p[0]=(unsigned)s;if(next) p[3]=(unsigned)next;p[1]=(unsigned)__mftb();t->next=p+(next?4:3);} }
typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {float f[4];unsigned int u[4];} __vector4;
class hkVector4 {public:__vector4 m_quad;HK_FORCE_INLINE void operator=(const hkVector4 &v){m_quad=v.m_quad;}};
class hkpCdBody {public:char *shape;char pad[12];}; struct hkpCollisionInput;
struct Contact {hkVector4 position,normal;};
struct hkpCdPoint {Contact contact;const hkpCdBody *a,*b;};
class hkpCdBodyPairCollector {public:hkpCdBodyPairCollector():early(false){} virtual ~hkpCdBodyPairCollector(){} virtual void addCdBodyPair(const hkpCdBody&,const hkpCdBody&);hkBool early;};
class hkpFlagCdBodyPairCollector : public hkpCdBodyPairCollector {public:virtual void addCdBodyPair(const hkpCdBody&,const hkpCdBody&);};
extern "C" const float lbl_82134508;
class hkpCdPointCollector {public:hkpCdPointCollector():distance(lbl_82134508){}hkpCdPointCollector(float d):distance(d){}virtual ~hkpCdPointCollector(){} virtual void addCdPoint(const hkpCdPoint&);float distance;};
class hkpSymmetricAgentFlipCollector : public hkpCdPointCollector {public:hkpSymmetricAgentFlipCollector(hkpCdPointCollector &c):collector(c){}hkpSymmetricAgentFlipCollector(hkpCdPointCollector&c,float d):hkpCdPointCollector(d),collector(c){}virtual void addCdPoint(const hkpCdPoint&);hkpCdPointCollector &collector;};
class hkpClosestCdPointCollector : public hkpCdPointCollector {public:hkpClosestCdPointCollector(float d):hkpCdPointCollector(){rootA=0;contact.normal.m_quad.f[3]=d;distance=d;}virtual void addCdPoint(const hkpCdPoint&);Contact contact;const hkpCdBody *rootA,*rootB;unsigned keyA,keyB;};
extern "C" void fn_82D74E60(const hkpCdBody&,const hkpCdBody&,const hkpCollisionInput&,hkpCdBodyPairCollector&);
extern "C" void fn_82D75010(const hkpCdBody&,const hkpCdBody&,const hkpCollisionInput&,hkpCdPointCollector&);
extern "C" void fn_82D6BE30(const hkpCdBody&,const hkpCdBody&,const hkpCollisionInput&,hkpCdPointCollector&);
extern "C" void fn_82D5C0E0(const hkpCdBody&a,const hkpCdBody&b,const hkpCollisionInput&i,hkpCdPointCollector&out) {
 timer("LtCvxList","StcheckHull");
 {hkpFlagCdBodyPairCollector flag;fn_82D74E60(a,b,i,flag);
 if(flag.early){timer("Stchildren");hkpSymmetricAgentFlipCollector flip(out);fn_82D6BE30(b,a,i,flip);}
 else {
 float inf=lbl_82134508;hkpClosestCdPointCollector c(inf);fn_82D75010(a,b,i,c);
 if(c.rootA) {
 if(c.contact.normal.m_quad.f[3] > *(float *)(b.shape+0x18)) {
 hkpCdPoint p;p.a=&a;p.b=&b;p.contact.position=c.contact.position;p.contact.normal=c.contact.normal;out.addCdPoint(p);
 } else {timer("Stchildren");hkpSymmetricAgentFlipCollector flip(out,inf);fn_82D6BE30(b,a,i,flip);}
 }
 }
 }
 timer("lt");
}
