typedef struct Node_82BB9628 { char pad[8]; struct Node_82BB9628 *next; char pad2[0x1c]; struct Win_82BB9628 *w; } Node_82BB9628;
typedef struct Win_82BB9628 { char pad[0xe4]; unsigned int flags; } Win_82BB9628;
typedef struct Slots_82BB9628 { struct Slot_82BB9628 *e[2]; Node_82BB9628 *f10; } Slots_82BB9628;
typedef struct Slot_82BB9628 { char pad[0x28]; Win_82BB9628 *w; } Slot_82BB9628;
typedef struct Obj_82BB9628 {
  char pad[0xc];
  void *f0c;
  void *f10;
  char pad14[0xc];
  Slot_82BB9628 **f20;
} Obj_82BB9628;
extern void fn_82BB4FB0(void *, Slot_82BB9628 **);
extern void fn_82BB80E8(Obj_82BB9628 *);
extern unsigned int fn_82BB8B88(Obj_82BB9628 *);
extern void fn_82BB9428(Obj_82BB9628 *, unsigned int);
extern unsigned char fn_82BBFD48(void *);
extern void fn_82BBFDD0(Node_82BB9628 *);
extern void fn_82BC5538(void *, Win_82BB9628 *);

void fn_82BB9628(Obj_82BB9628 *p)
{
  unsigned int x;
  Win_82BB9628 *w;
  Win_82BB9628 *t;
  int off;
  Node_82BB9628 *n;
  Node_82BB9628 *nx;

  while ((x = fn_82BB8B88(p)) != 0) {
    fn_82BB9428(p, x);
  }
  fn_82BB4FB0(p->f0c, p->f20);
  w = 0;
  off = 0;
  do {
    if (*(Slot_82BB9628 **)((char *)p->f20 + off) != 0) {
      t = (*(Slot_82BB9628 **)((char *)p->f20 + off))->w;
      *(Slot_82BB9628 **)((char *)p->f20 + off) = 0;
      fn_82BC5538(p->f10, t);
      t->flags = t->flags | 4;
      w = t;
    }
    off += 4;
  } while (off < 8);
  n = *(Node_82BB9628 **)((char *)p->f20 + 0x10);
  nx = n->next;
  while (nx != 0) {
    t = n->w;
    fn_82BBFDD0(n);
    fn_82BC5538(p->f10, t);
    t->flags = t->flags | 4;
    w = t;
    n = nx;
    nx = nx->next;
  }
  if (w != 0) {
    w->flags = w->flags & 0xfffffffb;
  }
  fn_82BB80E8(p);
  if (fn_82BBFD48((char *)p + 0x24) != 0) {
    do {
      if (fn_82BBFD48((char *)p + 0x3c) != 0) {
        return;
      }
      fn_82BB80E8(p);
    } while (fn_82BBFD48((char *)p + 0x24) != 0);
  }
}
