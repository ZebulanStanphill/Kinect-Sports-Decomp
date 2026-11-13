typedef unsigned char bool;
#define false 0
extern unsigned int uRam00000008;


bool fn_828985D8(int param_1)

{
  char cVar1;
  int iVar2;
  
  if ((*(int **)(param_1 + 0x20) == (int *)0x0) ||
     (iVar2 = (**(int (***)())(**(int **)(param_1 + 0x20) + 4))(), iVar2 == 0)) {
    if ((*(int **)(param_1 + 0x20) == (int *)0x0) ||
       (iVar2 = (**(int (***)())(**(int **)(param_1 + 0x20) + 0x14))(), iVar2 == 0)) {
      if ((*(int **)(param_1 + 0x20) != (int *)0x0) &&
         (iVar2 = (**(int (***)())(**(int **)(param_1 + 0x20) + 0xc))(), iVar2 != 0)) {
        if (*(int **)(param_1 + 0x20) == (int *)0x0) {
          return (bool)uRam00000008;
        }
        iVar2 = (**(int (***)())(**(int **)(param_1 + 0x20) + 0xc))();
        return (bool)*(unsigned char *)(iVar2 + 8);
      }
      return false;
    }
    if (*(int **)(param_1 + 0x20) == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (**(int (***)())(**(int **)(param_1 + 0x20) + 0x14))();
    }
    cVar1 = *(char *)(iVar2 + 4);
  }
  else {
    if (*(int **)(param_1 + 0x20) == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (**(int (***)())(**(int **)(param_1 + 0x20) + 4))();
    }
    cVar1 = *(char *)(iVar2 + 4);
  }
  return cVar1 != '\0';
}

