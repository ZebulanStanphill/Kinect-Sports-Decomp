void fn_82A4FA40(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  
  puVar3 = *(unsigned int **)(param_1 + 0x2c);
  iVar1 = 0;
  while ((puVar3 != (unsigned int *)0x0 && (-1 < iVar1))) {
    if (puVar3 == (unsigned int *)0x0) {
      puVar2 = (unsigned int *)0x0;
    }
    else {
      puVar2 = (unsigned int *)*puVar3;
      puVar3 = (unsigned int *)puVar3[1];
    }
    iVar1 = (*(int (**)())**(unsigned int **)*puVar2)((unsigned int *)*puVar2,param_2);
  }
  return;
}

