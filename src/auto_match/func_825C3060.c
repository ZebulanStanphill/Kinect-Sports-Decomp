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
typedef struct { char pad[0x3c]; int m3c; unsigned flags; } Ent;
typedef struct { char pad[0x48]; void *m48; int m4c; int m50; int m54; } Src;
typedef struct { char pad[0x230]; char sub[1]; } Ctx;
extern Ent *fn_825A2C00(Ctx *, void *, void *, short, int, int);
extern void fn_825A2D10(Ctx *, Ent *);
extern void fn_8251E530(void *, Ent *);

int fn_825C3060(Src *s, int a, Ctx *c)
{
  int h;
  Ent *e;
  unsigned f;
  void *sub;
  int m54;
  if (s->m4c != 0) h = s->m50; else h = -1;
  sub = c->sub;
  m54 = s->m54;
  if (s->m48 == 0) return 0;
  e = fn_825A2C00(c, sub, &s->m48, h, m54, a);
  if (e == 0) return 0;
  f = e->flags;
  if ((f & 8) == 0 || (f & 1) != 0 || (f & 2) != 0) return e->m3c;
  fn_825A2D10(c, e);
  fn_8251E530(sub, e);
  return 0;
}
