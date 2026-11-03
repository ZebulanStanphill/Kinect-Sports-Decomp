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
extern void fn_82A1DD38(void *, void *, unsigned);
typedef struct { char pad[0x692]; unsigned char b[6]; unsigned n; } Obj;
static __forceinline void swap2(unsigned char *p) { unsigned char t = p[0]; p[0] = p[1]; p[1] = t; }
void fn_8245C548(void *src, unsigned len, int unused, Obj *o0)
{
  Obj *o = o0; unsigned n = 5 - o->n;
  if (n >= len) n = len;
  if ((int)n > 0) {
    fn_82A1DD38(&o->b[o->n], src, n);
    o->n = o->n + n;
    swap2(&o->b[0]);
    swap2(&o->b[2]);
  }
}
