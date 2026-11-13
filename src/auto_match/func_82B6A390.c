__int64 fn_82B6A390(int *param_1)

{
  int *piVar1;
  __int64 lVar2;
  __int64 lVar3;
  
  lVar2 = 0x10;
  lVar3 = 6;
  piVar1 = param_1;
  do {
    piVar1 = piVar1 + 1;
    lVar2 = ((unsigned __int64)**(unsigned int **)(*piVar1 + 0x20) & 0x7fffffff) * 2 + lVar2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return (unsigned __int64)**(unsigned int **)(param_1[7] + 0x20) +
         (unsigned __int64)**(unsigned int **)(param_1[8] + 0x20) + lVar2 + 6;
}

