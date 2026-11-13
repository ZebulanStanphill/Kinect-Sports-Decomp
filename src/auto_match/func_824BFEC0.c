extern unsigned int *auStack_80;
extern int fn_82F68CC0();


void fn_824BFEC0(unsigned __int64 param_1,int param_2,unsigned int param_3)

{
  int iVar1;
  int iVar2;
  __int64 lVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned char auStack_80 [128];
  
  iVar2 = (param_2 - (int)param_1) / 0x28;
  lVar8 = (__int64)iVar2;
  iVar1 = (int)(param_3 - (int)param_1) / 0x28;
  lVar4 = (__int64)iVar1;
  lVar3 = lVar8;
  lVar6 = lVar4;
  if (iVar2 != 0) {
    do {
      lVar4 = lVar3;
      lVar3 = lVar6 - (__int64)((int)lVar6 / (int)lVar4) * (__int64)(int)lVar4;
      lVar6 = lVar4;
    } while (lVar3 != 0);
  }
  if (((int)lVar4 < iVar1) && (0 < (int)lVar4)) {
    uVar5 = lVar4 * 0x28 + param_1;
    do {
      uVar9 = uVar5 + lVar8 * 0x28;
      uVar7 = uVar5;
      if ((uVar9 & 0xffffffff) == (unsigned __int64)param_3) {
        uVar9 = param_1;
      }
      do {
        fn_82F68CC0(auStack_80,uVar7,0x28);
        fn_82F68CC0(uVar7,uVar9,0x28);
        fn_82F68CC0(uVar9,auStack_80,0x28);
        iVar1 = (int)(param_3 - (int)uVar9) / 0x28;
        if (iVar2 < iVar1) {
          uVar10 = lVar8 * 0x28 + uVar9;
        }
        else {
          uVar10 = (lVar8 - iVar1) * 0x28 + param_1;
        }
        uVar7 = uVar9;
        uVar9 = uVar10;
      } while ((uVar10 & 0xffffffff) != (uVar5 & 0xffffffff));
      lVar4 = lVar4 + -1;
      uVar5 = uVar5 - 0x28;
    } while (0 < lVar4);
  }
  return;
}

