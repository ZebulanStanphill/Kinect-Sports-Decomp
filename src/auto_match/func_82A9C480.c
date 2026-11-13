extern int fn_82A99B70();
extern int fn_82A99BC8();
extern int fn_82A99C28();
extern int fn_82A99D88();
extern int fn_82A9A810();
extern int fn_82A9A860();


void fn_82A9C480(int param_1,unsigned __int64 param_2)

{
  __int64 lVar1;
  unsigned int *puVar3;
  unsigned __int64 uVar2;
  
  fn_82A99BC8(param_2);
  fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff820d2b00);
  if (*(int *)(param_1 + 0x84) != 0) {
    fn_82A99D88(param_2,0xffffffff820d2ac0);
  }
  fn_82A9A860(param_2);
  if (*(int *)(param_1 + 0x24) != 0) {
    fn_82A99BC8(param_2);
    fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff820d2af8);
    fn_82A9A860(param_2);
    puVar3 = *(unsigned int **)(param_1 + 0x20);
    if (puVar3 < puVar3 + *(int *)(param_1 + 0x24) * 2) {
      do {
        fn_82A99BC8(param_2);
        fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff8202936c);
        lVar1 = -0x7de69a7e;
        if (*puVar3 != 0xffffffff) {
          lVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x2c) + (unsigned __int64)*puVar3;
        }
        fn_82A99D88(param_2,0xffffffff820d2ac0,lVar1);
        lVar1 = -0x7de69a7e;
        if (puVar3[1] != 0xffffffff) {
          lVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x2c) + (unsigned __int64)puVar3[1];
        }
        fn_82A99D88(param_2,0xffffffff8204f43c,lVar1);
        fn_82A9A810(param_2);
        puVar3 = puVar3 + 2;
      } while (puVar3 < (unsigned int *)(*(int *)(param_1 + 0x24) * 8 + *(int *)(param_1 + 0x20)));
    }
    fn_82A99C28(param_2,0xffffffff820d2af8);
  }
  fn_82A99BC8(param_2);
  fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff8200ed34);
  fn_82A9A860(param_2);
  uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x38);
  if (uVar2 < ((unsigned __int64)*(unsigned int *)(param_1 + 0x3c) * 0x28 + uVar2 & 0xffffffff)) {
    do {
      fn_82A99BC8(param_2);
      fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff820d2a88);
      fn_82A99D88(param_2,0xffffffff820d2ac0,uVar2);
      fn_82A99D88(param_2,0xffffffff8204f43c,uVar2 + 0x20);
      fn_82A9A810(param_2);
      uVar2 = uVar2 + 0x28;
    } while ((uVar2 & 0xffffffff) <
             (unsigned __int64)(*(int *)(param_1 + 0x3c) * 0x28 + *(unsigned int *)(param_1 + 0x38)));
  }
  fn_82A99C28(param_2,0xffffffff8200ed34);
  fn_82A99C28(param_2,0xffffffff820d2b00);
  return;
}

