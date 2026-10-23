#include "stdext/xmemory.h"
struct Obj;
struct Impl { virtual Impl *copy(void *); virtual void x1(); virtual void x2(); virtual void destroy(bool); };
struct Function { char data[16]; Impl *impl; char pad[12]; };
struct Host { virtual void x0(); virtual void x1(); virtual void x2(); virtual char *get(); };
struct Obj { unsigned vt; char pad[0x64]; unsigned vt2; char pad2[0x2c]; int n; char tail[4]; };
struct Self { char pad[0x3ec]; Host *host; };
struct PM { void (*fn)(); int off; };
struct Binder { PM method; Obj *obj; char pad[20]; };
struct Box { void *vt; int pad; Binder f; };
extern "C" { void fn_8236D8F8(Obj *,void *,Self *); void fn_82404028();
void fn_82359C18(Function *); void *memcpy(void *, const void *, unsigned int);
extern char lbl_821B7C00[],lbl_821B7C50[],lbl_821B2CEC[]; }
static Obj *Construct(Obj *obj,void *arg,Self *self) {
fn_8236D8F8(obj,arg,self);obj->vt=(unsigned)lbl_821B7C00;unsigned *base=(unsigned*)((char*)obj+0x68);*base=(unsigned)lbl_821B7C50;obj->n=0;return obj;
}
extern "C" Obj *fn_82364E60(Self *self, void *arg) {
 Obj *obj=(Obj*)fn_8265C9E0(0xa0);
 Obj *result=obj?Construct(obj,arg,self):0;
 PM pm={fn_82404028,0}; Binder b; b.method=pm; b.obj=result;
 Function f; Box *box=std::_Allocate(1,(Box*)0);
 box->vt=lbl_821B2CEC; box->f=b; f.impl=(Impl*)box;
 Function *dst=(Function*)(self->host->get()+0x28);
 if(dst!=&f) {
  if(dst->impl) {dst->impl->destroy(dst->impl!=(Impl*)dst);dst->impl=0;}
  if(f.impl==0) dst->impl=0;
  else {if(f.impl==(Impl*)&f)dst->impl=f.impl->copy(dst);else dst->impl=f.impl->copy(0);}
 }
 fn_82359C18(&f); return result;
}
