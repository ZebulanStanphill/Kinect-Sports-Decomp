extern int fn_82F68B70();
extern int fn_82F68B7C();


void fn_82CFD560(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  if ((int)param_2 == 0) {
    fn_82F68B7C(param_3,*(unsigned int *)(param_1 * 0xc + -0x7ce8097c));
    return;
  }
  fn_82F68B70(param_3,0xffffffff82133c0c,*(unsigned int *)(param_1 * 0xc + -0x7ce8097c),param_2);
  return;
}

