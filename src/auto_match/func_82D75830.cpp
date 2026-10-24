#include "havok/hkBase.h"
class hkpCdBody;class hkpContactMgr;
class hkpCollisionAgent : public hkReferencedObject {};
class hkpIterativeLinearCastAgent : public hkpCollisionAgent {};
class hkpGskBaseAgent : public hkpIterativeLinearCastAgent {
public: hkpGskBaseAgent(const hkpCdBody&,const hkpCdBody&,hkpContactMgr*);char data[0x28];
};
class hkpGskfAgent : public hkpGskBaseAgent {
public: HK_FORCE_INLINE hkpGskfAgent(const hkpCdBody&a,const hkpCdBody&b,hkpContactMgr*c):hkpGskBaseAgent(a,b,c){int*p=&value;*p=0;} int value;char pad[0x4c];
};
extern "C" hkpGskBaseAgent *fn_82D75830(const hkpCdBody&a,const hkpCdBody&b,void*,hkpContactMgr*c) {
 if(c) {hkpGskfAgent*p=new hkpGskfAgent(a,b,c);return p;}
 return new hkpGskBaseAgent(a,b,0);
}
