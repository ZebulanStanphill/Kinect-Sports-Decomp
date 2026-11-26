#include "havok/hkContactPoint.h"
#include "havok/hkpSymmetricAgent.h"
extern "C" unsigned __int64 __mftb();
struct Timer { void *a; unsigned *next; void *b; unsigned *end; };
extern "C" Timer *KeTlsGetValue(unsigned); extern "C" unsigned lbl_8323B4A0;
static HK_FORCE_INLINE void timer(const char *s,const char *next=0) { Timer *t=KeTlsGetValue(lbl_8323B4A0);unsigned *p=t->next;if(p<t->end) {p[0]=(unsigned)s;if(next) p[3]=(unsigned)next;p[1]=(unsigned)__mftb();t->next=p+(next?4:3);} }
// RTTI: hkpConvexListShape -> hkpConvexShape, hkpShapeContainer (+0x14).
class hkpConvexListShape : public hkpConvexShape, public hkpShapeContainer {
public:
    hkReal m_minDistanceToUseConvexHullForGetClosestPoints;   // +0x18
};
class hkpCdPoint {public:hkContactPoint m_contact;const hkpCdBody *m_cdBodyA,*m_cdBodyB;};
class hkpFlagCdBodyPairCollector : public hkpCdBodyPairCollector {public:virtual void addCdBodyPair(const hkpCdBody&,const hkpCdBody&);};
class hkpClosestCdPointCollector : public hkpCdPointCollector {
public:
    hkpClosestCdPointCollector(float d) : hkpCdPointCollector()
    {
        rootA = 0;
        contact.m_separatingNormal.m_quad.vector4_f32[3] = d;
        m_earlyOutDistance = d;
    }
    virtual void addCdPoint(const hkpCdPoint &);
    hkContactPoint contact;
    const hkpCdBody *rootA, *rootB;
    unsigned keyA, keyB;
};
extern "C" void fn_82D74E60(const hkpCdBody&,const hkpCdBody&,const hkpCollisionInput&,hkpCdBodyPairCollector&);
extern "C" void fn_82D75010(const hkpCdBody&,const hkpCdBody&,const hkpCollisionInput&,hkpCdPointCollector&);
extern "C" void fn_82D6BE30(const hkpCdBody&,const hkpCdBody&,const hkpCollisionInput&,hkpCdPointCollector&);
extern "C" void fn_82D5C0E0(const hkpCdBody&a,const hkpCdBody&b,const hkpCollisionInput&i,hkpCdPointCollector&out) {
 timer("LtCvxList","StcheckHull");
 {hkpFlagCdBodyPairCollector flag;fn_82D74E60(a,b,i,flag);
 if(flag.m_earlyOut){timer("Stchildren");hkpSymmetricAgentFlipCollector flip(out);fn_82D6BE30(b,a,i,flip);}
 else {
 float inf=3.40282e+38f;hkpClosestCdPointCollector c(inf);fn_82D75010(a,b,i,c);
 if(c.rootA) {
 const hkpConvexListShape *list=static_cast<const hkpConvexListShape *>(b.getShape());
 if(c.contact.m_separatingNormal.m_quad.vector4_f32[3] > list->m_minDistanceToUseConvexHullForGetClosestPoints) {
 hkpCdPoint p;p.m_cdBodyA=&a;p.m_cdBodyB=&b;
 p.m_contact.m_position=c.contact.m_position;p.m_contact.m_separatingNormal=c.contact.m_separatingNormal;
 out.addCdPoint(p);
 } else {timer("Stchildren");hkpSymmetricAgentFlipCollector flip(out);fn_82D6BE30(b,a,i,flip);}
 }
 }
 }
 timer("lt");
}
