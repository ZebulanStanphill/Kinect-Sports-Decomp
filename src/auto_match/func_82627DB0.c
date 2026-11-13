extern int fn_82627E18();


void fn_82627DB0(int *param_1,int param_2)

{
  *(unsigned short *)(param_2 + 0xa2) = *(unsigned short *)((int)param_1 + 10);
  *(short *)((int)param_1 + 10) = (short)(((param_2 - (int)param_1) + -0x2a0) / 0x1d0);
  if (*(unsigned int *)(param_2 + 0x30) != 0) {
    fn_82627E18(*(unsigned int *)(*param_1 + 0x1c));
  }
  *(short *)(param_1 + 1) = *(short *)(param_1 + 1) + -1;
  return;
}

