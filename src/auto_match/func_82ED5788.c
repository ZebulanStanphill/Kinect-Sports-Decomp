void fn_82ED5788(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  
  *(unsigned short *)(param_1 + 0x4aba) = 0;
  *(unsigned int *)(param_1 + 0x4ad0) = 0;
  *(unsigned int *)(param_1 + 0x4acc) = 0;
  lVar3 = 10;
  *(unsigned int *)(param_1 + 0x4abc) = 0;
  puVar1 = (unsigned int *)(param_1 + 0x4ad0);
  *(unsigned int *)(param_1 + 0x4ab4) = 0;
  *(unsigned short *)(param_1 + 0x4ab8) = 0;
  *(unsigned int *)(param_1 + 0x4aac) = 0;
  *(unsigned int *)(param_1 + 0x4ac0) = 0;
  *(unsigned int *)(param_1 + 0x4ab0) = 0;
  *(unsigned int *)(param_1 + 0x4ac4) = 0;
  *(unsigned int *)(param_1 + 0x4ac8) = 0;
  puVar2 = (unsigned int *)(param_1 + 0x4aa8);
  do {
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

