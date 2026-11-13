extern int fn_82A1F2F8();
extern int fn_82E1FE58();


int fn_82E1FF60(int param_1)

{
  int r;
  int now;

  if (*(char *)(param_1 + 0x15) == 0) {
    return 0x80004005;
  }
  if (*(unsigned int *)(param_1 + 0x10) == 0) {
    return 0;
  }
  r = 0;
  if (*(char *)(param_1 + 0x14) == 0) {
    now = fn_82A1F2F8();
    if ((unsigned int)(now - *(int *)(param_1 + 4)) > *(unsigned int *)(param_1 + 0x10)) {
      r = fn_82E1FE58(param_1);
      *(int *)(param_1 + 4) = now;
    }
  }
  return r;
}
