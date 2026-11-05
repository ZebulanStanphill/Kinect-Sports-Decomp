struct Obj_func_8300B9D0;
struct Child_func_8300B9D0;
typedef struct {
  int pad[30];
  void (*f78)(struct Child_func_8300B9D0 *, void *, int, unsigned char);
} VT_func_8300B9D0;
typedef struct Child_func_8300B9D0 {
  VT_func_8300B9D0 *vt;
} Child_func_8300B9D0;
typedef struct {
  int pad;
  Child_func_8300B9D0 *child;
} Link_func_8300B9D0;
typedef struct {
  unsigned char mode : 3;
  unsigned char rest : 5;
} Bits_func_8300B9D0;
typedef struct Obj_func_8300B9D0 {
  char pad0[0x14];
  Child_func_8300B9D0 *child;
  unsigned short cnt;
  char pad1[0x3d - 0x1a];
  unsigned char flags;
  char pad2[0x44 - 0x3e];
  Link_func_8300B9D0 *link;
  char pad3[0x54 - 0x48];
  void *f54;
  char pad4[0x70 - 0x58];
  void *f70;
  char pad5[0x9c - 0x74];
  unsigned short cnt2;
  char pad6[2];
  unsigned char b;
} Obj_func_8300B9D0;

extern int fn_83008DB0(Obj_func_8300B9D0 *);
extern void fn_8300B720(Obj_func_8300B9D0 *);

void fn_8300B9D0(Obj_func_8300B9D0 *o, void *p2, int unused, unsigned char flag)
{
  Child_func_8300B9D0 *c;
  o->cnt = o->cnt + 0xffff;
  if (flag == 0 && ((o->flags & 0x20) != 0 || o->child == 0)) {
    flag = 1;
    o->cnt2 = o->cnt2 + 0xffff;
  }
  c = o->child;
  if (c != 0)
    c->vt->f78(c, p2, 3, flag);
  if (o->link != 0 && o->link->child != 0)
    o->link->child->vt->f78(o->link->child, p2, 3, flag);
  if (o->cnt == 0) {
    if (o->f54 != 0) {
      o->b = (o->b & 0x1f) | 0x40;
      fn_8300B720(o);
      if (o->f70 != 0 && fn_83008DB0(o) != 1) {
        o->b = o->b & 0x1f;
        fn_8300B720(o);
      }
    } else {
      o->b = o->b & 0x1f;
      fn_8300B720(o);
    }
  }
}
