extern int fn_82AB15D0();
extern int fn_82AB50D0();
extern int fn_82AB5180();
extern int fn_82AB92B8();


void fn_82AB8668(int param_1)

{
  __int64 lVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  uVar3 = 0;
  do {
    lVar1 = fn_82AB50D0(*(unsigned int *)(param_1 + 0x48),uVar3);
    if (lVar1 != 0) {
      if (((uVar3 & 0xffffffff) == 0) ||
         ((unsigned __int64)*(unsigned int *)(param_1 + 0x4c) < (uVar3 & 0xffffffff))) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d70f0,0xffffffff820d7090,0x298);
      }
      fn_82AB5180(*(unsigned int *)(param_1 + 0x48),uVar3);
      iVar2 = fn_82AB92B8(lVar1);
      if (iVar2 != 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6840,0xffffffff820d7090,0x29e);
      }
    }
    uVar3 = uVar3 + 1;
  } while ((uVar3 & 0xffffffff) <= (unsigned __int64)(*(int *)(param_1 + 0x4c) + 1));
  return;
}

