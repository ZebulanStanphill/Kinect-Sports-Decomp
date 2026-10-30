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
typedef struct Sub_822DE050 {
  char pad0[0x1b8];
  int f1b8;
  char pad1bc[0x209c - 0x1bc];
  int f209c;
} Sub_822DE050;
typedef struct VT_822DE050 {
  char pad[200];
  void (*fc8)(void *);
} VT_822DE050;
typedef struct Obj10_822DE050 {
  VT_822DE050 *vt;
  char pad[0x184 - 4];
} Obj10_822DE050;
typedef struct Obj14_822DE050 {
  char pad0[0x1e4];
  int f1e4;
  char pad1e8[0x24c - 0x1e8];
  int f24c;
  char pad250[0x340 - 0x250];
  int f340;
} Obj14_822DE050;
typedef struct Obj_822DE050 {
  char pad0[0x10];
  Obj10_822DE050 *f10;
  Obj14_822DE050 *f14;
  char pad18[0x30 - 0x18];
  int f30;
  char pad34[0x54 - 0x34];
  int f54;
  char pad58[0x94 - 0x58];
  int f94;
  char pad98[0xa0 - 0x98];
  int fa0;
  char pada4[0xb4 - 0xa4];
  char fb4[0xc8 - 0xb4];
  int fc8;
} Obj_822DE050;
typedef struct Ref_822DE050 {
  struct { char pad[0xac]; int fac; } *p;
  void *rc;
} Ref_822DE050;
typedef struct Vec_822DE050 {
  Sub_822DE050 **first;
  Sub_822DE050 **last;
  void *end;
  void *pad;
} Vec_822DE050;
extern void fn_822315A0(void *);
extern void fn_822CFF20(Vec_822DE050 *, void *);
extern void fn_82359BB0(Vec_822DE050 *);
extern void fn_824D2AE8(Ref_822DE050 *, void *);

static int ne(Sub_822DE050 **a, Sub_822DE050 **b)
{
  if (a != b) return 1;
  return 0;
}

void fn_822DE050(Obj_822DE050 *o)
{
  Ref_822DE050 r;
  Vec_822DE050 v;
  Sub_822DE050 **it;
  Sub_822DE050 **end;

  o->fa0 = 0x18;
  fn_824D2AE8(&r, o->fb4);
  if (r.p != 0) {
    r.p->fac = 1;
  }
  if (r.rc != 0) {
    fn_822315A0(r.rc);
  }
  o->f30 = 0x18;
  o->f54 = 0;
  o->f94 = 0;
  o->f14->f24c = 0;
  if (o->fc8 != 0) {
    o->f10->vt->fc8(o->f10);
    o->fc8 = 0;
  }
  o->f14->f1e4 = 0;
  if (o->f14->f340 != 0) {
    fn_822CFF20(&v, (char *)o->f10 + 0x184);
    for (it = v.first, end = v.last; ne(it, end); it += 2) {
      Sub_822DE050 *s = *it;
      s->f1b8 = 1;
      s->f209c = 0;
    }
    fn_82359BB0(&v);
  }
}
