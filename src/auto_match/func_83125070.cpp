#include "stdext/exception.h"
struct Proxy { void *container; Proxy *next; };
struct Obj { Proxy *proxy; int a,b,c,d; };
extern "C" { void *fn_8265C9E0(unsigned int); void fn_8313F588(); int atexit(void (*)()); extern Obj lbl_832967A0; }
extern "C" void fn_83125070() {
 Proxy *p=(Proxy *)fn_8265C9E0(8);
 if (p) {
  Proxy empty={0,0};
  lbl_832967A0.proxy=p;
  *p=empty;
  lbl_832967A0.proxy->container=&lbl_832967A0;
  lbl_832967A0.a=0;lbl_832967A0.b=0;lbl_832967A0.c=0;lbl_832967A0.d=0;
  atexit(fn_8313F588);return;
 }
 stdext::bad_alloc(0)._Raise();
}
