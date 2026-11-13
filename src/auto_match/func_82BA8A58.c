extern int fn_82BA02A8();


void fn_82BA8A58(char *param_1,int param_2)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned int uVar5;
  
  *(int *)(param_1 + 0x870) = *(int *)(param_2 + 0x4c) + *(int *)(param_1 + 0x870);
  *(int *)(param_1 + 0x874) = *(int *)(param_1 + 0x874) + *(int *)(param_2 + 0x50);
  *(int *)(param_1 + 0x878) = *(int *)(param_2 + 0x54) + *(int *)(param_1 + 0x878);
  *(int *)(param_1 + 0x87c) = *(int *)(param_2 + 0x58) + *(int *)(param_1 + 0x87c);
  if (0 < *(int *)(param_2 + 0x4c)) {
    fn_82BA02A8(*(unsigned int *)(param_1 + 0xc),0xffffffff820df230,*(unsigned int *)(param_2 + 0x4c))
    ;
  }
  if (0 < *(int *)(param_2 + 0x50)) {
    fn_82BA02A8(*(unsigned int *)(param_1 + 0xc),0xffffffff820df1f0);
  }
  if (0 < *(int *)(param_2 + 0x54)) {
    fn_82BA02A8(*(unsigned int *)(param_1 + 0xc),0xffffffff820df1c4);
  }
  if (0 < *(int *)(param_2 + 0x58)) {
    fn_82BA02A8(*(unsigned int *)(param_1 + 0xc),0xffffffff820df1a0);
  }
  uVar1 = *(unsigned int *)(param_2 + 0x38);
  lVar2 = (__int64)((int)uVar1 >> 1) + (unsigned __int64)((int)uVar1 < 0 && (uVar1 & 1) != 0);
  fn_82BA02A8(*(unsigned int *)(param_1 + 0xc),0xffffffff820df158,lVar2,
                (unsigned __int64)*(unsigned int *)(param_2 + 0x40),
                (unsigned __int64)*(unsigned int *)(param_2 + 0x3c) - (unsigned __int64)*(unsigned int *)(param_2 + 0x40),
                (unsigned __int64)*(unsigned int *)(param_2 + 0x3c) + lVar2);
  uVar1 = *(unsigned int *)(param_2 + 0x38);
  fn_82BA02A8(*(unsigned int *)(param_1 + 0xc),0xffffffff820df120,
                (__int64)((int)uVar1 >> 1) + (unsigned __int64)((int)uVar1 < 0 && (uVar1 & 1) != 0),
                *(unsigned int *)(param_2 + 0x3c));
  if (*param_1 == '\0') {
    uVar1 = *(unsigned int *)(param_2 + 0x48);
    uVar3 = (unsigned __int64)uVar1;
    if (uVar1 == 0) {
      iVar4 = 0;
    }
    else {
      trapWord(6,uVar3,0);
      uVar5 = *(int *)(param_2 + 0x44) * 100;
      iVar4 = (int)uVar5 / (int)uVar1;
      trapWord(5,uVar3 & ~((((unsigned __int64)uVar5 & 0x7fffffff) << 1 | (unsigned __int64)(uVar5 >> 0x1f)) - 1),
               0xffff);
    }
    fn_82BA02A8(*(unsigned int *)(param_1 + 0xc),0xffffffff820df0d8,uVar3,
                  *(unsigned int *)(param_2 + 0x44),iVar4);
  }
  return;
}

