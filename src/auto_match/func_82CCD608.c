extern void fn_82CC9120(int a, int b, int c, int d, int e, int f);
extern void fn_82CCAC90(int a, int b, int c, int d, int e, int f);
extern void fn_82CCBA50(int a, int b, int c, int d, int e, int f);
extern unsigned int lbl_8329F060;

void fn_82CCD608(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7, __int64 unused_arg_8, __int64 unused_arg_9, __int64 unused_arg_10, __int64 unused_arg_11, unsigned int fourcc)
{
  lbl_8329F060 = (fourcc == 0x31313450);
  *(int *)(param_1 + 0x70) = param_5;
  *(int *)(param_1 + 0x74) = param_6;
  *(int *)(param_1 + 0x78) = param_7;
  *(int *)(param_1 + 100) = param_2;
  *(int *)(param_1 + 0x68) = param_3;
  *(int *)(param_1 + 0x6c) = param_4;
  if (fourcc == 0x32595559) {
    fn_82CCBA50(param_1, param_2, param_3, param_4, param_5, 1);
  }
  else if (fourcc == 0x59565955) {
    fn_82CCBA50(param_1, param_2, param_3, param_4, param_5, 0);
  }
  else if (fourcc == 0) {
    fn_82CCAC90(param_1, param_2, param_3, param_4, param_5, param_6);
  }
  else {
    fn_82CC9120(param_1, param_2, param_3, param_4, param_5, param_6);
  }
}
