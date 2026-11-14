extern int fn_8259A168();
extern int XMemSet();
extern unsigned int lbl_8218E064;


void fn_825228E0(unsigned int *param_1)

{
  unsigned int *puVar1;
  int *piVar2;
  __int64 lVar3;
  
  fn_8259A168();
  piVar2 = (int *)&lbl_8218E064;
  do {
    if (piVar2[1] != 0) {
                    /* WARNING: Subroutine does not return */
      XMemSet(param_1 + *piVar2 * 0xe + 6,0,0x34);
    }
    if (*piVar2 == 0) break;
    piVar2 = piVar2 + 3;
  } while (piVar2 != (int *)0x0);
  puVar1 = (unsigned int *)0x8326b7cc;
  lVar3 = 0x20;
  do {
    puVar1 = puVar1 + 1;
    *puVar1 = 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = 1;
  return;
}

