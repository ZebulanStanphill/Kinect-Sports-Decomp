extern int fn_82E50EA0();
extern int fn_82E55580();
extern int fn_82EE2D38();
extern unsigned int lbl_821548E0;


void fn_82E55680(unsigned int *param_1)

{
  *param_1 = &lbl_821548E0;
  fn_82E55580();
  fn_82EE2D38(param_1 + 0x15);
  fn_82E50EA0(param_1 + 2);
  return;
}

