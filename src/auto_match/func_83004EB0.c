unsigned __int64
fn_83004EB0(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5,
             unsigned __int64 param_6)

{
  int *piVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    return 2;
  }
  iVar2 = (param_3 + 1) * 0xc + *(int *)(param_1 + 0x28);
  if (*(int *)(iVar2 + 4) == 0) {
    return 0x1f;
  }
  piVar1 = *(int **)(iVar2 + 4);
                    /* WARNING: Could not recover jumptable at 0x83004f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(int (***)())(*piVar1 + 4))(piVar1,param_4,param_5,param_6);
  return uVar3;
}

