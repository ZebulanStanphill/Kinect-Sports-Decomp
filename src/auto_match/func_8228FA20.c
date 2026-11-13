extern int fn_825551A8();
extern int fn_82638D10();
extern unsigned int lbl_8320A898;


void fn_8228FA20(int param_1)

{
  if (((*(int *)(param_1 + 8) == 5) || (*(int *)(param_1 + 8) == 9)) &&
     (*(unsigned int *)(param_1 + 0x1c) != 0)) {
    fn_825551A8(*(int *)(param_1 + 0x1c),0);
    fn_82638D10(lbl_8320A898,1);
  }
  return;
}

