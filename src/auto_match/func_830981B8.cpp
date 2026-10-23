#include "havok/hkBase.h"
extern "C" unsigned __int64 __mftb();
struct Record { const char *name; unsigned time,pad; };
struct Monitor { int pad; Record *next; int pad2; Record *end; };
extern "C" { Monitor *KeTlsGetValue(unsigned); extern unsigned lbl_8323B4A0; void fn_83097440(void *, void *, int); void fn_830855B0(void *, int,int,int); int fn_82CE8E78(void *,void *,void *,int); }
struct Build { char pad[0x50]; int *data; int a,b,size; };
class Setup : public hkBaseObject { public: int data[3]; };
static HK_FORCE_INLINE void mark(const char *name) {
 Monitor *m=KeTlsGetValue(lbl_8323B4A0);
 Record *p=m->next;
 if(p<m->end) {p->name=name;p->time=(unsigned)__mftb();m->next=p+1;}
}
extern "C" int fn_830981B8(void *arg, Build *b) {
 mark("TtCpuKdTreeBuildSetup");
 int result;
 {
  hkArray<int> array(b->data,b->size,b->size);
  union { void *ptr; char bytes[16]; } u;
  fn_83097440(&u,&array,0);
  fn_830855B0(&u,b->b,b->size,b->a);
  result=fn_82CE8E78(arg,b,b,0);
  ((Setup *)&u)->Setup::~Setup();
 }
 mark("Et");
 return result;
}
