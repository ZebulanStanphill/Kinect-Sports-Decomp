extern int fn_8267C498();
extern int fn_826CD508();
extern int fn_82F63CA0();


void fn_826D03A0(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_1[1] == 1) {
    fn_826CD508(param_1,0);
  }
  else {
    if (*(int *)(param_2 * 4 + *param_1) != 0) {
      fn_8267C498();
    }
    iVar1 = param_2 * 4 + *param_1;
    fn_82F63CA0(iVar1,iVar1 + 4,(param_1[1] - param_2) - 1U & 0x3fffffff);
    param_1[1] = param_1[1] + -1;
  }
  return;
}

