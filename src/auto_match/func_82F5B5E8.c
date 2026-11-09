extern void *fn_8265C9E0(int);
extern unsigned int *lbl_83263020;

unsigned int *fn_82F5B5E8(void)
{
  unsigned int *mem;
  unsigned int *p;

  if (lbl_83263020 == 0) {
    mem = (unsigned int *)fn_8265C9E0(0x4c);
    if (mem != 0) {
      mem[0] = 0;
      mem[1] = 0;
      mem[2] = 0;
      mem[3] = 0;
      mem[4] = 0;
      mem[5] = 0;
      mem[6] = 0;
      mem[7] = 0;
      mem[8] = 0;
      mem[9] = 0;
      mem[10] = 0;
      mem[11] = 0;
      mem[12] = 0;
      mem[13] = 0;
      p = mem;
    } else {
      p = 0;
    }
    lbl_83263020 = p;
    return p;
  }
  return lbl_83263020;
}
