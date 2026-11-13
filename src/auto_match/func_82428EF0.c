typedef struct { char pad[0x40]; unsigned state; } P_82428EF0;
typedef struct { char pad[0x2c]; int v; char pad2[0x1ac - 0x30]; } Item_82428EF0;
typedef struct { char pad[8]; Item_82428EF0 *items; char pad2[0x18 - 0xc]; int idx; } Cur_82428EF0;
typedef struct {
  char pad0[0xa0];
  int p;
  char pad1[0xc0c - 0xa4];
  int flag;
  char pad2[0xe24 - 0xc10];
  int e24;
  int e28;
  char pad3[0x2b20 - 0xe2c];
  Cur_82428EF0 *sel;
  char pad4[0x2b50 - 0x2b24];
  void *tgt;
} G_82428EF0;
typedef struct { int pad; Cur_82428EF0 *cur; G_82428EF0 *g; } Obj_82428EF0;
extern void fn_82414950(void *, int, int);
extern void fn_82536590(void *, int);

void fn_82428EF0(Obj_82428EF0 *o)
{
  G_82428EF0 *g = o->g;
  Cur_82428EF0 *cur = o->cur;
  Cur_82428EF0 *s2;
  int evt;
  if (cur == g->sel) {
    if (cur->items[cur->idx].v != 0) {
      s2 = o->g->sel;
      if (cur == s2 && (g->p == 0 || ((P_82428EF0 *)g->p)->state != 1) && g->flag != 0) fn_82536590(&g->e28, 0);
      evt = 0x23;
    } else {
      s2 = o->g->sel;
      if (cur == s2 && (g->p == 0 || ((P_82428EF0 *)g->p)->state != 1) && g->flag != 0) fn_82536590(&g->e24, 0);
      evt = 0x22;
    }
    fn_82414950(o->g->tgt, 0, evt);
  }
}
