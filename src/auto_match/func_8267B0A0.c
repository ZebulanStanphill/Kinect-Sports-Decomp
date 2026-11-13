int  fn_8267B0A0(int param_1)

{
  int *puVar1;
  int lVar2;
  unsigned int uVar3;
  
  lVar2 = 0;
  uVar3 = 0;
  if (*(unsigned int *)(param_1 + 8) != 0) {
    puVar1 = (unsigned int *)(param_1 + 0x24);
    do {
      puVar1 = puVar1 + 8;
      uVar3 = uVar3 + 1;
      lVar2 = (unsigned __int64)*puVar1 + lVar2;
    } while (uVar3 < *(unsigned int *)(param_1 + 8));
  }
  return lVar2;
}

