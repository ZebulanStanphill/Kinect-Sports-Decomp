typedef struct Value_8229ACA0 {
  int obj;
  int type;
  double num;
} Value_8229ACA0;

typedef struct Ctrl_8229ACA0 {
  int movie;
  int f4;
  int f8;
  int mode;
} Ctrl_8229ACA0;

extern void fn_82273C88(Value_8229ACA0 *);
extern void fn_82273CD8(Value_8229ACA0 *, int);
extern void fn_82672C20(int, const char *, Value_8229ACA0 *, int);

static void SetNumber_8229ACA0(Value_8229ACA0 *v, double num)
{
  fn_82273CD8(v, 3);
  v->num = num;
}

void fn_8229ACA0(int param_1, int param_2)
{
  Ctrl_8229ACA0 *c = *(Ctrl_8229ACA0 **)(param_1 + 0xc);
  Value_8229ACA0 v;

  if (c->mode != param_2) {
    c->mode = param_2;
    v.obj = 0;
    v.type = 0;
    SetNumber_8229ACA0(&v, (double)c->mode);
    fn_82672C20(c->movie, "_root.mainCtrl.setDisplayMode", &v, 1);
    fn_82273C88(&v);
  }
}
