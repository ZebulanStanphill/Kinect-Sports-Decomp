typedef unsigned char bool;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82A77548(__int64 param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int *puVar4;
  char in_RESERVE;
  unsigned char in_cr0;
  
  do {
    puVar4 = (unsigned int *)(param_1 + 0xf0);
    puVar1 = (unsigned int *)*puVar4;
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed(0,0,param_1 + 0xf0);
      *puVar4 = uVar2;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  iVar3 = (int)param_1;
  if (*(int *)(iVar3 + 0xb8) == 0) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  else {
    *puVar1 = *(unsigned int *)(*(int *)(iVar3 + 0xb8) + 4);
    puVar1[1] = *(int *)(iVar3 + 0xbc) - **(int **)(iVar3 + 0xb8);
  }
  *(unsigned __int64 *)(puVar1 + 2) = *(unsigned __int64 *)(iVar3 + 200);
  sync(1);
  *puVar4 = puVar1;
  *(unsigned int *)(iVar3 + 0xf8) = 1;
  return;
}

