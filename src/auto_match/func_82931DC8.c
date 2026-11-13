typedef unsigned char bool;
#define false 0


bool fn_82931DC8(int param_1,int param_2)

{
  unsigned __int64 uVar1;
  bool bVar2;
  
  if ((((param_2 == 0) || (*(int *)(param_2 + 4) != *(int *)(param_1 + 4))) ||
      (*(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x10))) ||
     (((*(int *)(param_1 + 0x14) != *(int *)(param_2 + 0x14) ||
       (*(int *)(param_1 + 0x1c) != *(int *)(param_2 + 0x1c))) ||
      ((*(int *)(param_1 + 0x20) != *(int *)(param_2 + 0x20) ||
       (*(int *)(param_1 + 0x24) != *(int *)(param_2 + 0x24))))))) {
    bVar2 = false;
  }
  else {
    if (*(unsigned int **)(param_1 + 0x18) == (unsigned int *)0x0) {
      uVar1 = (unsigned __int64)(*(int *)(param_2 + 0x18) == 0);
    }
    else {
      uVar1 = (**(int (***)())**(unsigned int **)(param_1 + 0x18))();
    }
    bVar2 = uVar1 != 0;
  }
  return bVar2;
}

