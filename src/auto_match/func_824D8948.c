unsigned __int64
fn_824D8948(int param_1,int param_2,unsigned int *param_3,unsigned int *param_4,unsigned int *param_5)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  
  puVar1 = (unsigned int *)(param_1 + 0x40U & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  *param_3 = *(unsigned int *)(param_1 + 0x50);
  *param_4 = *(unsigned int *)(param_1 + 0x54);
  *param_5 = *(unsigned int *)(param_1 + 0x58);
  if ((*(int *)(param_1 + 0x10) == 3) && (*(int *)(param_1 + 0x78) == 0)) {
    return 1;
  }
  return 0;
}

