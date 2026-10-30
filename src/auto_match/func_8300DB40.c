struct Item_8300DB40;
typedef struct ItemVt_8300DB40 {
  void *f[14];
  unsigned int (*f38)(struct Item_8300DB40 *);
} ItemVt_8300DB40;
typedef struct Item_8300DB40 { ItemVt_8300DB40 *vt; } Item_8300DB40;
typedef struct Ent_8300DB40 { unsigned int key; Item_8300DB40 *item; } Ent_8300DB40;
typedef struct Vec_8300DB40 { Ent_8300DB40 *begin; Ent_8300DB40 *end; Ent_8300DB40 *cap; } Vec_8300DB40;
typedef struct Obj_8300DB40 {
  Vec_8300DB40 v[6];
  char pad48[5];
  unsigned char n;
} Obj_8300DB40;
static Item_8300DB40 **sel_(int c, Item_8300DB40 **p) { return c ? p : 0; }
extern unsigned int lbl_831BC770;
extern unsigned int fn_82FA5060(unsigned int, unsigned int);
extern void fn_82FA5190(unsigned int, unsigned int);
extern void fn_83036628(void);
extern unsigned int fn_83013B98(Obj_8300DB40 *, unsigned int, unsigned int);
extern void fn_83036C28(unsigned int);
extern void fn_83036C30(unsigned int, unsigned int, unsigned int, unsigned int);

unsigned int fn_8300DB40(Obj_8300DB40 *o, unsigned int key)
{
  Ent_8300DB40 *e;
  Item_8300DB40 **found;
  unsigned int res;
  unsigned int i;
  unsigned int k;
  unsigned int flag;
  Ent_8300DB40 *p;

  for (e = o->v[0].begin; e != o->v[0].end && e->key != key; e++) {
  }
  flag = ((unsigned int)o->v[0].end - (unsigned int)e) != 0;
  found = sel_(flag, &e->item);
  if (found == 0) {
    res = fn_82FA5060(lbl_831BC770, 0x10);
    if (res != 0) {
      fn_83036628();
      if (fn_83013B98(o, key, res) != 0) goto fill;
      fn_83036C28(res);
      fn_82FA5190(lbl_831BC770, res);
    }
    return 0;
  } else {
    res = (unsigned int)*found;
fill:
    i = 0;
    if (o->n != 0) {
      k = 0;
      do {
        Vec_8300DB40 *v = &o->v[k + 1];
        for (p = v->begin; p != v->end; p++) {
          fn_83036C30(res, i, p->key, p->item->vt->f38(p->item));
        }
        i = (k + 1) & 0xff;
        k = i;
      } while (i < o->n);
    }
  }
  return res;
}
