extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_8225AF70(unsigned __int64 param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  char in_RESERVE;
  
  uVar2 = (unsigned __int64)*(unsigned int *)param_1;
  if (in_RESERVE != '\0') {
    uVar1 = storeWordConditionalIndexed(uVar2,0,param_1);
    *(unsigned int *)param_1 = uVar1;
  }
  return uVar2;
}

