extern int fn_82F6BB98();


void fn_82F817C0(int param_1,unsigned int *param_2)

{
  if ((param_1 != 0) && ((param_2[3] & 0x1000) != 0)) {
    fn_82F6BB98(param_2);
    param_2[6] = 0;
    *param_2 = 0;
    param_2[2] = 0;
    param_2[3] = param_2[3] & 0xffffeeff;
  }
  return;
}

