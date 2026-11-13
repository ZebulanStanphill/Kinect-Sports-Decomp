#define true 1


unsigned __int64 fn_82FF6128(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  
  puVar1 = *(unsigned int **)(param_1 + 0x14);
  uVar3 = 1;
  while( true ) {
    if (puVar1 == (unsigned int *)0x0) {
      return uVar3;
    }
    uVar3 = (**(int (***)())*puVar1)(puVar1,param_2,param_3);
    if ((int)uVar3 != 1) break;
    puVar1 = (unsigned int *)puVar1[1];
  }
  if ((param_3 & 0xff) == 0) {
    return uVar3;
  }
  for (puVar2 = *(unsigned int **)(param_1 + 0x14); puVar1 != puVar2; puVar2 = (unsigned int *)puVar2[1]
      ) {
    (**(int (***)())*puVar2)(puVar2,param_2,0);
  }
  return uVar3;
}

