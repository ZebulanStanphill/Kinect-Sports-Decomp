extern int fn_8278FC90();
extern int fn_827954C0();
extern int fn_82795918();


void fn_82795A28(int param_1,int param_2,int param_3)

{
  if ((int)param_3 == -1) {
    param_3 = -1;
  }
  else {
    param_3 = param_3 - param_2;
    if (param_3 == 0) {
      return;
    }
  }
  fn_8278FC90(param_1,param_2,param_3);
  fn_827954C0(param_1 + 0x10,param_2,param_3);
  fn_82795918(param_1);
  *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + 1;
  return;
}

