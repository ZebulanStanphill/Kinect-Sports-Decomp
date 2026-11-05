struct Alloc_82D2CAF8 { virtual void f0(); virtual void f4(); virtual void f8(); virtual void *alloc(int *,int); virtual void free(void *,int,int); };
struct Array_82D2CAF8 { int *data; int n,cap; };
extern "C" char *fn_82CE5410();
extern "C" Array_82D2CAF8 *fn_82D2CAF8(Array_82D2CAF8 *dst,Array_82D2CAF8 *src) {
 Alloc_82D2CAF8 *a=*(Alloc_82D2CAF8 **)(fn_82CE5410()+16);
 if ((dst->cap & 0x3fffffff)<src->n) {
  if ((dst->cap & (int)0x80000000)==0) a->free(dst->data,dst->cap&0x3fffffff,4);
  int n=src->n; dst->data=(int *)a->alloc(&n,4); dst->cap=n;
 }
 int *d=dst->data;
 int *s;
 int n=src->n;
 dst->n=n; s=src->data;
 for(int i=0;i<n;i++)d[i]=s[i];
 return dst;
}
