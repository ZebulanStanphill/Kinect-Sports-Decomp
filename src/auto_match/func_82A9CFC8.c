extern int fn_82AAC750();
extern int fn_82AAC760();
extern int memcpy();


void fn_82A9CFC8(unsigned int *param_1,unsigned int param_2,unsigned int *param_3)

{
  int lVar1;
  unsigned int uVar2;
  
  if (param_2 > param_1[2]) {
    uVar2 = (param_1[2] & 0x7fffffff) << 1;
    if (uVar2 < param_2) {
      uVar2 = param_2;
    }
    lVar1 = fn_82AAC750(param_1,(uVar2 & 0x3fffffff) << 2);
    if (lVar1 == 0) {
      *param_3 = 0x8007000e;
    }
    else {
      param_1[2] = (int)uVar2;
      if (*param_1 != 0) {
        memcpy(lVar1,*param_1,param_1[1] << 2);
        fn_82AAC760(param_1,*param_1);
      }
      *param_1 = (int)lVar1;
    }
  }
  return;
}

