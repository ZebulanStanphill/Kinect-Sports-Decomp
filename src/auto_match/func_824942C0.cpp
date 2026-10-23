#include "stdext/exception.h"
struct Capture {int *self;float *time;int *a,*b;};
struct Impl {void *vtable;Capture capture;};
struct Function {union {double align;char storage[16];};Impl *impl;int pad;};
extern "C" {void *fn_8265C9E0(unsigned int);extern char lbl_821BEE5C[];void fn_824C8258(int,Function *);void fn_82359C18(Function *);}
extern "C" void fn_824942C0(int *self,float time,int a,int b) {
 Capture capture={self,&time,&a,&b};
 Function f;
 Impl *p=(Impl *)fn_8265C9E0(20);
 if(p) {
  p->vtable=lbl_821BEE5C;
  p->capture=capture;
  f.impl=p;
  fn_824C8258(self[5],&f);
  fn_82359C18(&f);
  return;
 }
 stdext::bad_alloc(0)._Raise();
}
