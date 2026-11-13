extern int fn_82355878();
extern int (*lbl_83276778)();
extern int (*lbl_8327677C)();
extern int (*lbl_83276794)();
extern int (*lbl_83276798)();


void fn_82352358(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x3a4) == 0) {
    fn_82355878(param_1);
  }
  else {
    if (*(int *)(param_1 + 0x39c) == 0) {
      if (*(int *)(param_1 + 0x3e4) == 0) {
        if (lbl_83276778 != (int (**)())0x0) {
          (*lbl_83276778)(0,0,1,0xffffffff821b218c,0xffffffff821b1fb8,0x9ac);
        }
        *(unsigned int *)(param_1 + 0x3e4) = 1;
      }
      if (lbl_83276794 == (int (**)())0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = (*lbl_83276794)();
      }
      if (iVar1 == 0) {
        return;
      }
      fn_82355878(param_1);
      return;
    }
    if (*(int *)(param_1 + 0x3e4) != 0) {
      if (lbl_8327677C != (int (**)())0x0) {
        (*lbl_8327677C)(0xffffffff821b218c,0xffffffff821b1fb8,0x9ba);
      }
      *(unsigned int *)(param_1 + 0x3e4) = 0;
    }
    if (lbl_83276798 == (int (**)())0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*lbl_83276798)();
    }
    if (iVar1 == 0) {
      return;
    }
  }
  if (*(int *)(param_1 + 8) != 0xc) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 8);
    *(unsigned int *)(param_1 + 8) = 0xc;
  }
  return;
}

