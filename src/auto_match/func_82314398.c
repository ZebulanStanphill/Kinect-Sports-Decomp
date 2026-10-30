typedef struct { char b[0x28]; } Str_82314398;
typedef struct { int w[4]; int z; int pad[3]; } Tmp_82314398;
typedef struct { char pad[0x20]; void *f20; char pad2[0x9c]; void *fc0; } H_82314398;
typedef struct { char pad[0x578]; int f578; } W_82314398;
typedef struct { char pad[0x93c]; void *f93c; } Z_82314398;
typedef struct { char pad[0x4c]; Z_82314398 *f4c; } Y_82314398;
typedef struct {
  char pad[0x14];
  Y_82314398 *f14;
  char pad2[0xfc];
  H_82314398 *f114;
  char pad3[0xd0];
  W_82314398 *f1e8;
  char pad4[0x88];
  void *f274;
} G_82314398;
typedef struct { int pad[3]; G_82314398 *g; } Obj_82314398;

extern void fn_82230110(Str_82314398 *, const char *);
extern void fn_82230300(Str_82314398 *, int, int);
extern void fn_822FB198(void *, Str_82314398 *);
extern void fn_822C72E0(void *, const char *);
extern void fn_823000E0(W_82314398 *, Tmp_82314398 *);
extern void fn_82575DF0(void *, void *);

void fn_82314398(Obj_82314398 *o)
{
  Str_82314398 s;
  Tmp_82314398 t;
  G_82314398 *g;
  fn_82230110(&s, "idleset_default");
  fn_822FB198(o->g->f114->fc0, &s);
  fn_82230300(&s, 1, 0);
  fn_822C72E0(o->g->f114->f20, "run");
  g = o->g;
  t.z = 0;
  g->f1e8->f578 = 0;
  fn_823000E0(g->f1e8, &t);
  g = o->g;
  if (g->f274 != 0) {
    fn_82575DF0(g->f14->f4c->f93c, g->f274);
    g->f274 = 0;
  }
}
