typedef unsigned char bool;
extern unsigned int *auStack_20;
extern int fn_82A1E658();
extern int fn_82BFB8C0();
extern int fn_82BFBAF0();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82BFE3B0(unsigned __int64 param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned int auStack_20 [4];
  
  if ((param_1 & 0xffffffff) != 0) {
    do {
      piVar3 = (int *)(param_1 + 0x40);
      iVar1 = *piVar3;
      if (in_RESERVE != '\0') {
        iVar2 = storeWordConditionalIndexed(0,0,param_1 + 0x40);
        *piVar3 = iVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (iVar1 == 0x4c665175) {
      iVar1 = (int)param_1;
      if (*(int *)(iVar1 + 0x1c) != 0) {
        fn_82A1E658();
      }
      if (*(int *)(iVar1 + 0x24) != 0) {
        fn_82A1E658();
      }
      auStack_20[0] = *(unsigned int *)(iVar1 + 0x3c);
      fn_82BFBAF0(*(unsigned int *)(iVar1 + 0x48),param_1 + 0x28,auStack_20);
      fn_82BFB8C0(*(unsigned int *)(iVar1 + 0x48),*(unsigned int *)(iVar1 + 0x44),auStack_20);
      sync(1);
    }
  }
  return;
}

