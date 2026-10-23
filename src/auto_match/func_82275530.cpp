#include "stdext/exception.h"
extern "C" { void *fn_82F64C00(unsigned int, const void *); extern char lbl_8326332E[]; }
struct Buffer { void *first,*last,*end; int count; };
struct Obj { int pad[4]; Buffer *buffer; };
extern "C" int fn_82275530(Obj *o) {
 if (!o->buffer->first) {
  int n=o->buffer->count;
  if (n>0) { n=o->buffer->count; 
 if (n<0) n=0;
 else if ((unsigned int)n>0x1fffffff) stdext::bad_alloc(0)._Raise();
 void *p=0;
 for (;n>0;n/=2) { p=fn_82F64C00(n*8,lbl_8326332E);if (p) break; }


o->buffer->first=p;o->buffer->last=p;o->buffer->end=p;o->buffer->count=n; }
 }
 return o->buffer->count;
}
