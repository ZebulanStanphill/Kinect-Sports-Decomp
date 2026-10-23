typedef unsigned __int64 U64;
struct Source { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10(); virtual void f11(); virtual void f12(); virtual void f13(); virtual void f14(); virtual void f15(); virtual void f16(); virtual int count(); virtual U64 id(); };
typedef void (*Method)(void *);
struct Empty {};
extern "C" {
extern Method lbl_82024E20[];
extern Method lbl_82024E60[];
void fn_828D5330(void *,Empty *);
void fn_8288C2E0(void *,Empty *);
void fn_828B3948(void *,Empty *,Empty *);
void fn_828B27A8(void *,int,Source **);
}
struct Object { Method *vt; int gap; int a[6]; int b[3]; int parameter; U64 id; bool flag; char padding[7]; int count; int first[4]; int second[4]; };
extern "C" Object *fn_828B52D0(Object *o,int parameter,Source *source) {
 Empty empty; Source *copy;
 o->vt=lbl_82024E20;
 fn_828D5330(o->a,&empty);
 fn_8288C2E0(o->b,&empty);
 o->parameter=parameter;
 o->id=source->id();
 o->flag=false;
 o->vt=lbl_82024E60;
 o->count=source->count();
 fn_828B3948(o->first,&empty,&empty);
 fn_828B3948(o->second,&empty,&empty);
 copy=source;
 fn_828B27A8(o->b,o->b[0],&copy);
 o->vt[6](o);
 return o;
}
