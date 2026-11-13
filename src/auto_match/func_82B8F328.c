extern int fn_82AC6560();


void fn_82B8F328(int param_1,int param_2,unsigned __int64 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)fn_82AC6560(param_3,0x14,0x18);
  piVar1[1] = param_1;
  *piVar1 = param_2;
  piVar1[2] = *(int *)(param_1 + 0xc);
  *(int **)(param_1 + 0xc) = piVar1;
  piVar1[3] = *(int *)(param_2 + 8);
  *(int **)(param_2 + 8) = piVar1;
  piVar1[4] = 1;
  return;
}

