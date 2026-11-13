extern int fn_82DFF0D0();


void fn_82DFF350(int param_1,int param_2)

{
  fn_82DFF0D0();
  *(unsigned short *)(param_1 + 0x14) =
       (unsigned short)*(unsigned char *)(*(int *)(param_2 + 0x1c) + 0x20) + *(short *)(param_1 + 0x14);
  return;
}

