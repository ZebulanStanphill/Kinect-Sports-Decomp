extern int fn_82A3FF60();
extern int fn_82A4F4E0();


unsigned __int64 fn_82A595E8(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  int *piVar5;
  
  iVar2 = *(int *)(param_1 + 0x210);
  puVar4 = (unsigned int *)(param_1 + 0x20);
  uVar3 = 0;
  do {
    piVar5 = (int *)*puVar4;
    while (piVar5 != (int *)0x0) {
      if (piVar5 == (int *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *piVar5;
        piVar5 = (int *)piVar5[1];
      }
      iVar2 = iVar2 + -1;
      *(unsigned int *)(iVar1 + 0x3c) = 0;
    }
    if (iVar2 == 0) break;
    uVar3 = uVar3 + 1;
    puVar4 = puVar4 + 10;
  } while (uVar3 < 0xd);
  iVar2 = *(int *)(param_1 + 0x21c);
  uVar3 = *(unsigned int *)(param_1 + 0x228);
  if (iVar2 != *(int *)(param_1 + 0x218)) {
    if (*(int *)(param_1 + 0x214) != 0) {
      fn_82A4F4E0();
      *(unsigned int *)(param_1 + 0x214) = 0;
    }
    iVar1 = fn_82A3FF60(0xffffffff83219d50,iVar2,0x20970006,0x20);
    *(int *)(param_1 + 0x214) = iVar1;
    if (iVar1 == 0) {
      return 0xffffffff8007000e;
    }
    *(int *)(param_1 + 0x218) = iVar2;
  }
  if (uVar3 <= *(unsigned int *)(param_1 + 0x224)) {
    return 0;
  }
  if (*(int *)(param_1 + 0x220) != 0) {
    fn_82A4F4E0();
    *(unsigned int *)(param_1 + 0x220) = 0;
  }
  iVar2 = fn_82A3FF60(0xffffffff83219d50,uVar3,0x20970006,0x20);
  *(int *)(param_1 + 0x220) = iVar2;
  if (iVar2 == 0) {
    return 0xffffffff8007000e;
  }
  *(unsigned int *)(param_1 + 0x224) = uVar3;
  return 0;
}

