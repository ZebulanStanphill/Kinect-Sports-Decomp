extern int *piRam8328cf80;


void fn_8242A7F0(int *param_1)

{
  if (piRam8328cf80 == (int *)0x0) {
    return;
  }
  if (param_1 == (int *)0x0) {
    return;
  }
  if (*param_1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x8242a828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(int (***)())(*piRam8328cf80 + 4))();
  return;
}
