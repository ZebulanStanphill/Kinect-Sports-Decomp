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
typedef struct { char pad[0x28]; unsigned a; unsigned b; } Node_828C2670;
typedef struct { int pad; Node_828C2670 *head; } Cont_828C2670;
typedef struct { Node_828C2670 *p; } It_828C2670;
typedef struct { int pad; Cont_828C2670 *c; } Src_828C2670;
typedef struct { unsigned a; unsigned b; } Out_828C2670;
extern void fn_828C2308(It_828C2670 *, Cont_828C2670 *);
extern void fn_82517978(Out_828C2670 *, unsigned, unsigned, int);

Out_828C2670 *fn_828C2670(Out_828C2670 *out, Src_828C2670 *src)
{
  It_828C2670 it;
  fn_828C2308(&it, src->c);
  if (it.p != src->c->head) {
    out->a = 0;
    out->b = 0;
    fn_82517978(out, it.p->a, it.p->b, 0);
  } else {
    out->a = 0;
    out->b = 0;
  }
  return out;
}
