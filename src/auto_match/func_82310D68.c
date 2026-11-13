extern int fn_823CC7A0();


void fn_82310D68(int param_1,unsigned int *param_2,unsigned int param_3,int param_4)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  iVar2 = *(int *)(param_1 + 0x10);
  iVar4 = fn_823CC7A0();
  *param_2 = param_3;
  param_2[1] = param_4;
  param_2[2] = 0;
  iVar2 = iVar4 * 300 + iVar2;
  if (param_4 == 0) {
    uVar1 = *(unsigned int *)(iVar2 + 0x5b4);
  }
  else {
    uVar1 = *(unsigned int *)(iVar2 + 0x5ac);
  }
  param_2[3] = uVar1;
  if (param_4 == 0) {
    uVar1 = *(unsigned int *)(iVar2 + 0x5b0);
  }
  else {
    uVar1 = *(unsigned int *)(iVar2 + 0x5a8);
  }
  param_2[4] = uVar1;
  uVar5 = 0;
  puVar3 = (unsigned int *)((unsigned int)(param_2 + 8) & 0xfffffff0);
  *puVar3 = in_register_000104d0;
  puVar3[1] = in_register_000104d4;
  puVar3[2] = in_register_000104d8;
  puVar3[3] = in_vr77;
  if (param_2[0x28] != 0) {
    do {
      iVar2 = param_2[0x26];
      uVar5 = uVar5 + 1;
      param_2[0x26] = iVar2 + 4;
      if (iVar2 + 4 == param_2[0x25]) {
        param_2[0x26] = param_2[0x24];
      }
    } while (uVar5 < (unsigned int)param_2[0x28]);
  }
  param_2[0x28] = 0;
  return;
}

