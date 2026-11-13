extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005344;
extern unsigned int lbl_82021544;
extern unsigned int lbl_8205743C;
extern unsigned int lbl_8207F25C;
extern unsigned int lbl_820BC500;
extern unsigned int lbl_8216DFE4;
extern unsigned int lbl_8216DFE8;
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_82FC9278(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  unsigned __int64 uVar10;
  
  iVar8 = lbl_8216DFE8;
  iVar7 = lbl_8216DFE4;
  iVar6 = lbl_820BC500;
  iVar5 = lbl_8207F25C;
  iVar4 = lbl_8205743C;
  iVar3 = lbl_82021544;
  iVar2 = lbl_82005344;
  if ((param_4 & 0xffffffff) == 0) {
    *(unsigned char *)(param_1 + 10) = 1;
    iVar9 = lbl_821AAD20;
    iVar1 = lbl_82002AE0;
    param_1[1] = iVar5;
    param_1[2] = iVar8;
    param_1[3] = iVar7;
    param_1[4] = iVar3;
    param_1[5] = iVar4;
    param_1[6] = iVar2;
    param_1[7] = iVar6;
    param_1[8] = iVar9;
    param_1[9] = iVar1;
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x82fc9318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar10 = (**(int (***)())(*param_1 + 0x14))(param_1,param_3,param_4);
  return uVar10;
}

