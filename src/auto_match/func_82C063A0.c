typedef unsigned char bool;
extern unsigned __int64 storeWordConditionalIndexed();


__int64 fn_82C063A0(__int64 param_1)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned int *puVar3;
  char in_RESERVE;
  unsigned char in_cr0;
  
  if (((unsigned int *)param_1)[3] == 1) {
    (**(int (***)())*(unsigned int *)param_1)(param_1,1);
    return 0;
  }
  do {
    puVar3 = (unsigned int *)(param_1 + 0xc);
    lVar2 = (unsigned __int64)*puVar3 - 1;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(lVar2,0,param_1 + 0xc);
      *puVar3 = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  return lVar2;
}

