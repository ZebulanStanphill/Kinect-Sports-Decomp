extern unsigned int *auStack_60;
extern int fn_82951148();
extern int fn_829536C8();
extern unsigned int iStack_58;


unsigned __int64 fn_82957790(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar6;
  unsigned __int64 uVar5;
  unsigned int uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  unsigned char auStack_60 [8];
  int iStack_58;
  
  uVar1 = **(unsigned int **)(param_1 + 0x104);
  if ((uVar1 & 0xfff00000) == 0x70300000) {
    iVar2 = *(int *)(param_1 + 0x104);
    uVar3 = *(unsigned int *)(param_1 + 0x100);
    fn_829536C8(param_1,uVar1 & 0xfffff | 0x20500000,iVar2,auStack_60,2);
    if (iStack_58 != 0) {
      uVar7 = 0;
      if ((uVar1 & 0xfffff) != 0) {
        iVar8 = 0;
        do {
          if (*(int *)(((uVar1 & 0xfffff) * 2 + uVar7) * 4 + *(int *)(iVar2 + 8)) !=
              *(int *)(iVar8 + *(int *)(iStack_58 + 0x10))) {
            return 1;
          }
          uVar7 = uVar7 + 1;
          iVar8 = iVar8 + 4;
        } while (uVar7 < (uVar1 & 0xfffff));
      }
      iVar9 = (uVar1 & 0xfffff) * 4;
      iVar8 = *(int *)(iVar2 + 8);
      iVar4 = *(int *)(iStack_58 + 8);
      iVar10 = iVar9 + iVar8;
      iVar9 = iVar4 + iVar9;
      iVar6 = fn_82951148(param_1,iVar8,iVar10,iVar4,iVar9,iStack_58,iVar2,uVar3);
      if ((((iVar6 != 0) &&
           (iVar6 = fn_82951148(param_1,iVar10,iVar8,iVar4,iVar9,iStack_58,iVar2,uVar3),
           iVar6 != 0)) &&
          (iVar6 = fn_82951148(param_1,iVar8,iVar10,iVar9,iVar4,iStack_58,iVar2,uVar3), iVar6 != 0
          )) && (((iVar6 = fn_82951148(param_1,iVar10,iVar8,iVar9,iVar4,iStack_58,iVar2,uVar3),
                  iVar6 != 0 &&
                  (iVar6 = fn_82951148(param_1,iVar4,iVar9,iVar8,iVar10,iStack_58,iVar2,uVar3),
                  iVar6 != 0)) &&
                 ((iVar6 = fn_82951148(param_1,iVar9,iVar4,iVar8,iVar10,iStack_58,iVar2,uVar3),
                  iVar6 != 0 &&
                  (iVar6 = fn_82951148(param_1,iVar4,iVar9,iVar10,iVar8,iStack_58,iVar2,uVar3),
                  iVar6 != 0)))))) {
        uVar5 = fn_82951148(param_1,iVar9,iVar4,iVar10,iVar8,iStack_58,iVar2,uVar3);
        return uVar5;
      }
      return 0;
    }
  }
  return 1;
}

