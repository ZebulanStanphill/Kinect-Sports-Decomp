extern int fn_822A97A0();
extern int fn_82350888();
extern int (*lbl_83276778)();
extern int (*lbl_8327677C)();
extern int (*lbl_83276794)();


void fn_82351F88(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  
  uVar2 = (unsigned int)LZCOUNT(*(int *)(param_1 + 0x2c)) >> 5;
  if ((*(int *)(param_1 + 0x2c) != 0) && (*(int *)(param_1 + 0x18) != 0)) {
    fn_822A97A0();
    if (*(int *)(param_1 + 0x340) == 0) {
      if (*(int *)(param_1 + 0x3e4) != 0) {
        if (lbl_8327677C != (int (**)())0x0) {
          (*lbl_8327677C)(0xffffffff821b2130,0xffffffff821b1fb8,0x8c9);
        }
        *(unsigned int *)(param_1 + 0x3e4) = 0;
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x2c);
      if ((iVar1 == 0) || ((iVar1 != 0 && (*(int *)(iVar1 + 8) == 9)))) {
        *(unsigned int *)(param_1 + 0x340) = 1;
      }
    }
    if (*(int *)(param_1 + 0x340) == 1) {
      if (*(int *)(param_1 + 0x3e4) == 0) {
        if (lbl_83276778 != (int (**)())0x0) {
          (*lbl_83276778)(0,0,1,0xffffffff821b2130,0xffffffff821b1fb8,0x8db);
        }
        *(unsigned int *)(param_1 + 0x3e4) = 1;
      }
      if (lbl_83276794 == (int (**)())0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = (*lbl_83276794)();
      }
      if ((iVar1 != 0) && (*(int *)(*(int *)(param_1 + 0x2c) + 0x2c) == 0)) {
        uVar2 = 1;
        *(unsigned int *)(*(int *)(param_1 + 0x2c) + 100) = 1;
      }
    }
  }
  if (uVar2 != 0) {
    fn_82350888(param_1,8);
  }
  return;
}

