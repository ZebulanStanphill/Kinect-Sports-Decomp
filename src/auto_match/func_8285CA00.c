extern int fn_8285C730(int, int, int, int, int);
extern int fn_82862150(int, int);
extern int fn_82862338(int, int, int);
extern unsigned int lbl_83211340[];
int fn_8285CA00(int param_1, unsigned int param_2, int param_3)
{
  unsigned int i;
  if (param_2 != 0 && (i = 0, 0 < *(unsigned int *)(param_2 + 0x44))) {
    do {
      int h = fn_82862338(param_2, lbl_83211340[0x23c / 4], i);
      float *f = (float *)fn_82862150(h, lbl_83211340[0x23c / 4]);
      if (*f > *(float *)(param_2 + 0x4c)) {
        unsigned short us = *(unsigned short *)((char *)f + 8);
        if (fn_8285C730(*(int *)((char *)f + 4), us & 0xff, lbl_83211340[0x24c / 4],
                         *(unsigned short *)(param_1 + 0x18), i + param_3) == 2) {
          return 1;
        }
      }
      i++;
    } while (i < *(unsigned int *)(param_2 + 0x44));
  }
  return 0;
}
