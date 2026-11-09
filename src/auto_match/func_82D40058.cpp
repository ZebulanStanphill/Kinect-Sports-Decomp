typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
struct Alloc_82D40058 { virtual void f0(); virtual void f4(); virtual void f8(); virtual void *alloc(int *,int); virtual void free(void *,int,int); };
struct Array_82D40058 { __vector4 *data; int n,cap; };
struct Obj_82D40058 { char pad0[0x54]; Array_82D40058 arr; void *x60; };
extern "C" char *fn_82CE5410();
extern "C" void fn_82D3FC68(Obj_82D40058 *self);
static __forceinline Array_82D40058 *assign_82D40058(Array_82D40058 *dst, const Array_82D40058 *src) {
 Alloc_82D40058 *a=*(Alloc_82D40058 **)(fn_82CE5410()+16);
 if ((dst->cap & 0x3fffffff)<src->n) {
  if ((dst->cap & (int)0x80000000)==0) a->free(dst->data,dst->cap&0x3fffffff,16);
  int n=src->n; dst->data=(__vector4 *)a->alloc(&n,16); dst->cap=n;
 }
 __vector4 *d=dst->data;
 __vector4 *s;
 int n=src->n;
 dst->n=n; s=src->data;
 for(int i=0;i<n;i++)d[i]=s[i];
 return dst;
}
extern "C" void fn_82D40058(Obj_82D40058 *self, const Array_82D40058 *src) {
 assign_82D40058(&self->arr, src);
 if (self->x60 != 0) fn_82D3FC68(self);
}
