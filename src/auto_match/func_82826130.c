void fn_82826130(int param_1,unsigned __int64 param_2,int (**param_3)())

{
  unsigned int *puVar1;
  char cVar2;
  __int64 lVar3;
  __int64 lVar4;
  
  cVar2 = '\x01';
  lVar4 = (__int64)(((*(int **)(param_1 + 0xc))[1] - **(int **)(param_1 + 0xc)) / 0xc) + -1;
  if (-1 < lVar4) {
    lVar3 = lVar4 * 0xc;
    do {
      if (cVar2 == '\0') {
        return;
      }
      puVar1 = (unsigned int *)(**(int **)(param_1 + 0xc) + (int)lVar3);
      cVar2 = (*param_3)(param_1,*puVar1,puVar1[1],param_2);
      lVar4 = lVar4 + -1;
      lVar3 = lVar3 + -0xc;
    } while (-1 < lVar4);
  }
  return;
}

