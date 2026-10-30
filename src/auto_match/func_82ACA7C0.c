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
typedef struct Flags_82ACA7C0 {
  unsigned int a : 1;
  unsigned int b : 1;
  unsigned int c : 2;
  unsigned int m : 3;
  unsigned int rest : 25;
} Flags_82ACA7C0;
typedef struct Node_82ACA7C0 {
  Flags_82ACA7C0 fl;
  unsigned int pad4;
  struct Node_82ACA7C0 *next;
} Node_82ACA7C0;
typedef struct Obj_82ACA7C0 {
  int pad0;
  Node_82ACA7C0 *head;
  unsigned int f8;
  char padc[0x14 - 0xc];
  unsigned int f14;
} Obj_82ACA7C0;
extern unsigned char fn_82ACA548(Obj_82ACA7C0 *);
extern unsigned char fn_82ACA638(Obj_82ACA7C0 *);
extern unsigned char lbl_820DBD58[];

static int notNull(Node_82ACA7C0 *p)
{
  if (p) return 1;
  return 0;
}

#define W(n) (*(unsigned int *)&(n)->fl)

void fn_82ACA7C0(void *unused, Obj_82ACA7C0 *o)
{
  Node_82ACA7C0 *head = o->head;
  Node_82ACA7C0 *n;
  unsigned char found;
  unsigned int v, a, b, f, x;
  unsigned char ok;

  for (n = head; notNull(n); n = n->next) {
    if (n->fl.m != 0) {
      if ((unsigned char)n->fl.b != 0) { found = 1; goto have; }
      break;
    }
  }
  found = 0;
have:
  if (!found || fn_82ACA548(o) != 0) goto end;
  v = 0xe4;
  if (fn_82ACA638(o) == 0) {
    x = (o->f8 >> 7) & 0x7f;
    ok = !(x < 0x20 || x > 0x52);
    if (ok) goto L858;
  } else {
L858:
    f = o->f8;
    a = (f >> 1) & 0xf;
    b = (1 << ((f >> 14) & 7)) - 1;
    if (a != b) {
      v = lbl_820DBD58[a - 1];
      o->f8 = ((b * 2) & 0x1e) | (f & 0xffffffe1);
    }
  }
  for (n = head; notNull(n); n = n->next) {
    f = W(n);
    if ((f & 0xe000000) != 0) {
      if (v != 0xe4) {
        W(n) = ((((v >> ((f >> 10) & 6) & 3) << 2 | (v >> ((f >> 8) & 6) & 3)) << 2 |
                 (v >> ((f >> 6) & 6) & 3)) << 2 | (v >> ((f >> 4) & 6) & 3)) << 5 |
               (f & 0xffffe01f);
      }
      W(n) = W(n) & 0xbe001fff;
    }
  }
end:
  o->f14 = o->f14 & 0xfe001fff;
}
