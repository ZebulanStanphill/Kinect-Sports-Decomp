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

typedef struct Out { int a, b; unsigned int c; int pad[2]; unsigned char d; } Out;
typedef struct Src { int pad[2]; int a; int p2[2]; unsigned int u; } Src;

void fn_8268F7C8(Src *s, Out *o)
{
  unsigned int u;
  o->a = s->a;
  o->b = 0;
  u = s->u;
  o->d = 1;
  o->c = u > 0x1000 ? u : 0;
}
