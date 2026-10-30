typedef struct { void *vt; char pad[0x84]; void *owner; } Sub_82BC6580;
typedef struct { int owner; Sub_82BC6580 s; } Blk_82BC6580;
typedef struct { char pad[0x5ac]; int f5ac; } Ctx_82BC6580;
typedef struct {
  void *vt; char pad0[0x70]; int f74; char pad1[0x10]; int f88; char f8c; char pad2[3]; void *f90; int f94; void *f98; int f9c;
} Obj_82BC6580;
extern void *fn_82B7BD28(int owner, int size);
extern void fn_82BBFD90(int a, int b);
extern void *fn_82BC5758(void *p, Ctx_82BC6580 *c);
extern void fn_82BC5ED8(void *p, void *q);
extern char lbl_820E4CA0[];
extern char lbl_820E4DD4[];

Obj_82BC6580 *fn_82BC6580(Obj_82BC6580 *o, int a, int b, Ctx_82BC6580 *c)
{
  Blk_82BC6580 *blk;
  Sub_82BC6580 *q;
  Sub_82BC6580 *r;
  int owner;
  fn_82BC5758(o, c);
  o->f9c = b;
  o->f88 = a;
  o->f90 = 0;
  o->vt = lbl_820E4CA0;
  o->f8c = 1;
  o->f94 = 0;
  owner = c->f5ac;
  blk = (Blk_82BC6580 *)fn_82B7BD28(owner, 0x8c);
  blk->owner = owner;
  { void *x; if (&blk->s != 0) x = fn_82BC5758(&blk->s, c); else x = 0; o->f90 = x; fn_82BC5ED8(o, x); }
  {
    int t = o->f88;
    fn_82BBFD90(t, o->f74);
    *(Obj_82BC6580 **)(t + 0x3b4) = o;
  }
  owner = c->f5ac;
  blk = (Blk_82BC6580 *)fn_82B7BD28(owner, 0x90);
  q = &blk->s;
  blk->owner = owner;
  if (q != 0) {
    fn_82BC5758(q, c);
    q->owner = o;
    q->vt = lbl_820E4DD4;
    r = q;
  } else {
    r = 0;
  }
  o->f98 = r;
  return o;
}
