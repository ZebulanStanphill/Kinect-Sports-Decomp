void fn_82F39AF0(int param_1,int param_2)

{
  int iVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  
  iVar1 = 0;
  *(unsigned int *)(param_1 + 4) = *(unsigned int *)(param_2 + 4);
  lVar3 = 3;
  *(unsigned int *)(param_1 + 8) = *(unsigned int *)(param_2 + 8);
  *(unsigned int *)(param_1 + 0xc) = *(unsigned int *)(param_2 + 0xc);
  *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_2 + 0x10);
  do {
    *(unsigned char *)(param_1 + 0x14 + iVar1) = *(unsigned char *)(param_2 + 0x14 + iVar1);
    iVar1 = iVar1 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  puVar2 = (unsigned int *)(param_1 + 0x18);
  lVar3 = 0x14;
  do {
    lVar3 = lVar3 + -1;
    *puVar2 = *(unsigned int *)((param_2 - param_1) + (int)puVar2);
    puVar2[1] = *(unsigned int *)((int)puVar2 + (param_2 - param_1) + 4);
    puVar2 = puVar2 + 2;
  } while (lVar3 != 0);
  *(unsigned int *)(param_1 + 0xb8) = *(unsigned int *)(param_2 + 0xb8);
  return;
}

