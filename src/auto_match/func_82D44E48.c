extern unsigned int *auStack_60;
extern int fn_82D44CE0();


unsigned __int64 fn_82D44E48(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned short *puVar9;
  int iVar10;
  unsigned int auStack_60 [4];
  unsigned short *puVar6;
  
  uVar1 = *(unsigned int *)(param_1 + 0xc);
  uVar2 = *(unsigned int *)(param_1 + 0x14);
  uVar7 = (unsigned int)param_2 >> (uVar1 & 0x3f);
  param_2 = uVar2 & param_2;
  if (uVar7 == 0) {
    if ((int)(param_2 + 1) < *(int *)(param_1 + 0x60)) {
      return param_2 + 1;
    }
    uVar7 = 1;
    param_2 = 0xffffffffffffffff;
  }
  uVar8 = (1 << (0x20 - uVar1 & 0x3f)) - 1;
  if (uVar7 != uVar8) {
    iVar3 = *(int *)(param_1 + 0x6c);
    iVar10 = uVar7 - 1;
    if (iVar10 < iVar3) {
      iVar4 = *(int *)(param_1 + 0x68);
      puVar9 = (unsigned short *)(iVar10 * 0x50 + iVar4 + 0x44);
      do {
        auStack_60[0] = 0;
        if (*puVar9 == 0xffff) {
          puVar6 = puVar9 + -0x22;
        }
        else {
          puVar6 = (unsigned short *)((unsigned int)*puVar9 * 0x50 + iVar4);
        }
        uVar5 = fn_82D44CE0(puVar6,param_2,auStack_60);
        if (((int)uVar5 != -1) && ((int)uVar5 <= (int)uVar2)) {
          return (unsigned __int64)
                 ((auStack_60[0] & 1) << (*(unsigned int *)(param_1 + 8) & 0x3f) |
                 iVar10 + 1 << (uVar1 & 0x3f)) | *(unsigned int *)(param_1 + 0x10) & uVar5;
        }
        iVar10 = iVar10 + 1;
        param_2 = 0xffffffffffffffff;
        puVar9 = puVar9 + 0x28;
      } while (iVar10 < iVar3);
    }
  }
  if ((int)(param_2 + 1) < *(int *)(param_1 + 0x78)) {
    uVar5 = (unsigned __int64)(uVar8 << (uVar1 & 0x3f)) | param_2 + 1;
  }
  else {
    uVar5 = 0xffffffffffffffff;
  }
  return uVar5;
}

