extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82021540;
extern unsigned int lbl_82021544;
extern unsigned int lbl_8216C870;
extern unsigned int lbl_82186E6C;


unsigned __int64 fn_82F9A818(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar6;
  
  iVar5 = lbl_82186E6C;
  iVar4 = lbl_8216C870;
  iVar2 = lbl_82021540;
  if ((param_4 & 0xffffffff) == 0) {
    *(unsigned char *)(param_1 + 6) = 1;
    iVar3 = lbl_82021544;
    *(unsigned char *)((int)param_1 + 0x19) = 1;
    iVar1 = lbl_82002AE0;
    param_1[1] = iVar4;
    param_1[2] = iVar2;
    param_1[3] = iVar5;
    param_1[4] = iVar3;
    param_1[5] = iVar1;
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x82f9a88c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (**(int (***)())(*param_1 + 0x14))(param_1,param_3,param_4);
  return uVar6;
}

