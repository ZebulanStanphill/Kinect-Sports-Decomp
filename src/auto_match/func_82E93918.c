extern int fn_82F004D8();
extern unsigned int lbl_8215F730;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82E93918(int param_1,int param_2,unsigned __int64 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x7824);
  iVar2 = *(int *)(param_1 + 0x7820);
  param_5 = (iVar2 - (int)(((double)(__int64)param_4 * lbl_8215F730) / (double)(__int64)param_2))
            + param_5;
  iVar3 = param_5 + 9;
  *(int *)(param_1 + 0x7820) = iVar3;
  if (iVar3 == iVar2) {
    *(int *)(param_1 + 0x7820) = param_5 + 10;
  }
  iVar3 = *(int *)(param_1 + 0x7820);
  if (8 < iVar3) {
    iVar3 = 8;
  }
  iVar4 = iVar3 + 2;
  *(int *)(param_1 + 0x7820) = iVar3;
  *(int *)(param_1 + 0x7824) = iVar4;
  if (8 < iVar4) {
    iVar4 = 8;
  }
  *(int *)(param_1 + 0x7824) = iVar4;
  *(int *)(param_1 + 0x2a0) = (*(int *)(param_1 + 0x2a0) - iVar3) + iVar2;
  if ((iVar3 != iVar2) || (iVar4 != iVar1)) {
    fn_82F004D8();
  }
  return;
}

