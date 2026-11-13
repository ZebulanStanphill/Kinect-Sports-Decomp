extern int fn_82FA5190();
extern unsigned int lbl_831BC770;
extern unsigned int lbl_83264438;


void fn_82FEC850(unsigned int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;

  if (param_1 < 0x400) {
    param_1 = 0x400;
  }
  puVar2 = &lbl_83264438 + (param_1 - 1 >> 10) * 3;
  uVar1 = *puVar2;
  if (uVar1 < 2) {
    *puVar2 = uVar1 + 1;
    if (puVar2 + uVar1 + 1 != (unsigned int *)0x0) {
      puVar2[uVar1 + 1] = param_2;
      return;
    }
  }
  fn_82FA5190(lbl_831BC770);
  return;
}
