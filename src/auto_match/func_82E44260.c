extern int fn_82A28E60();
extern int fn_82A2A360();
extern int fn_82E4FE40();


void fn_82E44260(unsigned int *param_1)

{
  unsigned int uVar1;
  
  if ((*param_1 & 0x40000000) == 0) {
    uVar1 = *param_1 >> 0x1c & 3;
    if (uVar1 == 0) {
      uVar1 = param_1[3];
      fn_82A28E60(fn_82A2A360(),0,uVar1);
    }
    else if (uVar1 == 1) {
      fn_82E4FE40(param_1[3]);
    }
    param_1[3] = 0;
    *param_1 = *param_1 & 0xcfffffff;
  }
  return;
}
