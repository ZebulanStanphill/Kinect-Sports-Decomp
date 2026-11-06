typedef struct { void *vt; unsigned context, a,b,c,refs; } Obj_82E494A0;
extern void *fn_82E23B70(unsigned);
extern char lbl_82153A68[];
static __forceinline Obj_82E494A0 *construct_82E494A0(Obj_82E494A0 *o) {
 o->context=0; o->a=0; o->b=0; o->c=0;
 o->vt=lbl_82153A68; o->refs=1;
 return o;
}
static __forceinline int init_82E494A0(Obj_82E494A0 *o, unsigned a, unsigned ctx) {
 int result=0;
 if(!a) result=0x80004003;
 else { o->a=a; o->b=a; o->context=ctx; o->c=a; }
 return result;
}
int fn_82E494A0(Obj_82E494A0 **out,unsigned a,unsigned ctx) {
 Obj_82E494A0 *o;
 if(!out) return 0x80070057;
 o=fn_82E23B70(0x18);
 o=o ? construct_82E494A0(o):0;
 if(!o) return 0x8007000e;
 *out=o;
 return init_82E494A0(o,a,ctx);
}
