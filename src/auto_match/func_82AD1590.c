unsigned __int64 fn_82AD1590(int param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  
  if ((*(unsigned int *)(param_1 + 8) >> 5 & 1) == 0) {
    return 0;
  }
  for (puVar1 = *(unsigned int **)(param_1 + 4); (puVar1 != (unsigned int *)0x0 && ((*puVar1 & 0xe000000) == 0));
      puVar1 = (unsigned int *)puVar1[2]) {
  }
  uVar2 = *puVar1 >> 0x11 & 0xff;
  if ((uVar2 < 0x20) || (uVar3 = 1, 0x25 < uVar2)) {
    uVar3 = 0;
  }
  return uVar3;
}

