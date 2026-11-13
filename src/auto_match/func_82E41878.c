unsigned __int64
fn_82E41878(int param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5,
             unsigned __int64 param_6)

{
  int *piVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  if ((param_2 & 0xffff) < 0x80) {
    iVar2 = ((param_2 & 0xffff) + 0x1b) * 4;
    if (*(int *)(iVar2 + param_1) != 0) {
      piVar1 = *(int **)(iVar2 + param_1);
                    /* WARNING: Could not recover jumptable at 0x82e418c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(int (***)())(*piVar1 + 0x28))(piVar1,param_3,param_4,param_5,param_6);
      return uVar3;
    }
  }
  return 0xffffffffc00d36b3;
}

