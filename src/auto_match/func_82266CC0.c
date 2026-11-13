extern int fn_82F691F0();


void fn_82266CC0(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar1 = param_1[2];
  uVar2 = *(unsigned int *)(uVar1 + 0x62c);
  if (uVar2 == 0) {
    if ((*param_1 & 1) == 0) {
      return;
    }
  }
  else if (uVar2 == 1) {
    if ((*param_1 & 2) == 0) {
      return;
    }
  }
  else if (uVar2 < 3) {
    if ((*param_1 & 4) == 0) {
      return;
    }
  }
  else {
    if (uVar2 != 3) {
      return;
    }
    if ((*param_1 & 8) == 0) {
      return;
    }
  }
  if (*(int *)(uVar1 + 0x104) == 0x3e5) {
    *(unsigned int *)(uVar1 + 0x630) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(uVar1 + 0x104,0,0x1c);
}

