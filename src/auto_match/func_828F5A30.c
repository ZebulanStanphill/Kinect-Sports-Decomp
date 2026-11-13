extern int fn_828F59D0();
extern int fn_828F5AC0();
extern int fn_829206A0();
extern int fn_82BA02A8();


void fn_828F5A30(int param_1)

{
  if (*(void **)(param_1 + 0x38) != 0) {
    fn_828F59D0(*(int *)(param_1 + 0x38),1);
  }
  if (*(void **)(param_1 + 0x5c) != 0) {
    fn_828F5AC0(*(int *)(param_1 + 0x5c),1);
  }
  if ((*(int **)(param_1 + 0x48) != (int *)0x0) && (*(void **)(param_1 + 0x54) != 0)) {
    (*(int (**)())(**(int **)(param_1 + 0x48) + 4))(*(int **)(param_1 + 0x48), *(void **)(param_1 + 0x54));
  }
  fn_829206A0(param_1 + 0x3c);
  fn_82BA02A8(param_1);
  return;
}

