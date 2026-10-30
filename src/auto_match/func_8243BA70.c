typedef struct Lvl_8243BA70 { char pad[0x10]; unsigned v; } Lvl_8243BA70;
typedef struct Cnt_8243BA70 {
  char pad0[0xbc];
  int count;
} Cnt_8243BA70;
typedef struct Item_8243BA70 {
  int * base;
  char pad0[0xc];
  int idx;
} Item_8243BA70;
typedef struct Tbl_8243BA70 { Item_8243BA70 **data; } Tbl_8243BA70;
typedef struct Mgr_8243BA70 {
  char pad0[0x8];
  Tbl_8243BA70 * tbl;
  char pad1[0x168];
  Cnt_8243BA70 * cnt;
} Mgr_8243BA70;
typedef struct Ent_8243BA70 {
  char pad0[0x1a0];
  char * f1a0;
} Ent_8243BA70;
typedef struct Sel_8243BA70 {
  int level;
  char pad0[0x4];
  Lvl_8243BA70 * l1;
  Lvl_8243BA70 * l2;
  Lvl_8243BA70 * l3;
} Sel_8243BA70;
typedef struct A_8243BA70 {
  char pad0[0x1d8];
  Mgr_8243BA70 * mgr;
  char pad1[0x2c];
  Sel_8243BA70 * sel;
} A_8243BA70;
typedef struct Out_8243BA70 {
  char pad0[0x14];
  int f14;
  char pad1[0x4];
  int f1c;
  int f20;
  int f24;
  int f28;
} Out_8243BA70;
typedef struct Obj_8243BA70 {
  char pad0[0x40];
  A_8243BA70 * a;
} Obj_8243BA70;
extern Ent_8243BA70 *fn_822ABA88(int, int);
extern Out_8243BA70 *fn_8225F160(void);
extern int fn_82340CC8(char *, int);


void fn_8243BA70(Obj_8243BA70 *o)
{
  A_8243BA70 *a = o->a;
  unsigned best = 0;
  int i = 0;
  Mgr_8243BA70 *m = a->mgr;
  Sel_8243BA70 *sel;
  Out_8243BA70 *out;
  int level;
  if (m->cnt->count > 0) {
    int off = 0;
    do {
      Item_8243BA70 *it = *(Item_8243BA70 **)((char *)m->tbl->data + off);
      Ent_8243BA70 *e = fn_822ABA88(it->base[it->idx], 0);
      unsigned v = fn_82340CC8(e->f1a0 + 0x194, 0x1e);
      if ((int)best < (int)v)
        best = v;
      a = o->a;
      i++;
      off += 4;
      m = a->mgr;
    } while (i < m->cnt->count);
  }
  sel = a->sel;
  if (best > sel->l3->v && sel->l3->v != 0) {
    int level = 3;
    sel->level = level; out = fn_8225F160(); out->f14 = level; out->f28 = level; out->f1c = 0; out->f20 = 0; out->f24 = 0;
  } else if (best > sel->l2->v && sel->l2->v != 0) {
    int level = 2;
    sel->level = level; out = fn_8225F160(); out->f14 = level; out->f28 = level; out->f1c = 0; out->f20 = 0; out->f24 = 0;
  } else if (best > sel->l1->v && sel->l1->v != 0) {
    int level = 1;
    sel->level = level; out = fn_8225F160(); out->f14 = level; out->f28 = level; out->f1c = 0; out->f20 = 0; out->f24 = 0;
  } else {
    sel->level = 0; out = fn_8225F160(); out->f14 = 0; out->f28 = 0; out->f1c = 0; out->f20 = 0; out->f24 = 0;
  }
}
