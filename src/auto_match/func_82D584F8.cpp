#include "havok/hkBase.h"
typedef __declspec(passinreg) union __vector4 {float f[4];unsigned int u[4];} __vector4;
extern "C" __vector4 __vxor(__vector4,__vector4);
struct __declspec(align(16)) hkVector4 {__vector4 q;};
extern "C" {extern const float lbl_82134508;extern const hkVector4 lbl_8209AB20;}
struct Input {unsigned __int64 prefix[10];hkVector4 path;unsigned __int64 suffix[2];};
class hkpCdPointCollector {public:virtual void addCdPoint(const void*);float early;};
class hkpSymmetricAgentFlipCastCollector:public hkpCdPointCollector {public:
 HK_FORCE_INLINE hkpSymmetricAgentFlipCastCollector(const hkVector4 &v,void *target){early=lbl_82134508;path.q=v.q;collector=target;}
 hkVector4 path;void *collector;
};
extern "C" void fn_82D57B60(void*,void*,Input*,hkpCdPointCollector*,hkpCdPointCollector*);
extern "C" void fn_82D584F8(void *self,void *a,void *b,const Input *input,void *collector,void *start){
 Input copy=*input;
 copy.path.q=__vxor(input->path.q,lbl_8209AB20.q);
 hkpSymmetricAgentFlipCastCollector flipped(input->path,collector);

 if(start){hkpSymmetricAgentFlipCastCollector flippedStart(input->path,start);fn_82D57B60(b,a,&copy,&flipped,&flippedStart);return;}
 fn_82D57B60(b,a,&copy,&flipped,0);
}
