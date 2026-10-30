typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
typedef struct { void *ptr; void *rc; } SP_82359BB0;
typedef struct { SP_82359BB0 *first; SP_82359BB0 *last; SP_82359BB0 *end; } Vec_82359BB0;
extern void fn_822315A0(void *);
extern void fn_8265CA20(void *);

void fn_82359BB0(Vec_82359BB0 *v)
{
  SP_82359BB0 *p, *last;
  if (v->first != 0) {
    last = v->last;
    for (p = v->first; p != last; p++) {
      if (p->rc != 0) fn_822315A0(p->rc);
    }
    fn_8265CA20(v->first);
  }
  v->first = 0;
  v->last = 0;
  v->end = 0;
}
