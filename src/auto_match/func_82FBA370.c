extern unsigned int lbl_8200D8A8;
extern unsigned int lbl_8200D8C4;
extern unsigned int lbl_82015BD8;
extern unsigned int lbl_82089FC0;
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_82FBA370(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar6;
  
  iVar5 = lbl_821AAD20;
  iVar4 = lbl_82089FC0;
  iVar3 = lbl_82015BD8;
  iVar2 = lbl_8200D8C4;
  iVar1 = lbl_8200D8A8;
  if ((param_4 & 0xffffffff) == 0) {
    param_1[1] = 4;
    param_1[2] = iVar5;
    *(unsigned char *)(param_1 + 5) = 1;
    param_1[3] = iVar3;
    param_1[4] = iVar2;
    param_1[6] = 6;
    param_1[7] = iVar5;
    *(unsigned char *)(param_1 + 10) = 1;
    param_1[8] = iVar1;
    param_1[0xb] = 5;
    param_1[9] = iVar2;
    *(unsigned char *)(param_1 + 0xf) = 1;
    param_1[0xc] = iVar5;
    *(unsigned char *)(param_1 + 0x11) = 1;
    param_1[0xd] = iVar4;
    *(unsigned char *)(param_1 + 0x12) = 1;
    param_1[0xe] = iVar2;
    *(unsigned char *)((int)param_1 + 0x49) = 1;
    param_1[0x10] = iVar5;
    *(unsigned char *)((int)param_1 + 0x4a) = 1;
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x82fba424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (**(int (***)())(*param_1 + 0x14))(param_1,param_3,param_4);
  return uVar6;
}

