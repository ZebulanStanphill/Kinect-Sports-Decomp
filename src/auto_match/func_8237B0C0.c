extern unsigned int *auStack_10;
extern unsigned int fStack_8;
extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_8237B0C0(int param_1,unsigned int param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  float fVar4;
  int in_r0;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned char auStack_10 [8];
  float fStack_8;
  
  fVar4 = ltcg_pool_0_0f;
  iVar1 = *(int *)(param_1 + 0x2168);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      puVar2 = (unsigned int *)(param_1 + 0x20U & 0xfffffff0);
      uVar5 = puVar2[1];
      uVar6 = puVar2[2];
      uVar7 = puVar2[3];
      puVar3 = (unsigned int *)((unsigned int)(auStack_10 + in_r0) & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar5;
      puVar3[2] = uVar6;
      puVar3[3] = uVar7;
      if (fVar4 <= fStack_8) goto LAB_8237b11c;
    }
    if (iVar1 != 2) {
      return 0;
    }
    puVar2 = (unsigned int *)(param_1 + 0x20U & 0xfffffff0);
    uVar5 = puVar2[1];
    uVar6 = puVar2[2];
    uVar7 = puVar2[3];
    puVar3 = (unsigned int *)((unsigned int)(auStack_10 + in_r0) & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    puVar3[2] = uVar6;
    puVar3[3] = uVar7;
    if (fVar4 <= fStack_8) {
      return 0;
    }
  }
LAB_8237b11c:
  if ((*(int *)(param_1 + 0xc0) != 0) && (*(int *)(param_1 + 0x216c) != 0)) {
    return 0;
  }
  *(unsigned int *)(param_1 + 0xa0) = param_2;
  *(unsigned int *)(param_1 + 0xdc) = 0;
  return 1;
}

