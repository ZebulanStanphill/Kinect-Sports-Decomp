extern unsigned int lbl_82196750;


void fn_82444B00(int param_1,int param_2)

{
  unsigned int *puVar1;
  int in_r0;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  if (**(int **)(param_1 + -4) != 0) {
    puVar1 = (unsigned int *)(**(int **)(param_1 + -4) + 0x50U & 0xfffffff0);
    in_register_000104d0 = *puVar1;
    in_register_000104d4 = puVar1[1];
    in_register_000104d8 = puVar1[2];
    in_vr77 = puVar1[3];
  }
  puVar1 = (unsigned int *)(param_2 + 0x10U & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  if (**(int **)(param_1 + -4) == 0) {
    puVar1 = (unsigned int *)((unsigned int)(&lbl_82196750 + in_r0) & 0xfffffff0);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
  }
  else {
    puVar1 = (unsigned int *)(**(int **)(param_1 + -4) + 0xc0U & 0xfffffff0);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
  }
  puVar1 = (unsigned int *)(param_2 + 0x20U & 0xfffffff0);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  return;
}

