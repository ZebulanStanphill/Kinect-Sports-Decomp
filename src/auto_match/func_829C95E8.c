extern int fn_82F691F0();
extern unsigned int lbl_832178A8;


unsigned __int64 fn_829C95E8(void)

{
  int *piVar1;
  unsigned int uVar2;
  
  uVar2 = 0;
  piVar1 = (int *)&lbl_832178A8;
  do {
    if (*piVar1 == 0) {
      *(unsigned int *)(&lbl_832178A8 + uVar2 * 4) = 1;
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar2 * 0x4c + -0x7cde883c,0,0x4c);
    }
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (uVar2 < 3);
  return 0;
}

