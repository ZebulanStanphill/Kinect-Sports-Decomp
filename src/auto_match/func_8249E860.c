typedef unsigned char bool;
typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_40;
extern int fn_82F4DA20();
extern int fn_82F4EBE8();
extern int fn_82F4ECF8();
extern int fn_82F50D98();
extern int fn_82F52188();
extern V16 vectorCompareEqualToFloatingPoint();


void fn_8249E860(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int *puVar3;
  int in_r0;
  int *piVar5;
  int iVar6;
  int iVar7;
  unsigned __int64 uVar4;
  unsigned char bVar8;
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned char auStack_40 [64];
  
  if (*(int *)(*(int *)(param_1 + 0xc) + 0x20) < 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)fn_82F4EBE8();
  }
  bVar8 = 0;
  if ((piVar5 != (int *)0x0) && (iVar6 = (**(int (***)())(*piVar5 + 4))(piVar5), iVar6 != 0)) {
    fn_82F52188(auStack_40,piVar5,1);
    puVar1 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
    uVar9 = *puVar1;
    uVar10 = puVar1[1];
    uVar11 = puVar1[2];
    uVar12 = puVar1[3];
    vectorCompareEqualToFloatingPoint(in_vs44,in_vs45);
    if (!(bool)(bVar8 >> 3 & 1)) {
      *(unsigned int *)(param_1 + 0x18) = 1;
      puVar1 = (unsigned int *)(param_1 + 0x40U & 0xfffffff0);
      *puVar1 = uVar9;
      puVar1[1] = uVar10;
      puVar1[2] = uVar11;
      puVar1[3] = uVar12;
      iVar6 = fn_82F4DA20(2);
      fn_82F50D98(piVar5);
      iVar7 = fn_82F4ECF8();
      *(unsigned int *)(param_1 + 0xc0) = *(unsigned int *)(iVar7 * 0x1c0 + iVar6 + 0x34);
    }
  }
  if (*(int *)(param_1 + 200) < 2) goto LAB_8249ea80;
  if (*(int *)(*(int *)(param_1 + 4) + 0x20) < 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = fn_82F4EBE8();
  }
  if (iVar6 == 0) goto LAB_8249ea80;
  if (*(int *)(*(int *)(param_1 + 8) + 0x20) < 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = fn_82F4EBE8();
  }
  if (iVar6 == 0) goto LAB_8249ea80;
  iVar6 = *(int *)(*(int *)(param_1 + 4) + 0x20);
  iVar7 = *(int *)(*(int *)(param_1 + 8) + 0x20);
  *(unsigned int *)(param_1 + 0x1c) = 0;
  if (iVar6 < 0) {
    return;
  }
  if (1 < iVar6) {
    return;
  }
  if (iVar7 < 0) {
    return;
  }
  if (1 < iVar7) {
    return;
  }
  *(unsigned int *)(param_1 + 0x1c) = 1;
  iVar2 = iVar6 * 0x1c + param_1;
  if (*(int *)(iVar2 + 0x104) == 0) {
    if (*(int *)(*(int *)(param_1 + 4) + 0x20) < 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = fn_82F4EBE8();
    }
    iVar6 = fn_82F52188(auStack_40,uVar4,1);
    puVar1 = (unsigned int *)(in_r0 + iVar6 & 0xfffffff0);
    uVar9 = *puVar1;
    uVar10 = puVar1[1];
    uVar11 = puVar1[2];
    uVar12 = puVar1[3];
LAB_8249ea0c:
    puVar1 = (unsigned int *)(param_1 + 0x50U & 0xfffffff0);
    *puVar1 = uVar9;
    puVar1[1] = uVar10;
    puVar1[2] = uVar11;
    puVar1[3] = uVar12;
  }
  else {
    if (*(int *)(iVar2 + 0x108) != 0) {
      puVar1 = (unsigned int *)((iVar6 + 9) * 0x10 + param_1 & 0xfffffff0);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      uVar11 = puVar1[2];
      uVar12 = puVar1[3];
      goto LAB_8249ea0c;
    }
    *(unsigned int *)(param_1 + 0x1c) = 0;
  }
  iVar6 = iVar7 * 0x1c + param_1;
  if (*(int *)(iVar6 + 0x104) == 0) {
    if (*(int *)(*(int *)(param_1 + 8) + 0x20) < 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = fn_82F4EBE8();
    }
    iVar6 = fn_82F52188(auStack_40,uVar4,1);
    puVar1 = (unsigned int *)(in_r0 + iVar6 & 0xfffffff0);
    uVar9 = puVar1[1];
    uVar10 = puVar1[2];
    uVar11 = puVar1[3];
    puVar3 = (unsigned int *)(param_1 + 0x60U & 0xfffffff0);
    *puVar3 = *puVar1;
    puVar3[1] = uVar9;
    puVar3[2] = uVar10;
    puVar3[3] = uVar11;
    return;
  }
  if (*(int *)(iVar6 + 0x108) != 0) {
    puVar1 = (unsigned int *)((iVar7 + 9) * 0x10 + param_1 & 0xfffffff0);
    uVar9 = puVar1[1];
    uVar10 = puVar1[2];
    uVar11 = puVar1[3];
    puVar3 = (unsigned int *)(param_1 + 0x50U & 0xfffffff0);
    *puVar3 = *puVar1;
    puVar3[1] = uVar9;
    puVar3[2] = uVar10;
    puVar3[3] = uVar11;
    return;
  }
LAB_8249ea80:
  *(unsigned int *)(param_1 + 0x1c) = 0;
  return;
}

