extern int fn_8262FEC8();
extern int fn_82647460();
extern int fn_82647538();
extern int fn_8265C990();


void fn_829F7FA8(unsigned int *param_1)

{
  int lVar1;
  unsigned int *piVar2;
  
  if (*param_1 != 0) {
    *param_1 = 0;
  }
  fn_8265C990(param_1[0x1c],0xac9c0000);
  param_1[0x1c] = 0;
  if (param_1[5] != 0) {
    fn_8262FEC8(param_1[5]);
    param_1[5] = 0;
  }
  if (param_1[6] != 0) {
    fn_8262FEC8(param_1[6]);
    param_1[6] = 0;
  }
  if (param_1[7] != 0) {
    fn_8262FEC8(param_1[7]);
    param_1[7] = 0;
  }
  if (param_1[8] != 0) {
    fn_8262FEC8(param_1[8]);
    param_1[8] = 0;
  }
  if (param_1[9] != 0) {
    fn_8262FEC8(param_1[9]);
    param_1[9] = 0;
  }
  if (param_1[10] != 0) {
    fn_8262FEC8(param_1[10]);
    param_1[10] = 0;
  }
  if (param_1[0xb] != 0) {
    fn_8262FEC8(param_1[0xb]);
    param_1[0xb] = 0;
  }
  if (param_1[0x12] != 0) {
    fn_8262FEC8(param_1[0x12]);
    param_1[0x12] = 0;
  }
  if (param_1[0xc] != 0) {
    fn_8262FEC8(param_1[0xc]);
    param_1[0xc] = 0;
  }
  if (param_1[0xf] != 0) {
    fn_8262FEC8(param_1[0xf]);
    param_1[0xf] = 0;
  }
  if (param_1[0x13] != 0) {
    fn_8262FEC8(param_1[0x13]);
    param_1[0x13] = 0;
  }
  if (param_1[0xd] != 0) {
    fn_8262FEC8(param_1[0xd]);
    param_1[0xd] = 0;
  }
  if (param_1[0xe] != 0) {
    fn_8262FEC8(param_1[0xe]);
    param_1[0xe] = 0;
  }
  if (param_1[0x10] != 0) {
    fn_8262FEC8(param_1[0x10]);
    param_1[0x10] = 0;
  }
  if (param_1[0x11] != 0) {
    fn_8262FEC8(param_1[0x11]);
    param_1[0x11] = 0;
  }
  if (param_1[0x12] != 0) {
    fn_8262FEC8(param_1[0x12]);
    param_1[0x12] = 0;
  }
  piVar2 = param_1 + 2;
  lVar1 = 2;
  do {
    if (*piVar2 != 0) {
      fn_8262FEC8(*piVar2);
      *piVar2 = 0;
    }
    lVar1 = lVar1 + -1;
    piVar2 = piVar2 + 1;
  } while (lVar1 != 0);
  if (param_1[1] != 0) {
    fn_82647538(param_1[1]);
    if (param_1[1] != 0) {
      fn_82647460(param_1[1]);
      param_1[1] = 0;
    }
  }
  return;
}

