extern int fn_82A6ADE0();
extern int fn_82A7D0F8();
extern int fn_82A7E020();
extern int fn_82A7E4C8();
extern int fn_82A7F958();
extern int fn_82A7FF10();
extern int fn_82A80348();
extern int fn_82BA02A8();
extern int fn_82D7E470();


unsigned __int64 fn_82A6AE80(int param_1)

{
  int (**pcVar1)();
  
  fn_82A6ADE0();
  *(int (***)())(param_1 + 0x1f0) = fn_82A7E4C8;
  *(int (***)())(param_1 + 0x204) = fn_82A7E020;
  *(int (***)())(param_1 + 0x200) = fn_82BA02A8;
  *(int (***)())(param_1 + 0x1fc) = fn_82D7E470;
  *(int (***)())(param_1 + 0x1f8) = fn_82BA02A8;
  *(int (***)())(param_1 + 500) = fn_82BA02A8;
  if (*(int *)(param_1 + 0x118) == 1) {
    if (*(int *)(param_1 + 0x28) == 0) {
      *(unsigned int *)(param_1 + 0x1dc) = 0;
      goto LAB_82a6af44;
    }
    pcVar1 = fn_82A7D0F8;
  }
  else {
    pcVar1 = fn_82A80348;
  }
  *(int (***)())(param_1 + 0x1dc) = pcVar1;
LAB_82a6af44:
  *(int (***)())(param_1 + 0x204) = fn_82A7F958;
  *(int (***)())(param_1 + 0x1f0) = fn_82A7FF10;
  return 0;
}

