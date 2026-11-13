extern int fn_82795FB8();


void fn_82799DA8(int *param_1)

{
  *(unsigned char *)((int)param_1 + 0x13f) = *(unsigned char *)((int)param_1 + 0x13f) & 0xef;
  fn_82795FB8(param_1[2]);
  (*(int (**)())(*param_1 + 4))(param_1,1);
  return;
}

