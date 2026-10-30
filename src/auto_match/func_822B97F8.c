typedef struct G2_822B97F8 { int pad; unsigned f4; } G2_822B97F8;
typedef struct G_822B97F8 { char pad[0xec]; G2_822B97F8 *p; } G_822B97F8;
extern G_822B97F8 lbl_832960A0;
typedef struct Svc_822B97F8 { struct { int pad[5]; int (*f14)(struct Svc_822B97F8 *); } *vt; } Svc_822B97F8;
typedef struct Env_822B97F8 { char pad[0x8c0]; Svc_822B97F8 *svc; } Env_822B97F8;
typedef struct Obj_822B97F8 {
  Env_822B97F8 *env; int f4; int f8; int pad[3]; int f18; int pad2[3]; void *f28;
} Obj_822B97F8;
extern void fn_822B9E88(Obj_822B97F8 *);
extern void fn_82282468(int, int);

void fn_822B97F8(Obj_822B97F8 *o)
{
  unsigned x;
  G2_822B97F8 *g;
  if (o->f28 == 0) {
    x = lbl_832960A0.p ? lbl_832960A0.p->f4 : 0;
    if (x != 0 && o->f4 != 0) {
      Svc_822B97F8 *sv = o->env->svc;
      if (sv != 0 && sv->vt->f14(sv) != 0) {
        fn_822B9E88(o);
        fn_82282468(o->f8, o->f18);
        o->f4 = 0;
      }
    }
  }
}
