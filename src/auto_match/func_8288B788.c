extern int fn_82897620();
extern int fn_8289A1C8();


void fn_8288B788(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  uVar3 = 0;
  uVar1 = *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x34) + 0x10) + 8);
  if (uVar1 != 0) {
    do {
      uVar2 = fn_82897620(*(unsigned int *)(param_1 + 0x34),uVar3);
      if ((uVar2 & 0xffffffff) != 0) {
        fn_8289A1C8(uVar2,param_2);
      }
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) < (unsigned __int64)uVar1);
  }
  return;
}

