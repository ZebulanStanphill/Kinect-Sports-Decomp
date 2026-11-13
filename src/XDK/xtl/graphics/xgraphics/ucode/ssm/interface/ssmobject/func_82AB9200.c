extern int fn_82AB15D0();
extern int fn_82AB4970();
extern int fn_82AB50D0();


void fn_82AB9200(int param_1)

{
  __int64 lVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  uVar3 = 0;
  do {
    lVar1 = fn_82AB50D0(*(unsigned int *)(param_1 + 0x24),uVar3);
    if (lVar1 != 0) {
      if (((uVar3 & 0xffffffff) == 0) ||
         ((unsigned __int64)*(unsigned int *)(param_1 + 0x28) < (uVar3 & 0xffffffff))) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d749c,0xffffffff820d7400,0x154);
      }
      iVar2 = fn_82AB4970(lVar1);
      if (iVar2 != 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6840,0xffffffff820d7400,0x159);
      }
    }
    uVar3 = uVar3 + 1;
  } while ((uVar3 & 0xffffffff) <= (unsigned __int64)(*(int *)(param_1 + 0x28) + 1));
  return;
}

