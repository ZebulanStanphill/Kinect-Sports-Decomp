extern int fn_82CF7648();


void fn_82CE6CB0(int *param_1,unsigned __int64 param_2)

{
  if (((param_2 & 2) != 0) && (param_1[0x269] != param_1[0x268])) {
    (**(int (***)())(*(int *)param_1[1] + 8))
              ((int *)param_1[1],param_1[0x268],
               (unsigned __int64)(unsigned int)param_1[0x269] - (unsigned __int64)(unsigned int)param_1[0x268]);
    fn_82CF7648(param_1 + 0x267,0,0);
  }
  if ((param_2 & 1) == 0) {
    param_1[1] = 0;
  }
  else {
    (**(int (***)())(*param_1 + 0x10))(param_1,param_1 + 0x25e,param_2);
    (**(int (***)())(param_1[7] + 0x40))(param_1 + 7);
    param_1[1] = 0;
  }
  return;
}

