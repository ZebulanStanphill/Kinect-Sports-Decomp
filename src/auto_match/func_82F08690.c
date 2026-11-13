extern int fn_82ED3520();


void fn_82F08690(int param_1, unsigned int param_2, unsigned __int64 param_3, unsigned __int64 param_4, unsigned __int64 param_5, int param_6, unsigned int *param_7, unsigned __int64 unused_arg_8, unsigned __int64 unused_arg_9, unsigned __int64 unused_arg_10, unsigned __int64 unused_arg_11, int in_stack_0000006c, int in_stack_00000074)

{
  int iVar1;


  
  *param_7 = 0;
  if (in_stack_00000074 == 0) {
    if (((param_2 & 8) != 0) &&
       (iVar1 = fn_82ED3520(*(unsigned int *)(param_1 + 0x7b40),param_3,param_4,param_5), iVar1 == 0
       )) {
      if (*(int *)(param_1 + 0x6d54) == 0) {
        if (param_6 == 0x40) {
          *param_7 = 0x831a9b30;
        }
        else if (param_6 == 0x20) {
          if (in_stack_0000006c == *(int *)(param_1 + 0x204c)) {
            *param_7 = 0x831a9ab0;
          }
          else {
            *param_7 = 0x831a9af0;
          }
        }
        else {
          *param_7 = 0x831a9a90;
        }
      }
      else if (param_6 == 0x40) {
        *param_7 = 0x831a9c50;
      }
      else if (param_6 == 0x20) {
        if (in_stack_0000006c == *(int *)(param_1 + 0x204c)) {
          *param_7 = 0x831a9bd0;
        }
        else {
          *param_7 = 0x831a9c10;
        }
      }
      else {
        *param_7 = 0x831a9bb0;
      }
    }
  }
  else if (((param_2 & 8) != 0) &&
          (iVar1 = fn_82ED3520(*(unsigned int *)(param_1 + 0x7b40),param_3,param_4,param_5),
          iVar1 == 0)) {
    *param_7 = 0x831a9a10;
  }
  return;
}

