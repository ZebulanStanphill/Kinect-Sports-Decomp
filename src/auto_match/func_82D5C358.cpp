#include "havok/hkpSymmetricAgent.h"
extern "C" unsigned __int64 __mftb();
struct Timer { void *a; unsigned *next; void *b; unsigned *end; };
extern "C" Timer *KeTlsGetValue(unsigned); extern "C" unsigned lbl_8323B4A0;
static HK_FORCE_INLINE void timer(const char *s,const char *next=0) { Timer *t=KeTlsGetValue(lbl_8323B4A0);unsigned *p=t->next;if(p<t->end) {p[0]=(unsigned)s;if(next) p[3]=(unsigned)next;p[1]=(unsigned)__mftb();t->next=p+(next?4:3);} }
class hkpFlagCdBodyPairCollector : public hkpCdBodyPairCollector { public: virtual void addCdBodyPair(const hkpCdBody&,const hkpCdBody&); };
extern "C" void fn_82D74E60(const hkpCdBody&,const hkpCdBody&,const hkpCollisionInput&,hkpCdBodyPairCollector&);
extern "C" void fn_82D6C3E0(const hkpCdBody&,const hkpCdBody&,const hkpCollisionInput&,hkpCdBodyPairCollector&);
extern "C" void fn_82D5C358(const hkpCdBody&a,const hkpCdBody&b,const hkpCollisionInput&i,hkpCdBodyPairCollector&out) {
 timer("LtCvxList","StcheckHull");
 { hkpFlagCdBodyPairCollector c;fn_82D74E60(a,b,i,c);
 if(c.m_earlyOut) {timer("Stchildren");hkpSymmetricAgentFlipBodyCollector f(out);fn_82D6C3E0(b,a,i,f);} }
 timer("lt");
}
