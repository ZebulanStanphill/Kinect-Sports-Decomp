typedef struct Ev_82441A18 {
  const char *name;
  int kind;
} Ev_82441A18;

typedef struct Cfg_82441A18 {
  char pad0[0x28];
  const char *s28;
  int f2c;
  const char *s30;
  const char *s34;
} Cfg_82441A18;

typedef struct Obj_82441A18 {
  unsigned int flags;
  int f4;
  int f8;
  int fc;
  int idx;
  int f14;
  int f18;
  int f1c;
  int f20;
  int f24;
  int f28;
} Obj_82441A18;

extern int fn_82441298(Obj_82441A18 *, int, void *);
extern int fn_824BF8A8(void *, Ev_82441A18 *);
extern Cfg_82441A18 *lbl_82191C00[];

void fn_82441A18(Obj_82441A18 *o, void *p)
{
  Ev_82441A18 ev;
  Cfg_82441A18 *c;
  int ok;
  int b;

  if ((o->flags & 0x80000) != 0 || (o->flags & 0x2000) != 0) {
    o->f1c = 1;
  }
  c = lbl_82191C00[o->idx];
  fn_82441298(o, c->f2c, p);
  if ((o->flags & 0x100000) != 0) {
    ev.name = "longjump_video";
    ev.kind = 7;
    fn_824BF8A8(p, &ev);
  }
  if ((o->flags & 8) != 0) {
    ev.name = c->s28;
    ev.kind = 7;
    fn_824BF8A8(p, &ev);
  }
  if (o->f18 != 0) {
    ev.name = c->s28;
    ev.kind = 6;
    fn_824BF8A8(p, &ev);
  }
  b = (o->flags >> 9) & 1;
  if (b != 0 && o->f28 == 0) ok = 1; else ok = 0;
  o->f28 = b;
  if ((o->flags & 2) != 0) {
    ev.name = c->s30;
    ev.kind = 7;
    fn_824BF8A8(p, &ev);
  }
  if (ok != 0) {
    ev.name = c->s34;
    ev.kind = 7;
    fn_824BF8A8(p, &ev);
  }
  if ((o->flags & 0x2000) != 0) {
    ev.name = c->s30;
    ev.kind = 9;
    fn_824BF8A8(p, &ev);
    ev.name = c->s34;
    ev.kind = 9;
    fn_824BF8A8(p, &ev);
  }
  if ((o->flags & 0x80000) != 0) {
    ev.name = c->s30;
    ev.kind = 8;
    fn_824BF8A8(p, &ev);
    ev.name = c->s34;
    ev.kind = 8;
    fn_824BF8A8(p, &ev);
  }
}
