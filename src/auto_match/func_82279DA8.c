extern int fn_8227E4B0();


void fn_82279DA8(int param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  if (*(unsigned int *)(param_1 + 0x9c) != 0) {
    puVar2 = *(unsigned int **)(param_1 + 0x10);
    for (puVar1 = (unsigned int *)*puVar2; puVar1 != puVar2; puVar1 = (unsigned int *)*puVar1) {
      fn_8227E4B0(*(unsigned int *)(param_1 + 0x9c),*(unsigned int *)(puVar1[2] + 0x10),param_2,0)
      ;
      puVar2 = *(unsigned int **)(param_1 + 0x10);
    }
  }
  return;
}

