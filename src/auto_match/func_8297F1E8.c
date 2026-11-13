extern int fn_8297EB88(void *);
extern int fn_8297EFB8(void *);
int fn_8297F1E8(int param_1, int *param_2)
{
  int r;
  *(int *)(param_1 + 0xd8) = 0;
  *(int *)(param_1 + 0xdc) = 0;
  if (param_2 != 0) {
    *param_2 = 0;
  }
  r = fn_8297EB88((void *)param_1);
  if (r != 0 && r < 0) return r;
  r = fn_8297EFB8((void *)param_1);
  if (r != 0 && r < 0) return r;
  return 0;
}
