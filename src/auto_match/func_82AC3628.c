extern int fn_82AC3438();
extern int fn_82F68CC0();


unsigned __int64
fn_82AC3628(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,int param_6)

{
  unsigned char bVar1;
  unsigned __int64 uVar2;
  unsigned char *pbVar3;
  int iVar4;
  int iVar5;
  unsigned char abStack_40 [64];
  
  if (((param_5 & 0xffffffff) != 0) && (fn_82F68CC0(abStack_40,param_5,9), abStack_40[0] != 0x22))
  {
    pbVar3 = abStack_40;
    iVar5 = 0;
    do {
      iVar4 = iVar5;
      if (7 < iVar4) {
        return 0xffffffff80004005;
      }
      iVar5 = iVar4 + 1;
      *pbVar3 = pbVar3[1];
      pbVar3 = pbVar3 + 1;
    } while (*pbVar3 != 0x22);
    if (iVar5 < 9) {
      pbVar3 = abStack_40 + iVar4;
      for (iVar5 = 9 - iVar5; iVar5 != 0; iVar5 = iVar5 + -1) {
        pbVar3 = pbVar3 + 1;
        *pbVar3 = 0;
      }
    }
    iVar5 = 0;
    pbVar3 = abStack_40;
    do {
      bVar1 = *pbVar3;
      if (0x22 < bVar1) {
        return 0xffffffff80004005;
      }
      if (bVar1 == 0) {
        return 0xffffffff80004005;
      }
      if (bVar1 == 0x22) {
        if (-1 < iVar5) {
          iVar4 = iVar5 + 1;
          do {
            abStack_40[iVar5 + 1] = abStack_40[iVar5];
            iVar4 = iVar4 + -1;
            iVar5 = iVar5 + -1;
          } while (iVar4 != 0);
        }
        if (param_6 == 0) {
          return 0xffffffff80004005;
        }
        if (param_6 == 0x22) {
          return 0xffffffff80004005;
        }
        if (0x22 < param_6) {
          return 0xffffffff80004005;
        }
        abStack_40[0] = (unsigned char)param_6;
        uVar2 = fn_82AC3438(param_1,param_2,param_3,param_4,abStack_40);
        return uVar2;
      }
      iVar5 = iVar5 + 1;
      pbVar3 = pbVar3 + 1;
    } while (iVar5 < 8);
  }
  return 0xffffffff80004005;
}

