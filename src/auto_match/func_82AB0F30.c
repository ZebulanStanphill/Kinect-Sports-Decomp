extern int fn_82A29A38();
extern __int64 fn_82AB0E98();


unsigned __int64 fn_82AB0F30(unsigned int *param_1,unsigned int *param_2)

{
  unsigned __int64 uVar1;
  
  uVar1 = 0;
  if ((*param_1 < *param_2) || (*param_1 > param_2[1])) {
    fn_82A29A38();
  }
  if ((unsigned int)((int)(param_2[1] - *param_1) >> 2) < 0x100) {
    param_2[2] = (int)(*param_1 - *param_2) >> 2;
    uVar1 = fn_82AB0E98(param_2);
    *param_1 = param_2[2] * 4 + *param_2;
  }
  return uVar1;
}

