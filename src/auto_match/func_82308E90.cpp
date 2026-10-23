#include "stdext/exception.h"
struct Member { union { struct {void (*fn)();int adjust;}; unsigned __int64 bits; }; };
struct Bytes { char data[56]; };
struct Impl { void *vtable;int pad; Bytes f; };
struct Base {virtual void a();virtual void b();virtual void c();virtual void destroy(bool);};
struct Function {char data[16];Base *impl;};
struct Owner { char pad[0x114]; int value; };
struct Obj {
 void *vtable; int f4; int value; Owner *owner; int arg;
 char pad14[0x60-0x14]; unsigned char flag; char pad61[0xd8-0x61];
 Function cb; char padec[0x120-0xec]; int x120;
};
struct Capture { Member method; Obj *self; char rest[56-12]; };
extern "C" {void *fn_8265C9E0(unsigned int);void fn_8230A4F8();extern char lbl_821AF330[],lbl_821AF354[];}
extern "C" Obj *fn_82308E90(Obj *self,Owner *other,int arg,int extra) {
 Member m;m.fn=fn_8230A4F8;m.adjust=0;
 int value=other->value;
 self->f4=extra;self->owner=other;
 self->arg=arg;
 self->vtable=lbl_821AF330;
 self->value=value;
 self->flag=0;
 { Function *g=&self->cb; g->impl=0; }
 self->x120=0;
 Capture capture;capture.method=m;capture.self=self;
 Function *f=&self->cb;
 Base *previous=f->impl;
 if(previous) { previous->destroy(previous!=(Base *)f);f->impl=0; }
 Impl *p=(Impl *)fn_8265C9E0(56+8);
 if(p) {
  p->vtable=lbl_821AF354;p->f=*(Bytes *)&capture;
  f->impl=(Base *)p;
  return self;
 }
 stdext::bad_alloc(0)._Raise();
}
