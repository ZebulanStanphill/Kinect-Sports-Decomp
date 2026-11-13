typedef struct { int a, b, c; } Val_8229EE18;
extern void fn_82273C88(Val_8229EE18 *);
extern void fn_82273CD8(Val_8229EE18 *, int);
extern void fn_8229EC50(int *, int, int);
extern void fn_82672C20(int, const char *, Val_8229EE18 *, int);

void fn_8229EE18(int *param_1, int param_2, int param_3)
{
  Val_8229EE18 v;

  fn_8229EC50(param_1, param_2, param_3);
  if (param_1[5] == 0) {
    v.a = 0;
    v.b = 0;
    fn_82273CD8(&v, 5);
    v.c = param_3;
    fn_82672C20(*param_1, "_root.mc_topleftcaption.displayCaption", &v, 1);
    param_1[5] = 1;
    fn_82273C88(&v);
  }
}
