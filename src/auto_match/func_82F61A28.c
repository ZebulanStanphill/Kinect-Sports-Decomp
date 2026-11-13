typedef unsigned char bool;
extern int fn_82A1BB18();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82F61A28(unsigned __int64 param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  char in_RESERVE;
  unsigned char in_cr0;
  
  uVar5 = 0;
  uVar3 = fn_82A1BB18();
  do {
    puVar4 = (unsigned int *)param_1;
    uVar1 = *puVar4;
    if (uVar1 != 0) {
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((unsigned __int64)uVar1,0,param_1);
        *puVar4 = uVar2;
      }
      break;
    }
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed(uVar3,0,param_1);
      *puVar4 = uVar2;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  sync(1);
  if (uVar1 == 0) {
    puVar4[7] = puVar4[3];
    puVar4[6] = puVar4[2];
    *param_2 = puVar4[3];
  }
  else {
    uVar5 = 0xffffffff82240400;
  }
  return uVar5;
}

