extern int fn_82E55008();
extern int fn_82EE2D50();


unsigned __int64 fn_82E55580(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x58) != 0) {
    iVar3 = 0;
    do {
      if ((uVar2 < *(unsigned int *)(param_1 + 0x58)) &&
         (iVar1 = *(int *)(iVar3 + *(int *)(param_1 + 0x54)), iVar1 != 0)) {
        fn_82E55008(iVar1,1);
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar2 < *(unsigned int *)(param_1 + 0x58));
  }
  fn_82EE2D50(param_1 + 0x54,0,0xffffffffffffffff);
  return 0;
}

