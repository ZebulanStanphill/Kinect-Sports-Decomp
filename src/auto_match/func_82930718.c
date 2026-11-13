typedef unsigned char bool;
#define false 0


bool fn_82930718(int param_1,int param_2)

{
  unsigned int uVar2;
  unsigned __int64 uVar1;
  
  if ((((param_2 != 0) && (*(int *)(param_2 + 4) == *(int *)(param_1 + 4))) &&
      (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10))) &&
     (*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14))) {
    if (*(unsigned int **)(param_1 + 8) == (unsigned int *)0x0) {
      uVar2 = (unsigned int)LZCOUNT(*(unsigned int *)(param_2 + 8)) >> 5;
    }
    else {
      uVar2 = (**(int (***)())**(unsigned int **)(param_1 + 8))();
    }
    if (uVar2 != 0) {
      if (*(unsigned int **)(param_1 + 0xc) == (unsigned int *)0x0) {
        uVar1 = (unsigned __int64)(*(int *)(param_2 + 0xc) == 0);
      }
      else {
        uVar1 = (**(int (***)())**(unsigned int **)(param_1 + 0xc))();
      }
      return uVar1 != 0;
    }
  }
  return false;
}

