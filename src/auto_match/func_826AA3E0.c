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
typedef struct Ctl_826AA3E0 { int pad[2]; int refs; } Ctl_826AA3E0;
typedef struct Elem_826AA3E0 { int a; Ctl_826AA3E0 *c; } Elem_826AA3E0;
typedef struct Vec_826AA3E0 { Elem_826AA3E0 *data; unsigned size; unsigned cap; int a; Ctl_826AA3E0 *c; } Vec_826AA3E0;
extern void fn_826A9BC8(Vec_826AA3E0 *, Vec_826AA3E0 *, unsigned);

void fn_826AA3E0(Vec_826AA3E0 *v, unsigned n)
{
  unsigned old = v->size;
  fn_826A9BC8(v, v, n);
  if (n > old) {
    Elem_826AA3E0 *p = v->data + old;
    unsigned cnt = n - old;
    unsigned i = 0;
    if (cnt != 0) {
      do {
        if (p != 0) {
          p->a = v->a;
          p->c = v->c;
          p->c->refs = p->c->refs + 1;
        }
        i++;
        p++;
      } while (i < cnt);
    }
  }
}
