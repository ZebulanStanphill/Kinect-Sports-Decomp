typedef unsigned char bool;
extern int fn_822315A0();
extern int fn_82359DB8();
extern unsigned int iStack_20;
extern unsigned int uStack_1c;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82397E08(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  char in_RESERVE;
  unsigned char in_cr0;
  int iStack_20;
  unsigned int uStack_1c;
  
  if (*(int *)(param_1 + 0x54) == 3) {
    fn_82359DB8(&iStack_20,param_1 + 0x40,3);
    uVar3 = (unsigned __int64)uStack_1c;
    if (uVar3 != 0) {
      do {
        puVar2 = (unsigned int *)(uVar3 + 4);
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar2 + 1,0,uVar3 + 4);
          *puVar2 = uVar1;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      fn_822315A0(uVar3);
    }
    if ((*(int *)((*(int *)(param_2 + 0x2c) + 7) * 4 + iStack_20) != *(int *)(param_2 + 0x28)) ||
       (uVar4 = 1, *(int *)(param_2 + 0x278) != 0)) {
      uVar4 = 0;
    }
    if (uVar3 != 0) {
      fn_822315A0(uVar3);
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

