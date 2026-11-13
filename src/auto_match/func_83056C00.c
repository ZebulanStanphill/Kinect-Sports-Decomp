extern unsigned int lbl_8200D898;
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_83056C00(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  if ((int)param_4 == 0) {
    param_1[5] = 0;
    iVar2 = lbl_821AAD20;
    *(unsigned char *)(param_1 + 6) = 1;
    iVar1 = lbl_8200D898;
    param_1[1] = iVar2;
    param_1[2] = iVar2;
    param_1[3] = iVar2;
    param_1[4] = iVar1;
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x83056c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(int (***)())(*param_1 + 0x14))(param_1,param_3,param_4);
  return uVar3;
}

