extern int fn_82A1BB18();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82E663D0(unsigned __int64 param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  char in_RESERVE;
  
  puVar1 = (unsigned int *)param_1;
  uVar2 = fn_82A1BB18();
  if ((puVar1[2] == uVar2) &&
     (uVar2 = puVar1[1], puVar1[1] = (unsigned int)((unsigned __int64)uVar2 - 1), (unsigned __int64)uVar2 - 1 == 0)) {
    puVar1[2] = 0;
    sync(1);
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed((unsigned __int64)*puVar1 - 1,0,param_1);
      *puVar1 = uVar2;
    }
  }
  return;
}

