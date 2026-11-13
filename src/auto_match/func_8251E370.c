extern int fn_82522D98();


void fn_8251E370(unsigned int *param_1,int param_2,int param_3)

{
  if (0x10000 < param_3) {
    param_3 = 0x10000;
  }
  *(short *)(param_1 + 3) = (short)param_2;
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(unsigned short *)((int)param_1 + 0xe) = 0x10;
    *(unsigned short *)(param_1 + 4) = 0;
    return;
  }
  *(short *)((int)param_1 + 0xe) = (short)param_3;
                    /* WARNING: Subroutine does not return */
  fn_82522D98((__int64)param_2 * (__int64)param_3);
}

