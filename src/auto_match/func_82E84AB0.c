extern int fn_82BA02A8();
extern int fn_82F09EE0();
extern int fn_82F0A3B0();
extern int fn_82F0AC28();
extern int fn_82F0BA40();
extern int fn_82F0BE40();
extern int fn_82F0CB98();


void fn_82E84AB0(int param_1)

{
  *(int (***)())(param_1 + 0x1f90) = fn_82BA02A8;
  if (*(int *)(param_1 + 0x648) != 0) {
    *(int (***)())(param_1 + 0x1f84) = fn_82F0AC28;
    *(int (***)())(param_1 + 0x1f8c) = fn_82F0BE40;
    *(int (***)())(param_1 + 0x1f90) = fn_82F0CB98;
  }
  else {
    *(int (***)())(param_1 + 0x1f84) = fn_82F0BA40;
    *(int (***)())(param_1 + 0x1f8c) = *(int (***)())(param_1 + 0x1f84);
  }
  if (*(int (***)())(param_1 + 0x1f84) == fn_82F0A3B0) {
    *(int (***)())(param_1 + 0x1f88) = fn_82F09EE0;
    return;
  }
  *(int (***)())(param_1 + 0x1f88) = *(int (***)())(param_1 + 0x1f84);
  return;
}
