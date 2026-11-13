extern void fn_825269D0(int, int);
extern void *fn_8265C9E0(int);
extern unsigned int *lbl_832767A4;

unsigned int *fn_82512C30(void)
{
  unsigned int *mem;
  unsigned int *p;

  if (lbl_832767A4 == 0) {
    mem = (unsigned int *)fn_8265C9E0(0x34);
    if (mem != 0) {
      mem[0] = 0;
      mem[1] = 0;
      mem[2] = 0;
      mem[3] = 0;
      mem[4] = 0;
      mem[5] = 0;
      mem[6] = 0;
      mem[7] = 0;
      mem[9] = 0;
      mem[10] = 0;
      mem[11] = 0;
      fn_825269D0(0x36, 0);
      p = mem;
    } else {
      p = 0;
    }
    lbl_832767A4 = p;
    return p;
  }
  return lbl_832767A4;
}
