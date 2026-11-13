typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c0;
extern int fn_822A3450();
extern int fn_822A34C8();
extern int fn_82415090();
extern int fn_82415228();
extern int fn_82526C70();
extern unsigned int lbl_821AA62C;
extern unsigned int lbl_821AA630;
extern unsigned int lbl_821AA634;


void fn_82426000(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  __int64 lVar3;
  char cVar4;
  unsigned __int64 uVar5;
  unsigned char *puVar6;
  unsigned char *puVar7;
  int iVar8;
  int *piVar9;
  bool bVar10;
  int iVar11;
  __int64 lVar12;
  int iVar13;
  unsigned __int64 uVar14;
  __int64 lVar15;
  unsigned __int64 uVar16;
  unsigned int uVar17;
  unsigned char auStack_c0 [32];
  unsigned char auStack_a0 [160];
  
  iVar8 = *(int *)(param_2 + 8);
  uVar16 = 1;
  iVar11 = 4;
  puVar7 = &lbl_821AA62C;
  lVar15 = 0;
  do {
    if (((*param_4 == 0) || (iVar1 = *(int *)(iVar11 + *(int *)(iVar8 + 4) + -4), iVar1 == 0)) ||
       (*(int *)(iVar1 + 4) == 0)) break;
    lVar12 = 0;
    if ((uVar16 & 0xffffffff) != 0) {
      iVar13 = 0;
      uVar14 = uVar16;
      do {
        lVar3 = fn_82415090(*(unsigned int *)(iVar13 + *(int *)(iVar8 + 4)));
        uVar14 = uVar14 - 1;
        lVar12 = lVar3 + lVar12;
        iVar13 = iVar13 + 4;
      } while (uVar14 != 0);
    }
    piVar2 = *(int **)(iVar1 + 4);
    iVar13 = piVar2[1];
    if ((piVar2 == (int *)0x0) || (bVar10 = true, *piVar2 != 10)) {
      bVar10 = false;
    }
    if (bVar10) {
      if ((int)lVar15 != (int)lVar12) {
        fn_822A34C8(*param_4,param_3,uVar16,lVar12);
      }
      uVar5 = 1;
      puVar6 = puVar7;
LAB_82426224:
      fn_822A3450(*param_4,param_3,uVar16,uVar5,puVar6,0);
    }
    else {
      if (*(int **)(iVar1 + 8) != (int *)0x0) {
        if ((piVar2 == (int *)0x0) || (bVar10 = true, **(int **)(iVar1 + 8) + *piVar2 != 10)) {
          bVar10 = false;
        }
        if (!bVar10) goto LAB_82426194;
        if ((int)lVar15 != (int)lVar12) {
          fn_822A34C8(*param_4,param_3,uVar16,lVar12);
        }
        if (*piVar2 == 0) {
          iVar13 = 0;
          puVar6 = &lbl_821AA634;
        }
        else {
          fn_82526C70(auStack_c0,0x20,0xffffffff821aa66c);
          puVar6 = auStack_c0;
        }
        fn_822A3450(*param_4,param_3,uVar16,1,puVar6,iVar13);
        puVar6 = &lbl_821AA630;
LAB_82426220:
        uVar5 = 2;
        goto LAB_82426224;
      }
LAB_82426194:
      fn_822A34C8(*param_4,param_3,uVar16,lVar12);
      if (*piVar2 == 0) {
        iVar13 = 0;
        puVar6 = &lbl_821AA634;
      }
      else {
        fn_82526C70(auStack_c0,0x20,0xffffffff821aa66c);
        puVar6 = auStack_c0;
      }
      fn_822A3450(*param_4,param_3,uVar16,1,puVar6,iVar13);
      if (*(int **)(iVar1 + 8) != (int *)0x0) {
        if (**(int **)(iVar1 + 8) == 0) {
          puVar6 = &lbl_821AA634;
        }
        else {
          fn_82526C70(auStack_a0,0x20,0xffffffff821aa66c);
          puVar6 = auStack_a0;
        }
        goto LAB_82426220;
      }
    }
    iVar11 = iVar11 + 4;
    uVar16 = uVar16 + 1;
    lVar15 = lVar12;
  } while (iVar11 < 0x25);
  iVar11 = *(int *)(iVar8 + 0x24);
  if (*param_4 == 0) {
    return;
  }
  if (iVar11 == 0) {
    return;
  }
  if (*(int *)(iVar11 + 4) == 0) {
    return;
  }
  lVar15 = 0;
  uVar17 = 0;
  do {
    lVar12 = fn_82415090(*(unsigned int *)(uVar17 + *(int *)(iVar8 + 4)));
    uVar17 = uVar17 + 4;
    lVar15 = lVar12 + lVar15;
  } while (uVar17 < 0x28);
  fn_822A34C8(*param_4,param_3,10,lVar15);
  piVar2 = *(int **)(iVar11 + 4);
  if ((piVar2 == (int *)0x0) || (bVar10 = true, *piVar2 != 10)) {
    bVar10 = false;
  }
  puVar6 = puVar7;
  if ((bVar10) || (iVar8 = piVar2[1], puVar6 = &lbl_821AA634, *piVar2 == 0)) {
    iVar8 = 0;
  }
  else {
    fn_82526C70(auStack_a0,0x20,0xffffffff821aa66c);
    puVar6 = auStack_a0;
  }
  fn_822A3450(*param_4,param_3,10,1,puVar6,iVar8);
  piVar2 = *(int **)(iVar11 + 8);
  if (piVar2 == (int *)0x0) {
    return;
  }
  iVar8 = piVar2[1];
  puVar6 = puVar7;
  if (*piVar2 == 10) {
LAB_82426348:
    iVar8 = 0;
  }
  else {
    if (((*(int **)(iVar11 + 4) == (int *)0x0) || (iVar1 = **(int **)(iVar11 + 4), iVar1 == 10)) ||
       (bVar10 = true, *piVar2 + iVar1 != 10)) {
      bVar10 = false;
    }
    puVar6 = &lbl_821AA630;
    if (bVar10) goto LAB_82426348;
    if (*piVar2 == 0) {
      puVar6 = &lbl_821AA634;
      goto LAB_82426348;
    }
    fn_82526C70(auStack_c0,0x20,0xffffffff821aa66c);
    puVar6 = auStack_c0;
  }
  fn_822A3450(*param_4,param_3,10,2,puVar6,iVar8);
  piVar2 = *(int **)(iVar11 + 8);
  if ((piVar2 == (int *)0x0) || (bVar10 = true, piVar2[2] == 0)) {
    bVar10 = false;
  }
  if (!bVar10) {
    return;
  }
  piVar9 = (int *)piVar2[2];
  iVar8 = piVar9[1];
  if (piVar2 == (int *)0x0) {
LAB_82426474:
    bVar10 = false;
  }
  else {
    if (*piVar2 != 10) {
      if (((*(int **)(iVar11 + 4) == (int *)0x0) || (iVar1 = **(int **)(iVar11 + 4), iVar1 == 10))
         || (bVar10 = true, *piVar2 + iVar1 != 10)) {
        bVar10 = false;
      }
      if (!bVar10) goto LAB_82426474;
    }
    if ((piVar9 == (int *)0x0) || (bVar10 = true, *piVar9 != 10)) goto LAB_82426474;
  }
  if ((!bVar10) && (cVar4 = fn_82415228(iVar11), puVar7 = &lbl_821AA630, cVar4 == '\0')) {
    if (*piVar9 != 0) {
      fn_82526C70(auStack_c0,0x20,0xffffffff821aa66c);
      puVar7 = auStack_c0;
      goto LAB_824264d0;
    }
    puVar7 = &lbl_821AA634;
  }
  iVar8 = 0;
LAB_824264d0:
  fn_822A3450(*param_4,param_3,10,3,puVar7,iVar8);
  return;
}

