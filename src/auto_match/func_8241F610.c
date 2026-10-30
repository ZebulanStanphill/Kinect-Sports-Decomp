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
extern void fn_823608F8(void *, int, int);

typedef struct { int key; char pad[0x1a8]; } E8241;
typedef struct { E8241 *begin; E8241 *end; } V8241;
typedef struct { void *ctx; int x; V8241 v; int p[2]; unsigned sel; } O8241;
void fn_8241F610(O8241 *o)
{
  unsigned i;
  V8241 *v = &o->v;
  for (i = 0; i < (unsigned)((*v).end - (*v).begin); i++) {
    int f;
    if (i == o->sel || o->v.begin[i].key == o->v.begin[o->sel].key) f = 0; else f = 1;
    fn_823608F8(o->ctx, (*v).begin[i].key, f);
  }
}