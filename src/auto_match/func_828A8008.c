typedef unsigned char bool;
extern int fn_8265C9E0();
extern int fn_828A7268();
extern int fn_828A7CE0();
extern int fn_82BA02A8();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned int * fn_828A8008(unsigned int *param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned int *puVar5;
  char in_RESERVE;
  unsigned char in_cr0;
  
  uVar2 = fn_8265C9E0(0x20);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_828A7268(uVar2,param_3);
  }
  *param_1 = (int)uVar3;
  fn_828A7CE0(param_1 + 1,uVar3);
  fn_82BA02A8(param_1,uVar3,uVar3);
  param_1[2] = *(unsigned int *)(param_2 + 8);
  uVar1 = *(unsigned int *)(param_2 + 0xc);
  param_1[3] = uVar1;
  if ((unsigned __int64)uVar1 != 0) {
    lVar4 = (unsigned __int64)uVar1 + 4;
    do {
      puVar5 = (unsigned int *)lVar4;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar5 + 1,0,lVar4);
        *puVar5 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  return param_1;
}

