extern int fn_82C4B368();
extern int fn_82C52CA0();
extern int fn_82C53AE8();


unsigned __int64 fn_82C4D2F0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  
  *(unsigned int *)(param_1 + 0x5630) = 1;
  fn_82C52CA0();
  iVar1 = *(int *)(param_1 + 0x9c);
  iVar2 = *(int *)(param_1 + 0xa0);
  uVar7 = fn_82C4B368(param_1,0,0);
  if ((int)uVar7 == 0) {
    iVar3 = *(int *)(param_1 + 0x9c);
    if ((iVar3 <= *(int *)(param_1 + 0x5628)) &&
       (iVar4 = *(int *)(param_1 + 0xa0), iVar4 <= *(int *)(param_1 + 0x562c))) {
      if ((iVar1 != iVar3) || (iVar2 != iVar4)) {
        *(int *)(param_1 + 0x5644) = iVar1;
        *(int *)(param_1 + 0x5648) = iVar2;
      }
      if ((iVar3 == iVar1) && (iVar4 == iVar2)) {
        *(unsigned int *)(param_1 + 0x5580) = 0;
      }
      else {
        *(unsigned int *)(param_1 + 0x5580) = 1;
        *(int *)(param_1 + 0xb0c8) = *(int *)(param_1 + 0xb0c8) + 1;
      }
      uVar7 = fn_82C53AE8(param_1);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      uVar5 = *(unsigned int *)(param_1 + 0x55e8);
      *(unsigned int *)(param_1 + 0x5630) = 1;
      *(unsigned int *)(param_1 + 0xe90) = 1;
      if (0 < (int)uVar5) {
        uVar6 = *(unsigned int *)(param_1 + 0x55e0);
        trapWord(6,(unsigned __int64)uVar5,0);
        *(unsigned int *)(param_1 + 0x55e8) = 0;
        *(unsigned int *)(param_1 + 0x55e0) = 0;
        *(unsigned int *)(param_1 + 0x55e4) = uVar6 / uVar5;
        return uVar7;
      }
      *(unsigned int *)(param_1 + 0x55e4) = 1;
      *(unsigned int *)(param_1 + 0x55e8) = 0;
      *(unsigned int *)(param_1 + 0x55e0) = 0;
      return 0;
    }
    uVar7 = 1;
  }
  *(int *)(param_1 + 0xa0) = iVar2;
  *(int *)(param_1 + 0x9c) = iVar1;
  return uVar7;
}

