extern unsigned int lbl_82005344;
extern unsigned int lbl_8207F25C;
extern unsigned int lbl_820BC500;
extern unsigned int lbl_8216DFE4;


unsigned __int64 fn_82FDA718(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  
  iVar2 = lbl_8207F25C;
  iVar1 = lbl_82005344;
  if ((param_4 & 0xffffffff) == 0) {
    *(unsigned char *)(param_1 + 5) = 1;
    iVar4 = lbl_8216DFE4;
    iVar3 = lbl_820BC500;
    param_1[1] = iVar2;
    param_1[2] = iVar1;
    param_1[3] = iVar3;
    param_1[4] = iVar4;
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x82fda77c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(int (***)())(*param_1 + 0x14))(param_1,param_3,param_4);
  return uVar5;
}

