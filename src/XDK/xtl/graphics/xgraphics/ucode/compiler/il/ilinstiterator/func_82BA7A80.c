extern int fn_82BA02A8();
extern int fn_82BC6DC0();


void fn_82BA7A80(unsigned int *param_1)

{
  if (param_1[0x11] != 0) {
    fn_82BC6DC0(param_1[0x11],1);
  }
  if (param_1[0x10] != 0) {
    fn_82BC6DC0(param_1[0x10],1);
  }
  if (param_1[0xf] != 0) {
    fn_82BC6DC0(param_1[0xf],1);
  }
  fn_82BA02A8(*param_1,"Preprocessor : ILIterator steps past %d IL instructions\n",param_1[0xd]);
  return;
}

