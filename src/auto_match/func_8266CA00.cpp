#include "stdext/exception.h"
extern "C" { void *fn_82F64C00(unsigned int, const void *); extern char lbl_8326332E[]; }
struct Result { void *p; int count; };
extern "C" Result *fn_8266CA00(Result *out, int n) {
 if (n<0) n=0;
 else if ((unsigned int)n>0x15555555) stdext::bad_alloc(0)._Raise();
 void *p=0;
 for (;n>0;n/=2) { p=fn_82F64C00(n*12,lbl_8326332E);if (p) break; }
 out->p=p;out->count=n;return out;
}
