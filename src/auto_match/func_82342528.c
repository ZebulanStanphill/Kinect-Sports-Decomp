extern int fn_82337B90();
extern int fn_82337DE0();
extern int fn_82338740(void *, float);
extern int fn_82341BF0();
extern int fn_82342E10();
extern int fn_8234A3D0();
extern int fn_8234A790(void *, float, int);
extern int fn_824CD030();

typedef struct { char pad[0x16c]; float f16c; } L_82342528;
typedef struct { char pad[0x40]; L_82342528 *l; } E_82342528;
typedef struct { char pad[0x1c4]; E_82342528 **arr; char pad2[0xc]; int idx; } W_82342528;
typedef struct { char pad[0x40]; W_82342528 *w; } S_82342528;
typedef struct { char pad[0x174]; char *z; } Y_82342528;
typedef struct { char pad[0xc]; Y_82342528 *y; } X_82342528;
typedef struct { char pad[0x1d4]; unsigned char b1d4; char pad2[0x7f]; unsigned char b254; } D_82342528;
typedef struct {
  char pad0[0x24];
  int f24;
  char pad28[0xf0];
  D_82342528 *d;
  char pad11c[0x84];
  X_82342528 *x;
} A_82342528;
typedef struct { A_82342528 *a; int type; } P_82342528;
typedef struct { char pad[0x44]; unsigned int cnt; unsigned int max; } Stat_82342528;
typedef struct {
  char pad0[0xc];
  P_82342528 *p;
  Stat_82342528 *stat;
} Obj_82342528;

void fn_82342528(Obj_82342528 *o, float f, int c)
{
  int type;
  A_82342528 *a;
  S_82342528 *s;
  E_82342528 *e;

  if (fn_82337B90(o->p->a) == 0) {
    return;
  }
  a = o->p->a;
  type = o->p->type;
  if (type == 2 || type == 0xb) {
    fn_82341BF0(o);
  } else if (type > 0xc && type <= 0xf) {
    o->stat->cnt = o->stat->cnt + 1;
    if (o->stat->cnt > o->stat->max) {
      a->d->b1d4 = 0;
      a->d->b254 = 0;
    }
  }
  if (o->p->a->f24 != 0 && fn_824CD030(o->p->a->f24) != 0) {
    s = (S_82342528 *)(o->p->a->x->y->z + 0x1c);
    if (s->w->idx == -1) {
      e = 0;
    } else {
      e = s->w->arr[s->w->idx];
    }
    fn_82338740(o->p->a, e->l->f16c);
  }
  switch (o->p->type) {
  case 2:
  case 3:
  case 4:
    fn_82341BF0(o);
    fn_82337DE0(o->p->a);
    break;
  case 0xb:
    fn_82341BF0(o);
    fn_8234A3D0(o, c);
    fn_82337DE0(o->p->a);
    fn_82342E10(o, c);
    break;
  case 9:
  case 10:
  case 0xc:
  case 0xe:
  case 0xf:
    fn_82341BF0(o);
    fn_8234A790(o, f, c);
    fn_82337DE0(o->p->a);
    fn_82342E10(o, c);
    break;
  }
}
