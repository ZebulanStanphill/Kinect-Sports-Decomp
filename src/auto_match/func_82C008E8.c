typedef unsigned char bool;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82C008E8(__int64 param_1,unsigned int param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  __int64 lVar5;
  unsigned int *puVar6;
  char in_RESERVE;
  unsigned char in_cr0;
  
  iVar1 = (int)param_1;
  lVar5 = param_1 + 0x280;
  if (*(unsigned int *)(iVar1 + 0x280) < *(unsigned int *)(iVar1 + 0x27c)) {
    do {
      puVar6 = (unsigned int *)lVar5;
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed((unsigned __int64)*puVar6 + 1,0,lVar5);
        *puVar6 = uVar4;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    uVar3 = (**(int (***)())(**(int **)(iVar1 + 0x2c) + 0x50))();
    *(unsigned int *)(*(int *)(iVar1 + 0x284) * 0x24 + iVar1 + 0x44) = uVar3;
    *(unsigned int *)(*(int *)(iVar1 + 0x284) * 0x24 + iVar1 + 0x40) = param_2;
    *(int *)(*(int *)(iVar1 + 0x284) * 0x24 + iVar1 + 0x5c) = iVar1;
    uVar2 = (**(int (***)())(**(int **)(iVar1 + 0x38) + 0x54))
                      (*(int **)(iVar1 + 0x38),
                       ((unsigned __int64)*(unsigned int *)(iVar1 + 0x284) +
                        ((unsigned __int64)*(unsigned int *)(iVar1 + 0x284) & 0x1fffffff) * 8 & 0x3fffffff) * 4 +
                       param_1 + 0x3c,0);
    if ((int)uVar2 < 0) {
      do {
        if (in_RESERVE != '\0') {
          uVar4 = storeWordConditionalIndexed((unsigned __int64)*puVar6 - 1,0,lVar5);
          *puVar6 = uVar4;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
    }
    else {
      if (*(int *)(iVar1 + 0x288) == 0) {
        uVar2 = (**(int (***)())(**(int **)(iVar1 + 0x38) + 0x4c))(*(int **)(iVar1 + 0x38),0,0);
      }
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      *(unsigned int *)(iVar1 + 0x288) = 1;
    }
    if (-1 < (int)uVar2) {
      uVar4 = *(int *)(iVar1 + 0x284) + 1;
      *(unsigned int *)(iVar1 + 0x284) = uVar4;
      if (*(unsigned int *)(iVar1 + 0x27c) <= uVar4) {
        *(unsigned int *)(iVar1 + 0x284) = 0;
      }
      uVar2 = (**(int (***)())(**(int **)(iVar1 + 0x2c) + 0x34))(*(int **)(iVar1 + 0x2c),param_2);
    }
  }
  else {
    if (*(int *)(iVar1 + 0x288) == 0) {
      (**(int (***)())(**(int **)(iVar1 + 0x38) + 0x4c))(*(int **)(iVar1 + 0x38),0,0);
      *(unsigned int *)(iVar1 + 0x288) = 1;
    }
    uVar2 = 0xffffffff8000000a;
  }
  return uVar2;
}

