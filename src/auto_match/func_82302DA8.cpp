#include "stdext/xmemory.h"
inline void *operator new(unsigned int,void *p) throw() { return p; }
extern "C" {
void fn_8265CA20(void *);
__declspec(noreturn) void fn_82F622A8(const char *);
}
typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
 float f[4]; unsigned int u[4];
} Vec;
struct Item;
extern "C" {
 void fn_8223B688(void *,const void *);
 void fn_82230300(void *,int,int);
}
struct Item {
 unsigned char s[28]; unsigned int a; Vec v; float x,y; int z;
 Item(const Item &b) { fn_8223B688(s,b.s); a=b.a; v=b.v; x=b.x; y=b.y; z=b.z; }
};
struct Vector { Item *first,*last,*end; };
static __forceinline Item *allocate(unsigned int count) {
 void *ptr=0;
 if (count<=0) count=0;
 else if (count>0x3ffffffU || (ptr=fn_8265C9E0(count*sizeof(Item)))==0) stdext::bad_alloc(0)._Raise();
 return (Item *)ptr;
}
extern "C" void fn_82302DA8(Vector *self,unsigned int count) {
 if (count>0x3ffffffU) fn_82F622A8("vector<T> too long");
 if ((unsigned int)(self->end-self->first)<count) {
  Item *data=allocate(count);
  Item *src=self->first,*last=self->last,*dst=data;
  for (;src!=last;++src,++dst) {
   if (dst) { fn_8223B688(dst->s,src->s); dst->a=src->a; dst->v=src->v; dst->x=src->x; dst->y=src->y; dst->z=src->z; }
  }
  unsigned int size=self->last-self->first;
  if (self->first) {
   Item *finish=self->last; for (Item *p=self->first;p!=finish;++p) fn_82230300(p,1,0);
   fn_8265CA20(self->first);
  }
  self->first=data; self->end=data+count; self->last=data+size;
 }
}
