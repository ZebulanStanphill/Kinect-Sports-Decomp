extern unsigned int *auStack_10;


void fn_8308A738(int param_1,int param_2)

{
  unsigned int *puVar1;
  int in_r0;
  __int64 lVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned char auStack_10 [16];
  
  puVar1 = (unsigned int *)((unsigned int)(auStack_10 + in_r0) & 0xfffffff0);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  if ((__int64)(param_2 >> 4) < 0) {
    return;
  }
  lVar2 = (__int64)(param_2 >> 4) + 1;
  do {
    puVar1 = (unsigned int *)(in_r0 + param_1 & 0xfffffff0);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    lVar2 = lVar2 + -1;
    param_1 = param_1 + 0x10;
  } while (lVar2 != 0);
  return;
}

