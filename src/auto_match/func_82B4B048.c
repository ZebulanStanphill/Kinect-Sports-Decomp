extern int fn_82AA6648();


void fn_82B4B048(int param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  
  uVar3 = *(unsigned int *)(param_1 + 4);
  if ((uVar3 & 1) == 0) {
    while (uVar3 != 0) {
      puVar2 = (unsigned int *)(uVar3 & 0xfffffffe);
      uVar1 = puVar2[1];
      *(unsigned int *)(puVar2[1] & 0xfffffffe) = *puVar2;
      *(unsigned int *)(*puVar2 & 0xfffffffe) = puVar2[1];
      fn_82AA6648(param_1,uVar3,((unsigned __int64)*(unsigned int *)(uVar3 + 0xc) + 4 & 0x3fffffff) << 2);
      uVar3 = -(unsigned int)((uVar1 & 1) == 0) & uVar1;
    }
  }
  return;
}

