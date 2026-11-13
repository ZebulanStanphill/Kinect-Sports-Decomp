extern int fn_82F2F398();
extern int fn_82F30F38();
extern int fn_82F31CF8();
extern unsigned int lbl_832617F0;


void fn_82F338B8(int param_1, unsigned int param_2, unsigned int param_3, unsigned int param_4, unsigned int param_5, unsigned int param_6, unsigned int param_7, unsigned __int64 unused_arg_8, unsigned __int64 unused_arg_9, unsigned __int64 unused_arg_10, unsigned __int64 unused_arg_11, int in_stack_0000006c)

{

  
  lbl_832617F0 = in_stack_0000006c == 0x31313450;
  *(unsigned int *)(param_1 + 0x70) = param_5;
  *(unsigned int *)(param_1 + 0x74) = param_6;
  *(unsigned int *)(param_1 + 0x78) = param_7;
  *(unsigned int *)(param_1 + 100) = param_2;
  *(unsigned int *)(param_1 + 0x68) = param_3;
  *(unsigned int *)(param_1 + 0x6c) = param_4;
  if ((lbl_832617F0 == '\0') && (in_stack_0000006c != 0x50343232)) {
    if (in_stack_0000006c == 0x32595559) {
      fn_82F31CF8();
      return;
    }
    if (in_stack_0000006c == 0x59565955) {
      fn_82F31CF8();
      return;
    }
    if (in_stack_0000006c != 0) {
      if (in_stack_0000006c != 0x41595556) {
        fn_82F2F398();
        return;
      }
    }
    fn_82F30F38();
  }
  return;
}

