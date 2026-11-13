typedef unsigned char bool;
extern int fn_829EFEF8();
extern int fn_829F12C8();
extern int fn_829F1578();
extern int fn_82F4D998();
extern int fn_82F4DA20();
extern int fn_82F4EC48();
extern int fn_82F52800();


void fn_8227D540(int param_1)

{
  int *piVar1;
  bool bVar2;
  __int64 lVar3;
  int iVar7;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int iVar8;
  int iVar9;
  unsigned __int64 uVar6;
  unsigned __int64 uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int *puVar13;
  int iVar14;
  int *piVar15;
  
  lVar3 = fn_82F4EC48();
  if (lVar3 != 0) {
    iVar7 = fn_82F4DA20(0);
    uVar4 = fn_82F4D998(1);
    uVar5 = fn_82F4D998(0);
    uVar12 = 0;
    puVar13 = (unsigned int *)(param_1 + 0x840);
    iVar14 = param_1;
    do {
      iVar8 = fn_82F4DA20(0);
      iVar9 = fn_82F4DA20(2);
      uVar10 = 0;
      piVar15 = (int *)(iVar8 + 0x34);
      do {
        if (*piVar15 == *(int *)(uVar12 + iVar9 + 0x34)) goto LAB_8227d5d0;
        uVar10 = uVar10 + 1;
        piVar15 = piVar15 + 0x70;
      } while ((uVar10 & 0xffffffff) < 6);
      uVar10 = 0xffffffffffffffff;
LAB_8227d5d0:
      bVar2 = *(int *)((int)uVar10 * 0x1c0 + iVar7 + 0x30) == 2;
      *puVar13 = (unsigned int)bVar2;
      if (((uVar4 & 0xffffffff) == 0) || (uVar11 = 1, (uVar5 & 0xffffffff) == 0)) {
        uVar11 = 0;
      }
      uVar11 = bVar2 & uVar11;
      *puVar13 = uVar11;
      if (uVar11 != 0) {
        fn_829EFEF8(iVar14,uVar10,iVar7,uVar5,0,uVar4,0);
        for (piVar15 = *(int **)(param_1 + 0x848); piVar15 != *(int **)(param_1 + 0x84c);
            piVar15 = piVar15 + 1) {
          piVar1 = (int *)*piVar15;
          iVar8 = *piVar1;
          if (iVar8 != 0) {
            fn_829F12C8(iVar8,iVar14);
          }
          iVar8 = piVar1[1];
          if (iVar8 != 0) {
            fn_829F12C8(iVar8,iVar14);
          }
        }
        uVar6 = fn_82F52800(lVar3);
        fn_829F1578(iVar14,uVar6);
      }
      uVar12 = uVar12 + 0x1c0;
      puVar13 = puVar13 + 1;
      iVar14 = iVar14 + 0x420;
    } while (uVar12 < 0x380);
  }
  return;
}

