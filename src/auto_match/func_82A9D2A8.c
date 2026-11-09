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


typedef struct { int begin; unsigned count; } Vec_82A9D2A8;
typedef struct { int pad[0x11]; Vec_82A9D2A8 *v; } Obj_82A9D2A8;
typedef struct { int a; int b; unsigned w; unsigned flags; } Ent_82A9D2A8;

void fn_82A9D2A8(Obj_82A9D2A8 *o, unsigned *tab)
{
  int p;
  unsigned end;

  p = o->v->begin;
  end = o->v->count * 0x10 + o->v->begin;
  for (; p < end; p += 0x10) {
    Ent_82A9D2A8 *e = (Ent_82A9D2A8 *)p;
    if ((e->flags & 0xfe00) == 0xe400) {
      e->w = ((tab[(e->w & 0xfc) / 4] & 0x3f) << 2) | (e->w & 3);
    }
    end = o->v->count * 0x10 + o->v->begin;
  }
}
