extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82250A18();
extern int fn_822B6908();
extern int fn_822C40E8();
extern int fn_82306C88();
extern int fn_82306E90();
extern unsigned int lbl_832975B0;


unsigned __int64 fn_82306B60(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int in_r0;
  int iVar6;
  unsigned __int64 uVar5;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned char auStack_40 [16];
  unsigned char auStack_30 [48];
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x10) + 0x20);
  piVar2 = (int *)*piVar1;
  if ((piVar2[1] - *piVar2 >> 2 == 0) || (piVar1 = (int *)piVar1[1], piVar1[1] - *piVar1 >> 2 == 0))
  {
    uVar5 = fn_82306E90(param_1,param_2,param_3);
    return uVar5;
  }
  iVar6 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar6 = fn_82250A18();
  }
  if (*(char *)(iVar6 + 4) != '\0') {
    iVar6 = fn_822B6908(auStack_40);
    puVar3 = (unsigned int *)(in_r0 + iVar6 & 0xfffffff0);
    uVar7 = puVar3[1];
    uVar8 = puVar3[2];
    uVar9 = puVar3[3];
    puVar4 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar7;
    puVar4[2] = uVar8;
    puVar4[3] = uVar9;
    *(unsigned int *)(param_3 + 0x20) = 0;
    if (((*(int *)(param_2 + 0x120) != 0) &&
        (iVar6 = *(int *)(param_1 + 0x10), *(int *)(iVar6 + 0x9a0) != 0)) &&
       (*(int *)(iVar6 + 0x9e0) != 0)) {
      puVar3 = (unsigned int *)(iVar6 + 0x9c0U & 0xfffffff0);
      uVar7 = puVar3[1];
      uVar8 = puVar3[2];
      uVar9 = puVar3[3];
      puVar4 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
      *puVar4 = *puVar3;
      puVar4[1] = uVar7;
      puVar4[2] = uVar8;
      puVar4[3] = uVar9;
      *(unsigned int *)(param_3 + 0x20) = 1;
    }
    iVar6 = fn_822C40E8(auStack_30,param_2,*(unsigned int *)(param_1 + 0x10),1);
    puVar3 = (unsigned int *)(in_r0 + iVar6 & 0xfffffff0);
    uVar7 = puVar3[1];
    uVar8 = puVar3[2];
    uVar9 = puVar3[3];
    puVar4 = (unsigned int *)(param_3 + 0x10U & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar7;
    puVar4[2] = uVar8;
    puVar4[3] = uVar9;
    return 1;
  }
  uVar5 = fn_82306C88(param_1,param_2,param_3);
  return uVar5;
}

