extern int fn_822977A8();


void fn_82865B90(unsigned int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned char cVar2;
  
  uVar1 = param_1[4];
  if (((uVar1 <= param_2) && (param_1[5] != param_2)) &&
     (cVar2 = fn_822977A8(param_1,param_2,1), cVar2 != '\0')) {
    param_1[4] = uVar1;
    if ((unsigned int)param_1[5] >= 8) {
      param_1 = (unsigned int *)*param_1;
    }
    *(unsigned short *)(uVar1 * 2 + (int)param_1) = 0;
  }
  return;
}

