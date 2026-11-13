extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_82FE5E68(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  iVar1 = lbl_821AAD20;
  if ((int)param_4 == 0) {
    param_1[1] = lbl_82002AE0;
    param_1[2] = iVar1;
    param_1[3] = iVar1;
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x82fe5eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(int (***)())(*param_1 + 0x14))(param_1,param_3,param_4);
  return uVar2;
}

