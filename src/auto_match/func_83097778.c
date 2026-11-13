extern int fn_8309AA78();


void fn_83097778(int param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar3;
  int iVar4;
  int in_r0;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  
  if (*(float *)(param_3 + 0x10) < *(float *)(param_1 + 0x20)) {
    puVar1 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    puVar2 = (unsigned int *)(in_r0 + param_1 + 0x10 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_3 + 0x10);
    *(unsigned int *)(param_1 + 0x24) = *(unsigned int *)(param_3 + 0x14);
    *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(param_3 + 0x18);
    *(unsigned int *)(param_1 + 0x2c) = *(unsigned int *)(param_3 + 0x1c);
    fn_8309AA78(param_1 + 0x30,8,param_2);
    iVar4 = *(int *)(param_2 + 0xc);
    while (iVar3 = iVar4, iVar3 != 0) {
      param_2 = iVar3;
      iVar4 = *(int *)(iVar3 + 0xc);
    }
    *(int *)(param_1 + 0x60) = param_2;
    *(unsigned int *)(param_1 + 4) = *(unsigned int *)(param_3 + 0x10);
  }
  return;
}

