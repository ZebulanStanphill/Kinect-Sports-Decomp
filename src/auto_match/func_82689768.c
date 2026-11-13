typedef unsigned char bool;
extern int fn_82670230();
extern int fn_8267C498();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82689768(int param_1,unsigned __int64 param_2)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  char in_RESERVE;
  unsigned char in_cr0;
  
  if ((unsigned __int64)*(unsigned int *)(param_1 + 0xc) != (param_2 & 0xffffffff)) {
    if (*(int *)(param_1 + 0x14) != 0) {
      fn_8267C498();
    }
    *(unsigned int *)(param_1 + 0x14) = 0;
    piVar1 = *(int **)(param_1 + 0xc);
    if (piVar1 != (int *)0x0) {
      (**(int (***)())(*piVar1 + 0x30))(piVar1,param_1 + 8);
    }
    if (((param_2 & 0xffffffff) != 0) &&
       ((**(int (***)())(*(int *)param_2 + 0x2c))(param_2,param_1 + 8), (param_2 & 0xffffffff) != 0)) {
      do {
        puVar3 = (unsigned int *)(param_2 + 4);
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed((unsigned __int64)*puVar3 + 1,0,param_2 + 4);
          *puVar3 = uVar2;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      fn_82670230();
    }
    *(int **)(param_1 + 0xc) = (int *)param_2;
  }
  return;
}

