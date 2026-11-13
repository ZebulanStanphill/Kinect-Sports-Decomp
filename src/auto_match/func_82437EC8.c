typedef unsigned char bool;


bool fn_82437EC8(int param_1,unsigned int param_2)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x3c) + 8);
  if (piVar1 == (int *)0x0) {
    cVar2 = '\x01';
  }
  else {
    cVar2 = (**(int (***)())(*piVar1 + 8))();
  }
  if (cVar2 != '\0') {
    *(unsigned int *)(param_1 + 0x18) = param_2;
  }
  return cVar2 != '\0';
}

