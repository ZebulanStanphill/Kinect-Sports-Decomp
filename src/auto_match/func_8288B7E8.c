extern int fn_82897620();
extern int fn_82898230();


void fn_8288B7E8(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar2 = 0;
  uVar1 = *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x34) + 0x10) + 8);
  if (uVar1 != 0) {
    do {
      fn_82897620(*(unsigned int *)(param_1 + 0x34),uVar2);
      fn_82898230();
      uVar2 = uVar2 + 1;
    } while ((uVar2 & 0xffffffff) < (unsigned __int64)uVar1);
  }
  return;
}

