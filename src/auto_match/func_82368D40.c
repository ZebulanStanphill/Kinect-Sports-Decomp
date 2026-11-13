void fn_82368D40(int param_1,int param_2,int param_3,unsigned int *param_4)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  
  if (param_2 != 0) {
    puVar2 = (unsigned int *)(*(int *)(param_1 + 0xe10) + 0x50U & 0xfffffff0);
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    puVar3 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar4;
    puVar3[2] = uVar5;
    puVar3[3] = uVar6;
  }
  if (param_3 != 0) {
    puVar2 = (unsigned int *)(*(int *)(param_1 + 0xe10) + 0xbd0U & 0xfffffff0);
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    puVar3 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar4;
    puVar3[2] = uVar5;
    puVar3[3] = uVar6;
  }
  if (param_4 == (unsigned int *)0x0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0xe10);
  if (*(char *)(iVar1 + 0xbb1) == '\0') {
    uVar4 = *(unsigned int *)(iVar1 + 0xb64);
  }
  else {
    uVar4 = *(unsigned int *)(iVar1 + 0xba4);
  }
  *param_4 = uVar4;
  return;
}

