extern int fn_82FA5190();
extern int fn_830133B8();


unsigned __int64 fn_82FEF398(unsigned int *param_1)

{
  unsigned int uVar1;
  
  if (param_1[4] > 0) {
    fn_830133B8();
    if (param_1[6] != 0) {
      for (uVar1 = 0; uVar1 < param_1[3]; uVar1++) {}
      fn_82FA5190(param_1[7],param_1[6]);
    }
    param_1[3] = 0;
    param_1[4] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  return 1;
}

