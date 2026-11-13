extern unsigned int *auStack_30;
extern int fn_8267BE38();
extern int fn_8267BED0();


void fn_827B5F38(unsigned int *param_1,unsigned __int64 param_2,__int64 param_3)

{
  unsigned int uVar1;
  unsigned int auStack_30;
  
  if ((unsigned __int64)(unsigned int)param_1[2] < (param_2 & 0xffffffff)) {
    fn_8267BE38(*param_1);
    param_3 = param_2 + param_3;
    param_1[2] = (int)param_3;
    if (param_3 == 0) {
      uVar1 = 0;
    }
    else {
      auStack_30 = 0xc3;
      uVar1 = fn_8267BED0(param_1,param_3 * 0x30,&auStack_30);
    }
    *param_1 = uVar1;
  }
  param_1[1] = 0;
  return;
}

