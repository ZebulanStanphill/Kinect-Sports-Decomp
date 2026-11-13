extern int fn_83017440(unsigned, int, unsigned);
extern int fn_83017470(unsigned, int, unsigned);
extern int fn_83034FA0(int);
extern unsigned int lbl_832642FC;

unsigned int fn_83035218(int param_1, unsigned int param_2)
{
  unsigned int uVar1;
  unsigned old;

  uVar1 = 1;
  old = *(unsigned *)(param_1 + 0x24);
  if (old != param_2) {
    if (old != 0) {
      fn_83017470(lbl_832642FC, param_1, old);
    }
    *(unsigned *)(param_1 + 0x24) = param_2;
    if (param_2 != 0 && (uVar1 = fn_83017440(lbl_832642FC, param_1, param_2), (int)uVar1 != 1)) {
      *(unsigned *)(param_1 + 0x24) = 0;
    }
    fn_83034FA0(param_1);
  }
  return uVar1;
}
