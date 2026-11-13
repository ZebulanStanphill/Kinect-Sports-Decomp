void fn_8282DD18(int param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  __int64 lVar4;
  
  puVar2 = (unsigned int *)(param_1 + 0x2d8);
  puVar3 = (unsigned int *)(param_1 + 0x4c);
  lVar4 = 2;
  do {
    puVar2 = puVar2 + 1;
    *puVar2 = puVar3[3];
    uVar1 = puVar3[3] + 3 & 0xfffffffc;
    puVar3[4] = 0;
    puVar3[6] = 0;
    puVar3[3] = uVar1;
    puVar3[7] = uVar1;
    puVar3 = puVar3 + 5;
    *puVar3 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}

