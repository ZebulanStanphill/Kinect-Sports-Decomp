void fn_82445D90(int param_1,int param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  iVar1 = *(int *)(param_2 + 0x14);
  if (*(int *)(iVar1 + 0x94) == 0) {
    iVar4 = 0x10;
  }
  else {
    iVar1 = **(int **)(param_2 + 4);
    if (iVar1 == 0) {
      puVar2 = (unsigned int *)(in_r0 + param_1 & 0xfffffff0);
      *puVar2 = in_register_000104d0;
      puVar2[1] = in_register_000104d4;
      puVar2[2] = in_register_000104d8;
      puVar2[3] = in_vr77;
      return;
    }
    iVar4 = 0xd0;
  }
  puVar2 = (unsigned int *)(iVar1 + iVar4 & 0xfffffff0);
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  uVar7 = puVar2[3];
  puVar3 = (unsigned int *)(in_r0 + param_1 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar5;
  puVar3[2] = uVar6;
  puVar3[3] = uVar7;
  return;
}

