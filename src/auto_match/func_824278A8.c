typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_160;
extern int fn_82427540();
extern int fn_824276D0();
extern int fn_824277D8();
extern int fn_82508078();
extern int fn_82526C70();
extern int fn_82536690();
extern int fn_8265CA20();
extern unsigned int lbl_83265A28;
extern unsigned int uStack_168;


void fn_824278A8(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  bool bVar3;
  bool bVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  int iVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  unsigned int uVar11;
  int iVar12;
  unsigned int uVar13;
  unsigned int *puVar14;
  unsigned int *puStack_170;
  unsigned int *puStack_16c;
  unsigned int uStack_168;
  unsigned char auStack_160 [352];
  
  iVar8 = *(int *)(param_1 + 4);
  uVar13 = 0;
  iVar12 = *(int *)(iVar8 + 0x18) * 0x1ac + *(int *)(iVar8 + 8);
  if (((*(int *)(iVar8 + 0xc) - *(int *)(iVar8 + 8)) / 0x1ac != 1) ||
     (bVar4 = true, *(int *)(iVar12 + 4) == 0)) {
    bVar4 = false;
  }
  bVar3 = true;
  uVar11 = *(int *)(iVar12 + 0x40) - 1;
  if (bVar4) {
    return;
  }
  puStack_170 = (unsigned int *)0x0;
  puStack_16c = (unsigned int *)0x0;
  uStack_168 = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xc);
  for (iVar8 = *(int *)(*(int *)(param_1 + 4) + 8); iVar8 != iVar1; iVar8 = iVar8 + 0x1ac) {
    if (*(int *)(iVar8 + 8) != *(int *)(iVar12 + 8)) {
      fn_82536690(&puStack_170,iVar8 + 8);
      bVar3 = (bool)(*(int *)(iVar12 + 0x40) == *(int *)(iVar8 + 0x40) & bVar3);
    }
  }
  if (5 < uVar11) {
    uVar2 = **(unsigned int **)(iVar12 + 8);
    uVar6 = fn_82427540(*(unsigned int **)(iVar12 + 8),uVar2);
    puVar5 = puStack_16c;
    iVar8 = 0;
    for (puVar14 = puStack_170; puVar14 != puVar5; puVar14 = puVar14 + 1) {
      uVar7 = fn_82427540(*puVar14,uVar2);
      if ((uVar6 < uVar7) && (iVar8 = iVar8 + 1, uVar13 < uVar7)) {
        uVar13 = uVar7;
      }
    }
    if (((iVar8 == 1) && (uVar13 < uVar6)) &&
       (*(int *)(param_1 + 4) == *(int *)(*(int *)(param_1 + 8) + 0x2b20))) {
      fn_82508078(*(unsigned int *)(*(int *)(param_1 + 8) + 0xa4),0xffffffff821b88c4,0);
    }
    iVar8 = fn_824276D0(*(unsigned int *)(iVar12 + 8),&puStack_170,
                          *(unsigned int *)(*(int *)(param_1 + 8) + 0xb4c));
    if ((iVar8 != 0) && (*(int *)(param_1 + 4) == *(int *)(*(int *)(param_1 + 8) + 0x2b20))) {
      fn_82508078(*(unsigned int *)(*(int *)(param_1 + 8) + 0xa4),0xffffffff821b88e0,0);
    }
  }
  if (uVar11 < 3) goto LAB_82427bd0;
  if (((*(int *)(iVar12 + 4) != 0) &&
      (iVar8 = fn_824277D8(*(unsigned int *)(iVar12 + 8),&puStack_170,1,1), iVar8 != 0)) &&
     (*(int *)(param_1 + 4) == *(int *)(*(int *)(param_1 + 8) + 0x2b20))) {
    fn_82508078(*(unsigned int *)(*(int *)(param_1 + 8) + 0xa4),0xffffffff821b8900,0);
  }
  if ((*(int *)(iVar12 + 4) == 0) ||
     (iVar8 = fn_824277D8(*(unsigned int *)(iVar12 + 8),&puStack_170,1,1), iVar8 == 0)) {
    iVar8 = fn_824277D8(*(unsigned int *)(iVar12 + 8),&puStack_170,1,0);
    if (iVar8 == 0) {
      iVar8 = fn_824277D8(*(unsigned int *)(iVar12 + 8),&puStack_170,0,1);
      if (iVar8 == 0) goto LAB_82427bd0;
      lVar10 = (__int64)lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      lbl_83265A28 = (int)lVar10;
      if (lVar10 < 1) {
        uVar9 = 0xffffffff821b8980;
      }
      else {
        uVar9 = 0xffffffff821b8964;
      }
      iVar8 = *(int *)(param_1 + 8);
      if (*(int *)(param_1 + 4) != *(int *)(iVar8 + 0x2b20)) goto LAB_82427bd0;
    }
    else {
      if ((5 < uVar11) && (*(int *)(param_1 + 4) == *(int *)(*(int *)(param_1 + 8) + 0x2b20))) {
        fn_82508078(*(unsigned int *)(*(int *)(param_1 + 8) + 0xa4),0xffffffff821b8930,0);
      }
      iVar8 = *(int *)(param_1 + 8);
      if (*(int *)(param_1 + 4) != *(int *)(iVar8 + 0x2b20)) goto LAB_82427bd0;
      uVar9 = 0xffffffff821b894c;
    }
  }
  else {
    iVar8 = *(int *)(param_1 + 8);
    if (*(int *)(param_1 + 4) != *(int *)(iVar8 + 0x2b20)) goto LAB_82427bd0;
    uVar9 = 0xffffffff821b8918;
  }
  fn_82508078(*(unsigned int *)(iVar8 + 0xa4),uVar9,0);
LAB_82427bd0:
  if (((bVar3) && (*(unsigned int *)(iVar12 + 0x40) != 0)) && (*(unsigned int *)(iVar12 + 0x40) < 0xb)) {
    fn_82526C70(auStack_160,0x100,0xffffffff821b8998);
    if (*(int *)(param_1 + 4) == *(int *)(*(int *)(param_1 + 8) + 0x2b20)) {
      fn_82508078(*(unsigned int *)(*(int *)(param_1 + 8) + 0xa4),auStack_160,0);
    }
  }
  if (*(int *)(param_1 + 4) == *(int *)(*(int *)(param_1 + 8) + 0x2b20)) {
    fn_82508078(*(unsigned int *)(*(int *)(param_1 + 8) + 0xa4),0xffffffff821b89ac,0);
  }
  if (puStack_170 != (unsigned int *)0x0) {
    fn_8265CA20();
  }
  return;
}

