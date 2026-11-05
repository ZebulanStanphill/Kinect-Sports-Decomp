extern int fn_822AF200(void *, int *);

int fn_824C04E0(int param_1, int param_2)
{
  int iface;
  unsigned char r;
  int local = 0;

  fn_822AF200((void *)(param_1 + 0x40), &local);
  iface = *(int *)(*(int *)(param_1 + 0x3c) + 8);
  if (iface != 0) {
    r = ((unsigned char (*)(int, int))(*(int *)(*(int *)iface + 8)))(iface, param_2);
  } else {
    r = 1;
  }
  if (r != 0) {
    *(int *)(param_1 + 0x18) = param_2;
    return 1;
  }
  return 0;
}
