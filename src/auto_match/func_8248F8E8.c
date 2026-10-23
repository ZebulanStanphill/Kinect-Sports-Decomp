extern void fn_82522ED8(int);
extern int fn_8259A230(void);
extern void fn_82A1BB18(void);
extern int lbl_8326B7D0[];

void fn_8248F8E8(int param_1)
{
  int saved;
  int i;

  fn_82A1BB18();
  i = fn_8259A230();
  saved = lbl_8326B7D0[i];
  lbl_8326B7D0[i] = 2;
  fn_82522ED8(param_1);
  fn_82A1BB18();
  i = fn_8259A230();
  lbl_8326B7D0[i] = saved;
}
