typedef unsigned char bool;
#define false 0


bool fn_82931BF0(int param_1,int param_2)

{
  unsigned __int64 uVar1;
  bool bVar2;
  
  if (((param_2 == 0) || (*(int *)(param_2 + 4) != *(int *)(param_1 + 4))) ||
     (*(int *)(param_1 + 0x14) != *(int *)(param_2 + 0x14))) {
    bVar2 = false;
  }
  else {
    if (*(unsigned int **)(param_1 + 0x10) == (unsigned int *)0x0) {
      uVar1 = (unsigned __int64)(*(int *)(param_2 + 0x10) == 0);
    }
    else {
      uVar1 = (**(int (***)())**(unsigned int **)(param_1 + 0x10))();
    }
    bVar2 = uVar1 != 0;
  }
  return bVar2;
}

