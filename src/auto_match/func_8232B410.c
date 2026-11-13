extern int fn_8232ADE8();
extern int fn_825354B8();
extern int fn_82535298();
extern int fn_82536008();
extern int fn_82536288();
extern int fn_82F63108();
extern unsigned int ltcg_pool_0_0f;


void fn_8232B410(int *param_1)

{
  int aiStack_30;

  if (param_1[0x48] != 0) {
    fn_82536008();
    fn_82536288(param_1 + 0x48);
    param_1[0x48] = 0;
  }
  aiStack_30 = param_1[*param_1 * 6 + 2];
  if (param_1 + 0x4c == (int *)0x0) {
    aiStack_30 =
         fn_825354B8(&aiStack_30,*(unsigned int *)(param_1[0x50] + 0x84c),0xffffffff83296bc0,
                           0xffffffff83296bd0);
  }
  else {
    aiStack_30 =
         fn_82535298(&aiStack_30,param_1 + 0x4c,0,*(unsigned int *)(param_1[0x50] + 0x84c),
                           0xffffffff83296bc0,0xffffffff83296bd0);
  }
  fn_82536288(&aiStack_30);
  *param_1 = 0;
  param_1[0x58] = 0;
  param_1[1] = ltcg_pool_0_0f;
  fn_8232ADE8(param_1[0x44]);
  fn_8232ADE8(param_1[0x46]);
  if (param_1[0x56] == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F63108();
  }
  (**(int (***)())(*(int *)param_1[0x56] + 4))((int *)param_1[0x56],0);
  return;
}
