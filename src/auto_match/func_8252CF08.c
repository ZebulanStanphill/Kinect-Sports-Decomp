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
typedef struct Ent_8252CF08 { int a; void *rc; } Ent_8252CF08;
typedef struct Node_8252CF08 {
  char pad[0x2c]; Ent_8252CF08 *begin; Ent_8252CF08 *end; int f34;
} Node_8252CF08;
typedef struct Dev_8252CF08 {
  struct { char pad[0x54]; void (*rel)(struct Dev_8252CF08 *, void *); } *vt;
  char pad[0x80 - 4];
  void *tab[1];
} Dev_8252CF08;
typedef struct Del_8252CF08 { struct { void (*del)(struct Del_8252CF08 *, int); } *vt; } Del_8252CF08;
typedef struct Idx_8252CF08 { char pad[0x44]; int idx; } Idx_8252CF08;
typedef struct Sub_8252CF08 {
  char pad[0xc]; void *fc; Del_8252CF08 *f10; char pad1[0x28 - 0x14]; Node_8252CF08 *f28;
} Sub_8252CF08;
typedef struct Obj_8252CF08 {
  char pad[0x4c]; Idx_8252CF08 *f4c;
  char pad1[0x180 - 0x50]; Sub_8252CF08 sub;
  char pad2[0x8c0 - 0x180 - sizeof(Sub_8252CF08)]; Dev_8252CF08 *f8c0;
} Obj_8252CF08;
extern void fn_822315A0(void *);
extern void fn_82386340(void *);
extern void fn_82532BC0(void *);
extern void fn_825A1E80(void *);
extern void fn_8265CA20(void *);

void fn_8252CF08(Obj_8252CF08 *o)
{
  Sub_8252CF08 *s = &o->sub;
  Node_8252CF08 *n;
  Ent_8252CF08 *e;
  Ent_8252CF08 *end;
  Ent_8252CF08 *b;
  void *x;

  if (s->fc != 0) {
    o->f8c0->vt->rel(o->f8c0, s->fc);
    s->fc = 0;
  }
  if (s->f10 != 0) {
    s->f10->vt->del(s->f10, 1);
    s->f10 = 0;
  }
  if (o->f4c != 0 && o->f8c0 != 0 && (x = ((void **)o->f8c0)[o->f4c->idx + 0x20]) != 0) {
    fn_82532BC0(x);
  }
  n = s->f28;
  if (n != 0) {
    fn_825A1E80((char *)n + 0x9c);
    fn_82386340((char *)n + 0x3c);
    if (n->begin != 0) {
      end = n->end;
      for (e = n->begin; e != end; e++) {
        if (e->rc != 0) {
          fn_822315A0(e->rc);
        }
      }
      fn_8265CA20(n->begin);
    }
    n->begin = 0;
    n->end = 0;
    n->f34 = 0;
    fn_825A1E80(n);
    fn_8265CA20(n);
    s->f28 = 0;
  }
}
