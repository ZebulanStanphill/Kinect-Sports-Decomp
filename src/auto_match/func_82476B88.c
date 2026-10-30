typedef struct Vt_82476B88 { void *f[2]; void (*f8)(void *, int, int); } Vt_82476B88;
typedef struct Node_82476B88 { char pad[0x1b0]; struct { Vt_82476B88 *vt; } *comp; } Node_82476B88;
typedef struct Mgr_82476B88 { char pad[0x8c0]; unsigned int f8c0; } Mgr_82476B88;
typedef struct Ctx_82476B88 { char pad[0x3e4]; Mgr_82476B88 *f3e4; char pad2[0x93c - 0x3e8]; int f93c; } Ctx_82476B88;
typedef struct Obj_82476B88 { char pad[0x15c]; Ctx_82476B88 *ctx; } Obj_82476B88;
extern int fn_82F63F40(char *, const char *, int);
extern Node_82476B88 *fn_82573530(unsigned int, char *);
extern Node_82476B88 *fn_825764F0(unsigned int, char *, Node_82476B88 *);
extern void fn_82476E30(Obj_82476B88 *, int, int);
extern void fn_82476DA0(Obj_82476B88 *, int);

void fn_82476B88(Obj_82476B88 *o)
{
  Mgr_82476B88 *m = o->ctx->f3e4;
  if (m != 0) {
    unsigned int f = m->f8c0;
    if (o->ctx->f93c != 0 && f != 0) {
      unsigned int list = f + 0x128;
      char buf[32];
      int i;
      Node_82476B88 *n;
      fn_82476E30(o, 0, 1);
      for (i = 4; i <= 0x18; i++) {
        fn_82F63F40(buf, "effectLocator%d", i);
        for (n = fn_82573530(list, buf); n != 0; n = fn_825764F0(list, buf, n)) {
          n->comp->vt->f8(n->comp, 0, 0);
        }
      }
      for (i = 0x1e; i <= 0x22; i++) {
        fn_82F63F40(buf, "effectLocator%d", i);
        for (n = fn_82573530(list, buf); n != 0; n = fn_825764F0(list, buf, n)) {
          n->comp->vt->f8(n->comp, 0, 0);
        }
      }
    }
    fn_82476DA0(o, 2);
  }
}
