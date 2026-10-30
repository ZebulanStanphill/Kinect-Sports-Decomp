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
typedef struct Node_82893C48 { struct Node_82893C48 *next; int pad[3]; void *val; } Node_82893C48;
typedef struct Owner_82893C48 {
  char pad[0x8c];
  int cnt;
  char pad2[0x230 - 0x90];
  Node_82893C48 *list;
} Owner_82893C48;
typedef struct Inner_82893C48 { char pad[0x26]; unsigned char f26; } Inner_82893C48;
typedef struct Child_82893C48 {
  void **vt;
  char pad[0x34];
  Inner_82893C48 *inner;
} Child_82893C48;
typedef struct Obj_82893C48 {
  void **vt;
  int f4, f8;
  void *rc;
  Owner_82893C48 *owner;
  char sub14[0xc];
  struct S20_82893C48 { void **vt; int f24; char sub[0xc]; } s20;
  Child_82893C48 *child;
  int f38;
  void *f3c;
  int f40, f44, f48, f4c;
  char pad50[0xd];
  unsigned char f5d, f5e;
} Obj_82893C48;
extern void fn_822315A0(void *rc);
extern void fn_82381BC0(Node_82893C48 **it);
extern void fn_8265CA20(void *p);
extern void fn_8288EE68(Obj_82893C48 *o, void *v);
extern void fn_82891FE0(Owner_82893C48 *ow, Obj_82893C48 *o);
extern void fn_828926B8(Obj_82893C48 *o, Owner_82893C48 *ow);
extern Owner_82893C48 *fn_828A12E8(Owner_82893C48 *ow);
extern void fn_828B55B0(void *sub);
extern void fn_828C9840(void *a, Obj_82893C48 *o);
extern void *fn_828CB310(void);
extern int fn_82A4AAA8(void *v);
extern void *lbl_82023898[];
extern void *lbl_82023C3C[];

void fn_82893C48(Obj_82893C48 *o)
{
  Owner_82893C48 *ow;
  Inner_82893C48 *in;
  Node_82893C48 *it;
  unsigned char flag;
  void *v;
  Child_82893C48 *c;
  Child_82893C48 **pc;
  struct S20_82893C48 *s;
  Node_82893C48 *l;

  o->vt = lbl_82023898;
  fn_828C9840(fn_828CB310(), o);
  ow = fn_828A12E8(o->owner);
  ow->cnt = ow->cnt - 1;
  if (o->child == 0 || (in = o->child->inner) == 0) {
    flag = 0;
  } else {
    flag = in->f26;
  }
  if (flag != 0 && o->f5e != 0) {
    l = o->owner->list;
    it = l->next;
    if (it != l) {
      do {
        v = it->val;
        if (fn_82A4AAA8(v) == 1) {
          fn_8288EE68(o, v);
        }
        fn_82381BC0(&it);
      } while (it != o->owner->list);
    }
  }
  o->f5d = 0;
  fn_82891FE0(fn_828A12E8(o->owner), o);
  fn_828926B8(o, o->owner);
  pc = &o->child;
  c = *pc;
  if (c != 0) {
    ((void (*)(Child_82893C48 *, int))c->vt[0])(c, 1);
  }
  *pc = 0;
  if (o->f3c != 0) {
    o->f4c = 0;
    fn_8265CA20(o->f3c);
  } else {
    o->f4c = 0;
  }
  o->f3c = 0;
  o->f40 = 0;
  o->f44 = 0;
  s = &o->s20;
  s->vt = lbl_82023C3C;
  fn_828B55B0(s->sub);
  fn_828B55B0(o->sub14);
  if (o->rc != 0) {
    fn_822315A0(o->rc);
  }
}
