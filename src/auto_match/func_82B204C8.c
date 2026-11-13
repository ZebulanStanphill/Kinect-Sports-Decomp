typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82ABDD90();
extern int fn_82AC68F0();
extern int fn_82B8F170();
extern int fn_82B8F328();


void fn_82B204C8(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  bool bVar7;
  unsigned int uVar8;
  int iVar9;
  unsigned int *puVar10;
  unsigned int uVar11;
  int *piVar12;
  
  uVar8 = fn_82AC68F0();
  puVar5 = (unsigned int *)(param_2[1] & 0xfffffffe);
  puVar10 = (unsigned int *)(uVar8 & 0xfffffffe);
  uVar11 = 0;
  *puVar10 = *puVar5;
  *(unsigned int **)(*puVar5 & 0xfffffffe) = puVar10;
  puVar10[1] = (unsigned int)puVar5;
  *puVar5 = (unsigned int)(puVar10 + 1);
  uVar1 = ((int)param_2 - *(int *)(param_1 + 0x268)) / 0x44;
  *(unsigned int *)(uVar8 + 0x54) = *(unsigned int *)(param_2[1] + 0x54);
  uVar6 = uVar1 & 0x1f;
  iVar4 = ((uVar1 >> 5) + 0x15) * 4;
  *(unsigned int *)(iVar4 + uVar8) = *(unsigned int *)(iVar4 + uVar8) & ~(1 << uVar6);
  piVar12 = (int *)(param_2[1] + 8);
  iVar2 = *(int *)(param_2[1] + 8);
  while (iVar2 != 0) {
    iVar9 = *(int *)(iVar2 + 4);
    if ((*(unsigned int *)(iVar4 + iVar9) >> uVar6 & 1) == 0) {
      uVar1 = *(unsigned int *)(iVar9 + 0x44) & 0xfffffff;
      if (uVar11 < uVar1) {
        uVar11 = uVar1;
      }
      fn_82B8F170(iVar9,iVar2,uVar8);
      for (uVar1 = *(unsigned int *)(iVar9 + 0x24); ((uVar1 & 1) == 0 && (uVar1 != 0));
          uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 0x28)) {
        uVar3 = *(unsigned int *)(uVar1 + 8) >> 7 & 0x7f;
        if (((uVar3 == 0x56) || (((uVar3 == 0x57 || (uVar3 == 0x59)) || (uVar3 == 0x5a)))) ||
           ((uVar3 == 0x54 || (bVar7 = false, uVar3 == 0x55)))) {
          bVar7 = true;
        }
        if (bVar7) {
          uVar3 = *(unsigned int *)(uVar1 + 8);
          iVar9 = fn_82ABDD90(param_1,uVar3 >> 7 & 0x7f,uVar3 >> 0x13 & 7,uVar3 >> 0xe & 7);
          puVar10 = (unsigned int *)(iVar9 + (uVar1 - 0x10));
          if (*puVar10 == param_2[1]) {
            *puVar10 = uVar8;
          }
        }
      }
    }
    if (*piVar12 == iVar2) {
      piVar12 = (int *)(iVar2 + 0xc);
    }
    iVar2 = *piVar12;
  }
  fn_82B8F328(uVar8,param_2[1],param_1);
  *(unsigned int *)(uVar8 + 0x44) = *(unsigned int *)(uVar8 + 0x44) & 0xf0000000 | uVar11;
  *(unsigned int *)(uVar8 + 0x4c) = param_2[0xf] >> 0xc & 0x7ffff | *(unsigned int *)(uVar8 + 0x4c) & 0xfff80000;
  *param_2 = uVar8;
  return;
}

