extern "C" { unsigned fn_8265C940(unsigned,unsigned); void *fn_82A3FF60(void*,unsigned,unsigned,int); void fn_82A48578(void*,void*); extern char lbl_83219D50[]; }
struct Pair_82A48CD8 { unsigned a,b;
 __forceinline Pair_82A48CD8(unsigned first,unsigned second) { b=second; a=first; }
 static __forceinline void *operator new(unsigned n,void *heap,unsigned tag,int flag) { return fn_82A3FF60(heap,n,tag,flag); }
};
extern "C" unsigned fn_82A48CD8(char *self,unsigned n) {
 unsigned v=fn_8265C940(n,*(unsigned *)(self+0xf8));
 *(unsigned *)(self+0xfc)=v;
 if(v!=0) {
  Pair_82A48CD8 *p=new (lbl_83219D50,0x20970000u,0) Pair_82A48CD8(*(unsigned *)(self+0xfc),n);
  if(p!=0) { fn_82A48578(self+0x7c,p); *(unsigned *)(self+0x100)=n; *(unsigned *)(self+0x104)=n; return 0; }
 }
 return 0x8007000e;
}