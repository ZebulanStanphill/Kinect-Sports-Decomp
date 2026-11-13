extern int fn_83056070();
extern int fn_830560D0();


void fn_83050528(int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  char cVar2;
  
  param_1[0x27] = (param_2 & 0xf) << 0x19 | param_1[0x27] & 0xe1ffffffU;
  if ((((unsigned int)param_1[0x1d] >> 0x1b & 1) != 0) &&
     (cVar2 = (**(int (***)())(*param_1 + 4))(), cVar2 != '\0')) {
    if ((param_1[0x1d] & 0x2000000U) != 0) {
      return;
    }
    param_1[0x1d] = param_1[0x1d] | 0x2000000;
    fn_83056070(param_1[0x18]);
    return;
  }
  uVar1 = param_1[0x1d];
  if (param_2 == 2) {
    param_1[0x1d] = uVar1 | 0x1000000;
    if ((uVar1 & 0x2000000) == 0) {
      param_1[0x1d] = uVar1 | 0x3000000;
      fn_83056070(param_1[0x18]);
    }
  }
  else {
    param_1[0x1d] = uVar1 & 0xfeffffff;
    if ((uVar1 & 0x2000000) != 0) {
      param_1[0x1d] = uVar1 & 0xfcffffff;
      fn_830560D0(param_1[0x18]);
    }
  }
  return;
}

