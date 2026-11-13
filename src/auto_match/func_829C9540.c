extern int fn_82F691F0();
extern unsigned int lbl_832177A0;


unsigned __int64 fn_829C9540(void)

{
  int *piVar1;
  unsigned int uVar2;
  
  uVar2 = 0;
  piVar1 = (int *)&lbl_832177A0;
  do {
    if (*piVar1 == 0) {
      *(unsigned int *)(&lbl_832177A0 + uVar2 * 4) = 1;
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar2 * 0x130 + -0x7cde8bf0,0,0x130);
    }
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (uVar2 < 3);
  return 0;
}

