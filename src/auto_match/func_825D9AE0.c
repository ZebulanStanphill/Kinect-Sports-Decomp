extern int fn_825925D8();
extern int fn_82D85148();


void fn_825D9AE0(int param_1,int *param_2)

{
  int iVar1;
  
  if (*param_2 == 0x34) {
    iVar1 = *(int *)(param_1 + 0x7c0);
    *(unsigned int *)(iVar1 + 0x2c) = 6;
    fn_82D85148(*(unsigned int *)(iVar1 + 8),iVar1,0,1);
  }
  fn_825925D8(param_1,param_2);
  return;
}

