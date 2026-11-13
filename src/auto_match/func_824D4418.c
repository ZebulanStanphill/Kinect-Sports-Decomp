extern unsigned int *auStack_10;


void fn_824D4418(int param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  int iVar3;
  unsigned int uVar4;
  unsigned char *puVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned char auStack_10 [16];
  
  if (*(int *)(param_2 + 0x120) == 0) {
    puVar5 = auStack_10;
    puVar1 = (unsigned int *)((unsigned int)(auStack_10 + in_r0) & 0xfffffff0);
    *puVar1 = in_register_000104d0;
    puVar1[1] = in_register_000104d4;
    puVar1[2] = in_register_000104d8;
    puVar1[3] = in_vr77;
  }
  else {
    iVar3 = 0;
    uVar4 = *(unsigned int *)(param_2 + 0x11c);
    if (*(int **)(param_2 + 0x110) != (int *)0x0) {
      iVar3 = **(int **)(param_2 + 0x110);
    }
    if (*(unsigned int *)(iVar3 + 8) <= uVar4) {
      uVar4 = uVar4 - *(unsigned int *)(iVar3 + 8);
    }
    puVar5 = (unsigned char *)(*(int *)(uVar4 * 4 + *(int *)(iVar3 + 4)) + (param_3 + 4) * 0x10);
  }
  puVar1 = (unsigned int *)((unsigned int)(puVar5 + in_r0) & 0xfffffff0);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  puVar2 = (unsigned int *)(in_r0 + param_1 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  return;
}

