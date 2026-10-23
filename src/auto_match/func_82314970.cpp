#include "stdext/exception.h"
struct Member { union { struct {void (*fn)();int adjust;}; unsigned __int64 bits; }; };
struct Bytes { char data[48]; };
struct Impl { void *vtable;int pad; Bytes f; };
struct Base {virtual void a();virtual void b();virtual void c();virtual void destroy(bool);};
struct Function {char data[16];Base *impl;};
struct Owner { char pad[0x114]; int value; };
struct Obj {
 void *vtable; int f4; int value; Owner *owner; int arg; int f14;
 char pad18[0x20-0x18];
 Function cb; char pad34[4]; float f38; int f3c; int f40; float f44;
};
struct Capture { Member method; Obj *self; char rest[48-12]; };
extern "C" {void *fn_8265C9E0(unsigned int);void fn_82315140();extern char lbl_821AF698[],lbl_821AF6B8[];}
static const float lbl_821CC160 = 1.0f;
extern "C" Obj *fn_82314970(Obj *self,Owner *other,int arg) {
 Member m;m.fn=fn_82315140;m.adjust=0;
 int value=other->value;
 self->owner=other;self->arg=arg;
 self->value=value;
 self->vtable=lbl_821AF698;
 self->f4=17;
 self->f14=0;
 { Function *g=&self->cb; g->impl=0; }
 self->f38=lbl_821CC160;
 self->f44=lbl_821CC160;
 self->f3c=0;
 self->f40=2;
 Capture capture;capture.method=m;capture.self=self;
 Function *f=&self->cb;
 Base *previous=f->impl;
 if(previous) { previous->destroy(previous!=(Base *)f);f->impl=0; }
 Impl *p=(Impl *)fn_8265C9E0(48+8);
 if(p) {
  p->vtable=lbl_821AF6B8;p->f=*(Bytes *)&capture;
  f->impl=(Base *)p;
  return self;
 }
 stdext::bad_alloc(0)._Raise();
}
