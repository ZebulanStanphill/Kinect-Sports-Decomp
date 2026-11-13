void fn_82D3BD38(int param_1,int param_2,__int64 param_3,int param_4)

{
  unsigned short uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  unsigned short *puVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  
  if (param_3 + -1 < 0) {
    return;
  }
  puVar4 = (unsigned short *)(param_2 + -2);
  do {
    puVar4 = puVar4 + 1;
    uVar1 = *puVar4;
    puVar2 = (unsigned int *)(param_1 + 0x20 + (unsigned int)uVar1 & 0xfffffff0);
    uVar5 = puVar2[1];
    uVar6 = puVar2[2];
    uVar7 = puVar2[3];
    puVar3 = (unsigned int *)(in_r0 + param_4 & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    puVar3[2] = uVar6;
    puVar3[3] = uVar7;
    *(unsigned int *)(param_4 + 0xc) = uVar1 | 0x3f000000;
    param_4 = param_4 + 0x10;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}

