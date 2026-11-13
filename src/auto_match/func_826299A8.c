extern int fn_825A2410();


unsigned __int64 fn_826299A8(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((param_2[1] == 0) || (*(int *)(iVar1 + 8) == param_2[1])) {
    piVar2 = (int *)fn_825A2410(*param_2);
    *piVar2 = iVar1;
  }
  return 1;
}

