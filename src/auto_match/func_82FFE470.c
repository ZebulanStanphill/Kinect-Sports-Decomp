extern int fn_82FFE1C8();


unsigned int * fn_82FFE470(unsigned int *param_1,int param_2)

{
  char cVar2;
  unsigned int *puVar1;
  unsigned int *puVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  
  cVar2 = fn_82FFE1C8();
  if (cVar2 == '\0') {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    if ((unsigned int *)param_1[1] == (unsigned int *)0x0) {
      *param_1 = param_1[2];
    }
    else {
      *(unsigned int *)param_1[1] = param_1[2];
    }
    puVar1 = (unsigned int *)param_1[2];
    puVar4 = (unsigned int *)(param_2 + -4);
    param_1[1] = puVar1;
    lVar5 = 9;
    param_1[2] = *puVar1;
    *puVar1 = 0;
    puVar3 = (unsigned int *)param_1[1];
    puVar1 = puVar3 + 1;
    param_1[5] = param_1[5] + 1;
    do {
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return puVar1;
}

