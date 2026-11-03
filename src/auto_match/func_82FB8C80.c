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
typedef struct Obj { struct ObjVt *vt; } Obj;
typedef struct ObjVt { void *f0; void (*f1)(Obj *); } ObjVt;
typedef struct Node {
  struct NodeVt *vt;
  struct Node *next;
  int f8;
  unsigned short fc;
  unsigned short padE;
  struct Node **begin;
  struct Node **end;
  char pad18[0xe];
  unsigned char f26;
} Node;
typedef struct NodeVt { void *f0; unsigned char (*f1)(Node *); } NodeVt;
typedef struct Cls { char pad[0x1c]; unsigned kind; } Cls;
typedef struct Ent { Cls *c; int pad; Obj *o; } Ent;
typedef struct Stk { int pad4; Ent *top; } Stk;
typedef struct Self {
  int *root;
  Stk stk;
  int padc;
  Node **f10;
  unsigned f14;
  unsigned char f18;
  char pad19[0xf];
  unsigned short f28;
  unsigned short f2a;
} Self;
extern int fn_82FB8030(Self *);
extern int fn_82FB81B8(Self *, Node *);
extern unsigned fn_82FB8420(Self *, Ent *, unsigned char *);
extern unsigned fn_82FB8808(Self *, Ent *, unsigned char *);

int fn_82FB8C80(Self *s)
{
  Node *n;
  Node *nx;
  Ent *e;
  unsigned char r;
  unsigned char fl;
  unsigned idx;
  unsigned kind;
  Ent *e2;
  int k2;
  Stk *st;
  Node **bg;

  s->f10 = 0;
  s->f18 = 1;
  s->f28 |= 0x8000;
  nx = (Node *)((char *)s->root + 0xac);
  for (;;) {
    if (nx == 0) return 2;
    r = nx->vt->f1(nx);
    if (r != 0) break;
    n = nx;
    if ((((int)n->end - (int)n->begin) & ~3) == 0 || n->f26 == 0) {
      n = n->next;
      if (n == 0) return 2;
    } else {
      if (fn_82FB81B8(s, n) != 1) {
        fn_82FB8030(s);
        return 2;
      }
    }
    fl = 0;
    for (;;) {
      idx = 0;
      e = s->stk.top - 1;
      kind = e->c->kind;
      switch (kind) {
      case 3:
      case 2:
        idx = fn_82FB8808(s, e, &fl);
        break;
      case 1:
      case 0:
        idx = fn_82FB8420(s, e, &fl);
        break;
      }
      r = fl;
      if (fl == 0) {
        nx = n->begin[idx & 0xffff];
      } else {
        nx = n->next;
        e2 = s->stk.top - 1;
        k2 = e2->c->kind;
        if ((k2 == 0 || k2 == 2) && e2->o != 0) {
          e2->o->vt->f1(e2->o);
        }
        st = &s->stk;
        st->top = st->top - 1;
      }
      if (r == 0) break;
      if (nx == 0) return 2;
    }
  }
  bg = nx->begin;
  s->f10 = bg;
  s->f18 = bg != 0;
  s->f14 = nx->f8;
  s->f2a = nx->fc;
  return 1;
}
