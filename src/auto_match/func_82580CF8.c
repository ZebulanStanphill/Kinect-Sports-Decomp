typedef unsigned char bool;
extern int fn_82BFE128();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82580CF8(__int64 param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  char in_RESERVE;
  unsigned char in_cr0;
  
  if (*(int *)((int)param_1 + 0xc) == 0) {
    uVar2 = 0;
    if (param_3 != 0) {
      do {
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(1,0,param_1 + 0xc);
          *(unsigned int *)(param_1 + 0xc) = uVar1;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
    }
    fn_82BFE128(*(unsigned int *)((int)param_1 + 4));
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

