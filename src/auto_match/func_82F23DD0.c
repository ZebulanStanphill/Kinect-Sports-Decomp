extern int fn_82BA02A8();
extern int fn_82F0F9A0();
extern int fn_82F23B08();
extern int fn_82F23C88();


void fn_82F23DD0(int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  int *piVar4;
  int *piVar5;
  __int64 lVar6;
  
  if (*(int *)(param_1 + 0x6d54) == 0) {
    iVar1 = *(int *)(param_1 + 0xaf0);
    if ((iVar1 != 0) && (iVar1 != 4)) {
      if (iVar1 == 2) {
        uVar3 = 0;
        if (*(int *)(param_1 + 0x2d8) != 0) {
          piVar4 = (int *)(*(int *)(param_1 + 0x1e54) + 4);
          do {
            lVar6 = 6;
            piVar5 = piVar4;
            do {
              if (0 < *piVar5) {
                *piVar5 = 1;
              }
              piVar5 = piVar5 + 1;
              lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
            uVar3 = uVar3 + 1;
            piVar4 = piVar4 + 0x45;
          } while (uVar3 < *(unsigned int *)(param_1 + 0x2d8));
        }
      }
LAB_82f23f00:
      fn_82F23B08(param_1);
      fn_82F23C88(param_1);
      return;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0xaf0);
    if (*(int *)(param_1 + 0x7b38) == 0) {
      if ((iVar1 == 0) || (iVar1 == 4)) {
        fn_82BA02A8(param_1,0,*(unsigned int *)(param_1 + 0x2d4),*(unsigned int *)(param_1 + 0x4a94),
                     *(unsigned int *)(param_1 + 0x4a98),*(unsigned int *)(param_1 + 0x4a9c),
                     *(unsigned int *)(param_1 + 0x1e54));
        uVar2 = 0x13;
      }
      else {
        fn_82BA02A8(param_1,0,*(unsigned int *)(param_1 + 0x2d4),*(unsigned int *)(param_1 + 0x4a94),
                     *(unsigned int *)(param_1 + 0x4a98),*(unsigned int *)(param_1 + 0x4a9c),
                     *(unsigned int *)(param_1 + 0x1e54));
        uVar2 = 0x15;
      }
      goto LAB_82f23e14;
    }
    if ((iVar1 != 0) && (iVar1 != 4)) goto LAB_82f23f00;
  }
  uVar2 = 0xd;
LAB_82f23e14:
  fn_82F0F9A0(param_1,uVar2);
  return;
}

