#include "stdext/xmemory.h"
extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *);
void fn_824382F0(void *,void *,void *);
void fn_8243E0D8(void *);
void fn_8265CA20(void *);
}
struct Elem { unsigned char bytes[0x18]; };
struct Vec { Elem *first,*last,*end; };
extern "C" void fn_82438150(Vec *v, unsigned int count) {
 if (0xaaaaaaa < count) fn_82F622A8("vector<T> too long");
 else if ((unsigned int)(v->end-v->first)<count) {
  void *p0=0; unsigned int n=count;
  if(n<=0) n=0;
  else if((unsigned int)-1/sizeof(Elem)<n || (p0=fn_8265C9E0(n*sizeof(Elem)))==0) stdext::bad_alloc(0)._Raise();
  Elem *ptr=(Elem*)p0;
  fn_824382F0(v->first,v->last,ptr);
  unsigned int size=v->last-v->first;
  if(v->first) { for(Elem *p=v->first,*e=v->last;p!=e;++p) fn_8243E0D8(p); fn_8265CA20(v->first); }
  v->first=ptr;v->end=ptr+count;v->last=ptr+size;
 }
}
