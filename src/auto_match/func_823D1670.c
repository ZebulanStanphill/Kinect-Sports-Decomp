extern unsigned int *auStack_20;
extern int fn_822AF200();


void fn_823D1670(int param_1,unsigned int param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  unsigned int auStack_20 [2];
  
  iVar2 = *(int *)(param_1 + 0x94);
  *(unsigned int *)(param_1 + 0xe7c) = 1;
  if (iVar2 != 0) {
    *(unsigned int *)(iVar2 + 0x3c) = 1;
    *(unsigned int *)(iVar2 + 0x48) = 0;
  }
  *(unsigned int *)(param_1 + 0xe78) = param_2;
  *(unsigned int *)(param_1 + 0xe70) = 1;
  auStack_20[0] = 0;
  fn_822AF200(param_1 + 0x80,auStack_20);
  piVar1 = *(int **)(*(int *)(param_1 + 0x7c) + 8);
  if (piVar1 == (int *)0x0) {
    cVar3 = '\x01';
  }
  else {
    cVar3 = (**(int (***)())(*piVar1 + 8))(piVar1,0x14);
  }
  if (cVar3 != '\0') {
    *(unsigned int *)(param_1 + 0x58) = 0x14;
  }
  return;
}

