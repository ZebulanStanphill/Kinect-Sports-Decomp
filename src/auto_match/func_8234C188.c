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
typedef struct { unsigned px; unsigned rep; } SP_8234C188;
typedef struct { char pad[0x118]; unsigned px1; unsigned rep1; char pad2[0x144 - 0x120]; unsigned px2; unsigned rep2; } Obj_8234C188;
extern SP_8234C188 *fn_8234D618(SP_8234C188 *, void *);
extern void fn_822315A0(unsigned);

void fn_8234C188(Obj_8234C188 *o, void *a)
{
  struct { SP_8234C188 A, B, Z; } L;
  SP_8234C188 *r;
  unsigned px, rep, old;
  r = fn_8234D618(&L.A, a);
  px = 0;
  rep = 0;
  if (&L.Z != r) {
    unsigned *pr = &r->rep;
    rep = *pr;
    *pr = 0;
    px = r->px;
    r->px = 0;
  }
  old = o->rep1;
  o->rep1 = rep;
  o->px1 = px;
  if (old != 0) fn_822315A0(old);
  if (L.A.rep != 0) fn_822315A0(L.A.rep);
  r = fn_8234D618(&L.B, a);
  px = 0;
  rep = 0;
  if (&L.Z != r) {
    unsigned *pr = &r->rep;
    rep = *pr;
    *pr = 0;
    px = r->px;
    r->px = 0;
  }
  old = o->rep2;
  o->rep2 = rep;
  o->px2 = px;
  if (old != 0) fn_822315A0(old);
  if (L.B.rep != 0) fn_822315A0(L.B.rep);
}
