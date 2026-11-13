extern int fn_825B0700();
extern int fn_82850DC0();


void fn_825B54F0(int param_1,int param_2)

{
  unsigned int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    iVar2 = (param_2 + 0x11) * 4;
    if (*(int *)(iVar2 + iVar1) != 0) {
      fn_825B0700(*(unsigned int *)(param_1 + 8),param_2 * 0x20 + iVar1 + 4,param_2);
      fn_82850DC0(**(unsigned int **)(param_1 + 8),(*(unsigned int **)(param_1 + 8))[1],param_2);
      *(unsigned int *)(iVar2 + *(int *)(param_1 + 0xc)) = 0;
    }
  }
  return;
}

