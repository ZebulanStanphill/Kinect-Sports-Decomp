extern unsigned int *auStack_50;
extern int fn_822B6908();
extern int fn_822C40E8();
extern int fn_8288B760();


unsigned __int64 fn_823132B8(int param_1,int param_2,int param_3,int param_4)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned char auStack_50 [80];
  
  iVar5 = *(int *)(param_2 + 0x168);
  puVar1 = (unsigned int *)(in_r0 + param_2 + 0x80 & 0xfffffff0);
  uVar7 = puVar1[1];
  uVar8 = puVar1[2];
  uVar9 = puVar1[3];
  uVar6 = 0;
  puVar2 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar7;
  puVar2[2] = uVar8;
  puVar2[3] = uVar9;
  if (iVar5 == 0) {
    uVar3 = *(unsigned int *)(param_2 + 0x16c);
  }
  else {
    uVar3 = fn_8288B760();
    uVar3 = uVar3 & 0xff;
  }
  if (uVar3 == 0) {
    iVar4 = fn_822B6908(auStack_50,param_2);
    iVar5 = *(int *)(param_2 + 0x120);
    puVar1 = (unsigned int *)(in_r0 + iVar4 & 0xfffffff0);
    uVar7 = puVar1[1];
    uVar8 = puVar1[2];
    uVar9 = puVar1[3];
    puVar2 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    puVar2[2] = uVar8;
    puVar2[3] = uVar9;
    if (((iVar5 == 0) || (*(int *)(param_1 + 0x9a0) == 0)) || (*(int *)(param_1 + 0x9e0) == 0))
    goto LAB_823133b8;
    puVar1 = (unsigned int *)(param_1 + 0x9c0U & 0xfffffff0);
    uVar7 = *puVar1;
    uVar8 = puVar1[1];
    uVar9 = puVar1[2];
    uVar10 = puVar1[3];
LAB_823133b0:
    puVar1 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
  }
  else {
    iVar5 = *(int *)(param_2 + 0x24);
    if ((iVar5 == 0) || (*(int *)(iVar5 + 0x160) == 0)) {
      puVar1 = (unsigned int *)(in_r0 + param_2 + 0x80 & 0xfffffff0);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      uVar9 = puVar1[2];
      uVar10 = puVar1[3];
    }
    else {
      puVar1 = (unsigned int *)(iVar5 + 0x130U & 0xfffffff0);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      uVar9 = puVar1[2];
      uVar10 = puVar1[3];
    }
    iVar5 = *(int *)(param_2 + 0x120);
    puVar1 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
    if (iVar5 == 0) {
      if ((*(int *)(param_1 + 0xde4) != *(int *)(param_2 + 0x28)) ||
         (*(int *)(param_1 + 0xde0) != *(int *)(param_2 + 0x2c))) goto LAB_823133b8;
      puVar1 = (unsigned int *)(param_1 + 0xdc0U & 0xfffffff0);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      uVar9 = puVar1[2];
      uVar10 = puVar1[3];
      goto LAB_823133b0;
    }
  }
  uVar6 = 1;
LAB_823133b8:
  iVar5 = fn_822C40E8(auStack_50,param_2,param_1,0);
  puVar1 = (unsigned int *)(in_r0 + iVar5 & 0xfffffff0);
  uVar7 = puVar1[1];
  uVar8 = puVar1[2];
  uVar9 = puVar1[3];
  puVar2 = (unsigned int *)(in_r0 + param_4 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar7;
  puVar2[2] = uVar8;
  puVar2[3] = uVar9;
  return uVar6;
}

