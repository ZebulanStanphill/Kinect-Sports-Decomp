extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82E06B90();
extern int fn_82E06BF8();


void fn_82E083F8(int param_1,int *param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int in_r0;
  int iVar6;
  int iVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  int iVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    iVar6 = fn_82E06B90(iVar1 + 0x5c,1,0);
    uVar2 = *(unsigned int *)(iVar1 + 0x44);
    uVar9 = (unsigned __int64)uVar2;
    if ((iVar6 != 0) && (0 < (int)uVar2)) {
      iVar7 = fn_82E06BF8(iVar1,iVar6);
      uVar3 = param_2[1];
      iVar1 = *(int *)(iVar6 + 8);
      lVar10 = uVar3 + uVar9;
      iVar6 = fn_82CE5410();
      iVar11 = (int)lVar10;
      if ((int)(param_2[2] & 0x3fffffffU) < iVar11) {
        lVar8 = ((unsigned __int64)(unsigned int)param_2[2] & 0x3fffffff) << 1;
        if ((int)lVar8 <= iVar11) {
          lVar8 = lVar10;
        }
        fn_82CE6310(*(unsigned int *)(iVar6 + 0x10),param_2,lVar8,0x10);
      }
      param_2[1] = iVar11;
      if (0 < (int)uVar2) {
        iVar6 = uVar3 << 4;
        do {
          puVar4 = (unsigned int *)(in_r0 + iVar7 & 0xfffffff0);
          uVar12 = puVar4[1];
          uVar13 = puVar4[2];
          uVar14 = puVar4[3];
          iVar7 = iVar1 + iVar7;
          puVar5 = (unsigned int *)(iVar6 + *param_2 & 0xfffffff0);
          *puVar5 = *puVar4;
          puVar5[1] = uVar12;
          puVar5[2] = uVar13;
          puVar5[3] = uVar14;
          iVar6 = iVar6 + 0x10;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
  }
  return;
}

