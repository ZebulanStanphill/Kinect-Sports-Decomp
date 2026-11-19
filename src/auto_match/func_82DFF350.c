extern int fn_82DFF0D0();


void fn_82DFF350(int self,int param_2)

{
  fn_82DFF0D0();
  *(unsigned short *)(self + 0x14) =
       (unsigned short)*(unsigned char *)(*(int *)(param_2 + 0x1c) + 0x20) + *(short *)(self + 0x14);
  return;
}

