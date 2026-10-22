extern void fn_8282B5F8(void);
extern void fn_8282B710(void);
extern void fn_8282D640(char *, char *, void (*)(void), int);

void fn_8282B788(char *param_1)
{
  *(int *)(param_1 + 0x2c) = 0;
  if (*(param_1 + 0x3ef) != 0) {
    *(int *)(param_1 + 0x2b8) = 0;
    *(int *)(param_1 + 0x2bc) = 0;
    *(int *)(param_1 + 0x2c8) = 1;
    *(int *)(param_1 + 0x2d0) = 2;
    *(int *)(param_1 + 0x2d4) = 2;
    *(int *)(param_1 + 0x2cc) = 1;
    fn_8282D640(param_1, param_1 + 0x318, fn_8282B5F8, 0);
    if (*(param_1 + 0x3e8) == 0) {
      fn_8282D640(param_1, param_1 + 0x318, fn_8282B710, 0);
    }
  }
}
