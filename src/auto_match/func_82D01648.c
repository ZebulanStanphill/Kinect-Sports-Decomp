__int64 fn_82D01648(unsigned int *param_1)

{
  unsigned int *puVar1;
  int *piVar2;
  unsigned int *puVar3;
  __int64 lVar4;
  
  lVar4 = 0;
  for (puVar1 = (unsigned int *)*param_1; puVar1 != (unsigned int *)0x0; puVar1 = (unsigned int *)*puVar1)
  {
    lVar4 = lVar4 + 1;
  }
  piVar2 = (int *)param_1[4];
  trapWord(6,(unsigned __int64)(unsigned int)param_1[1],0);
  lVar4 = ((unsigned __int64)(unsigned int)param_1[9] - (unsigned __int64)(unsigned int)param_1[8] & 0xffffffff) /
          (unsigned __int64)(unsigned int)param_1[1] + lVar4;
  if (piVar2 != (int *)0x0) {
    do {
      puVar3 = (unsigned int *)(piVar2 + 3);
      piVar2 = (int *)*piVar2;
      lVar4 = (unsigned __int64)*puVar3 + lVar4;
    } while (piVar2 != (int *)0x0);
    return lVar4;
  }
  return lVar4;
}

