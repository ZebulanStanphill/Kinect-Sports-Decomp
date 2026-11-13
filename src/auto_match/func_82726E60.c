typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_70;
extern unsigned int *auStack_a0;
extern int fn_8267BF50();
extern int fn_826FDED0();
extern int fn_826FDF58();
extern int fn_82726AB8();
extern int fn_8278D3F0();
extern int fn_82797348();
extern int fn_82797D20();
extern int fn_82799DA8();
extern int fn_827A7E68();


void fn_82726E60(int param_1,unsigned int param_2,int param_3,int *param_4)

{
  int *piVar1;
  bool bVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned int *puVar11;
  unsigned char auStack_a0 [48];
  unsigned char auStack_70 [112];
  
  piVar1 = *(int **)(param_1 + 0xd0);
  if ((piVar1 == (int *)0x0) || (bVar2 = true, *piVar1 == 0)) {
    bVar2 = false;
  }
  if (!bVar2) {
    return;
  }
  uVar9 = 0;
  if (param_2 == 0) {
    iVar8 = (param_3 + 2) * 8;
    if (piVar1[(param_3 + 2) * 2] == 0) {
      uVar5 = 0;
      if (piVar1[2] == 0) {
        return;
      }
      iVar6 = 0;
      while( true ) {
        iVar7 = *(int *)(iVar6 + piVar1[1]);
        if ((*param_4 + param_4[1] + -1 < iVar7) ||
           (bVar2 = true, *(int *)(iVar6 + piVar1[1] + 4) + iVar7 + -1 < *param_4)) {
          bVar2 = false;
        }
        if (bVar2) break;
        uVar5 = uVar5 + 1;
        iVar6 = iVar6 + 0x14;
        if ((unsigned int)piVar1[2] <= uVar5) {
          return;
        }
      }
      iVar6 = *(int *)(*(int *)(param_1 + 0xd0) + 4);
      *(unsigned int *)(iVar8 + *(int *)(param_1 + 0xd0)) = uVar5 + 1;
      puVar11 = (unsigned int *)(iVar6 + uVar5 * 0x14);
      *(unsigned char *)(param_3 * 8 + *(int *)(param_1 + 0xd0) + 0x15) = 1;
    }
    else {
      if (*(char *)((int)piVar1 + param_3 * 8 + 0x15) != '\0') {
        return;
      }
      *(unsigned char *)(param_3 * 8 + *(int *)(param_1 + 0xd0) + 0x15) = 1;
      iVar8 = *(int *)(iVar8 + *(int *)(param_1 + 0xd0)) * 0x14 +
              *(int *)(*(int *)(param_1 + 0xd0) + 4);
      puVar11 = (unsigned int *)(iVar8 + -0x14);
      if (*(int *)(iVar8 + -8) != 0) {
        *(int *)(iVar8 + -8) = *(int *)(iVar8 + -8) + 1;
        return;
      }
    }
    if (puVar11 == (unsigned int *)0x0) {
      return;
    }
    uVar5 = puVar11[3];
    puVar11[3] = uVar5 + 1;
    if (uVar5 != 0) {
      return;
    }
LAB_82727240:
    uVar9 = 0xffffffff820110d4;
  }
  else {
    if (param_2 == 1) {
      iVar8 = (param_3 + 2) * 8;
      if (piVar1[(param_3 + 2) * 2] == 0) {
        return;
      }
      param_3 = param_3 * 8;
      if (*(char *)((int)piVar1 + param_3 + 0x15) == '\0') {
        return;
      }
      *(unsigned char *)(param_3 + *(int *)(param_1 + 0xd0) + 0x15) = 0;
      iVar6 = *(int *)(iVar8 + *(int *)(param_1 + 0xd0));
      if (*(char *)(param_3 + *(int *)(param_1 + 0xd0) + 0x14) == '\0') {
        *(unsigned int *)(iVar8 + *(int *)(param_1 + 0xd0)) = 0;
      }
      puVar11 = (unsigned int *)((iVar6 + -1) * 0x14 + *(int *)(*(int *)(param_1 + 0xd0) + 4));
      uVar5 = puVar11[3];
      if (uVar5 == 0) goto LAB_82727248;
      puVar11[3] = uVar5 - 1;
      if (uVar5 != 1) {
        return;
      }
      if (puVar11[4] == 0) goto LAB_82727248;
    }
    else {
      if (2 < param_2) {
        if (param_2 != 3) {
          return;
        }
        iVar8 = (param_3 + 2) * 8;
        if (piVar1[(param_3 + 2) * 2] == 0) {
          return;
        }
        if (*(char *)(piVar1 + param_3 * 2 + 5) == '\0') {
          return;
        }
        *(unsigned char *)(param_3 * 8 + *(int *)(param_1 + 0xd0) + 0x14) = 0;
        iVar6 = *(int *)(param_1 + 0xd0);
        iVar7 = *(int *)(iVar6 + iVar8) * 0x14 + *(int *)(iVar6 + 4);
        puVar11 = (unsigned int *)(iVar7 + -0x14);
        if (*(char *)(iVar6 + param_3 * 8 + 0x15) == '\0') {
          *(unsigned int *)(iVar8 + *(int *)(param_1 + 0xd0)) = 0;
        }
        iVar8 = *(int *)(iVar7 + -4);
        if (iVar8 == 0) goto LAB_82727248;
        *(int *)(iVar7 + -4) = iVar8 + -1;
        if (iVar8 != 1) {
          return;
        }
        if (*(int *)(iVar7 + -8) == 0) goto LAB_82727248;
        goto LAB_82727240;
      }
      iVar8 = (param_3 + 2) * 8;
      if (piVar1[(param_3 + 2) * 2] == 0) {
        uVar5 = 0;
        if (piVar1[2] == 0) {
          return;
        }
        iVar6 = 0;
        while( true ) {
          iVar7 = *(int *)(iVar6 + piVar1[1]);
          if ((*param_4 + param_4[1] + -1 < iVar7) ||
             (bVar2 = true, *(int *)(iVar6 + piVar1[1] + 4) + iVar7 + -1 < *param_4)) {
            bVar2 = false;
          }
          if (bVar2) break;
          uVar5 = uVar5 + 1;
          iVar6 = iVar6 + 0x14;
          if ((unsigned int)piVar1[2] <= uVar5) {
            return;
          }
        }
        iVar6 = *(int *)(*(int *)(param_1 + 0xd0) + 4);
        *(unsigned int *)(iVar8 + *(int *)(param_1 + 0xd0)) = uVar5 + 1;
        puVar11 = (unsigned int *)(iVar6 + uVar5 * 0x14);
        *(unsigned char *)(param_3 * 8 + *(int *)(param_1 + 0xd0) + 0x14) = 1;
      }
      else {
        if (*(char *)(piVar1 + param_3 * 2 + 5) != '\0') {
          return;
        }
        *(unsigned char *)(param_3 * 8 + *(int *)(param_1 + 0xd0) + 0x14) = 1;
        iVar8 = *(int *)(*(int *)(param_1 + 0xd0) + iVar8) * 0x14 +
                *(int *)(*(int *)(param_1 + 0xd0) + 4);
        puVar11 = (unsigned int *)(iVar8 + -0x14);
        if (*(int *)(iVar8 + -4) != 0) {
          *(int *)(iVar8 + -4) = *(int *)(iVar8 + -4) + 1;
          return;
        }
      }
      if (puVar11 == (unsigned int *)0x0) {
        return;
      }
      if (puVar11[3] != 0) {
        return;
      }
      uVar5 = puVar11[4];
      puVar11[4] = uVar5 + 1;
      if (uVar5 != 0) {
        return;
      }
    }
    uVar9 = 0xffffffff820110e0;
  }
LAB_82727248:
  if (puVar11[2] != 0) {
    uVar10 = (unsigned __int64)*puVar11;
    fn_82797D20(*(unsigned int *)(*(int *)(param_1 + 0xa0) + 8),uVar10,
                      -(unsigned __int64)(uVar10 <= puVar11[1] + uVar10) & (puVar11[1] + uVar10) - uVar10);
    fn_82797348(*(unsigned int *)(*(int *)(param_1 + 0xa0) + 8),puVar11[2],uVar10,
                      0xffffffffffffffff);
  }
  if (((uVar9 & 0xffffffff) != 0) &&
     (lVar3 = fn_827A7E68((unsigned __int64)**(unsigned int **)(param_1 + 0xd0) + 0x30,0,uVar9,
                                0xffffffffffffffff), lVar3 != 0)) {
    uVar9 = fn_827A7E68((unsigned __int64)**(unsigned int **)(param_1 + 0xd0) + 0x30,0,0xffffffff8200befc,
                              0xffffffffffffffff);
    uVar10 = fn_827A7E68((unsigned __int64)**(unsigned int **)(param_1 + 0xd0) + 0x30,0,0xffffffff820110cc,
                               0xffffffffffffffff);
    uVar4 = fn_8267BF50(param_1);
    fn_826FDED0(auStack_a0,uVar4);
    if ((uVar9 & 0xffffffff) != 0) {
      uVar4 = fn_8278D3F0(auStack_70,auStack_a0,uVar9);
      fn_82726AB8(auStack_a0,uVar4);
      fn_826FDF58(auStack_70);
    }
    if ((uVar10 & 0xffffffff) != 0) {
      uVar4 = fn_8278D3F0(auStack_70,auStack_a0,uVar10);
      fn_82726AB8(auStack_a0,uVar4);
      fn_826FDF58(auStack_70);
    }
    uVar4 = fn_8278D3F0(auStack_70,auStack_a0,lVar3);
    fn_82726AB8(auStack_a0,uVar4);
    fn_826FDF58(auStack_70);
    fn_82799DA8(*(unsigned int *)(param_1 + 0xa0),auStack_a0,(unsigned __int64)*puVar11,
                      (unsigned __int64)puVar11[1] + (unsigned __int64)*puVar11);
    fn_826FDF58(auStack_a0);
  }
  return;
}

