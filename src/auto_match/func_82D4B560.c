void fn_82D4B560(int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int lVar3;
  
  uVar1 = 1;
  puVar2 = (unsigned int *)(param_1 + 0x34);
  lVar3 = 0x20;
  do {
    if ((uVar1 & param_2) != 0) {
      *puVar2 = *puVar2 & ~param_3;
    }
    if ((uVar1 & param_3) != 0) {
      *puVar2 = *puVar2 & ~param_2;
    }
    puVar2 = puVar2 + 1;
    uVar1 = (uVar1 & 0x7fffffff) << 1 | uVar1 >> 0x1f;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

