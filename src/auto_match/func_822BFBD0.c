typedef struct { float a, b, c; } Trip;
typedef struct { char pad[0x18]; Trip t[6]; } Anim;
typedef struct { char pad[0x114]; void *ctl; char pad2[0x770 - 0x118]; Anim *anim; } Obj;
extern void fn_822C8C08(void *ctl, const char *name);
extern void fn_8234E808(Anim *a);

void fn_822BFBD0(Obj *o)
{
  Anim *a;
  Trip *t;
  fn_822C8C08(o->ctl, "idle");
  a = o->anim;
  for (t = a->t; t != a->t + 6; t++) {
    t->c = (t->b - t->a) + t->a;
  }
  fn_8234E808(a);
}
