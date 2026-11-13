extern unsigned int *auStack_20;
extern int fn_822AF200();


unsigned int fn_824C3460(int param_1)

{
  int *piVar1;
  unsigned int uVar2;
  char cVar3;
  unsigned int uVar4;
  unsigned int auStack_20 [2];
  
  uVar2 = *(unsigned int *)(param_1 + 4);
  if (*(int *)(uVar2 + 0x68) == 0) {
    if (*(int *)(uVar2 + 0x5c) == 0) {
      return uVar2;
    }
    if (*(__int64 *)(uVar2 + 0x60) == 0) {
      uVar4 = 5;
    }
    else {
      uVar4 = 2;
    }
  }
  else {
    uVar4 = 4;
  }
  auStack_20[0] = 0;
  fn_822AF200(uVar2 + 0x40,auStack_20);
  piVar1 = *(int **)(*(int *)(uVar2 + 0x3c) + 8);
  if (piVar1 == (int *)0x0) {
    cVar3 = '\x01';
  }
  else {
    cVar3 = (**(int (***)())(*piVar1 + 8))(piVar1,uVar4);
  }
  if (cVar3 != '\0') {
    *(unsigned int *)(uVar2 + 0x18) = uVar4;
  }
  return (unsigned int)(cVar3 != '\0');
}

