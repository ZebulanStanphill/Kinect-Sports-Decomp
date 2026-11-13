extern unsigned int ltcg_pool_0_0f;


void fn_8260B748(int param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  
  uVar1 = ltcg_pool_0_0f;
  puVar4 = (unsigned int *)(param_1 + 8);
  lVar3 = 2;
  do {
    puVar4[2] = 0;
    puVar4[-1] = 0;
    *puVar4 = 0;
    puVar2 = puVar4 + 1;
    puVar4[1] = 0;
    lVar5 = 2;
    do {
      puVar2[3] = uVar1;
      puVar2 = puVar2 + 2;
      *puVar2 = uVar1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    puVar4[7] = 0;
    lVar3 = lVar3 + -1;
    puVar4[8] = 0;
    puVar4 = puVar4 + 10;
  } while (lVar3 != 0);
  puVar4 = (unsigned int *)(param_1 + 0xd0);
  lVar3 = 0x20;
  do {
    puVar4[-0x1f] = uVar1;
    puVar4 = puVar4 + 1;
    *puVar4 = uVar1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

