extern int fn_82DFF060();


void fn_82DFF3A0(int self,int param_2)

{
  fn_82DFF060();
  *(unsigned short *)(self + 0x14) =
       *(short *)(self + 0x14) - (unsigned short)*(unsigned char *)(*(int *)(param_2 + 0x1c) + 0x20);
  return;
}

