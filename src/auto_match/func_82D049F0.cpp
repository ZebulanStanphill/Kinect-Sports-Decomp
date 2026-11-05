struct Alloc_82D049F0 { virtual void f0(); virtual void f4(); virtual void f8(); virtual void *alloc(int *,int); virtual void free(void *,int,int); };
struct Array_82D049F0 { unsigned char *data; int n,cap; };
extern "C" char *fn_82CE5410();
extern "C" Array_82D049F0 *fn_82D049F0(Array_82D049F0 *dst,Array_82D049F0 *src) {
 Alloc_82D049F0 *a=*(Alloc_82D049F0 **)(fn_82CE5410()+12);
 if ((dst->cap & 0x3fffffff)<src->n) {
  if ((dst->cap & (int)0x80000000)==0) a->free(dst->data,dst->cap&0x3fffffff,1);
  int n=src->n; dst->data=(unsigned char *)a->alloc(&n,1); dst->cap=n;
 }
 unsigned char *d=dst->data;
 unsigned char *s;
 int n=src->n;
 dst->n=n; s=src->data;
 for(int i=0;i<n;i++)d[i]=s[i];
 return dst;
}
