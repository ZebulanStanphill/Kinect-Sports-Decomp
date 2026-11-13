extern int fn_824645B8();
extern int fn_82464660();
extern int fn_8252ACC0();
extern int fn_8252AE68();


void fn_82463EC8(int param_1,int param_2)

{
  if (((*(int *)(param_1 + 4) == 7) && (param_2 != 0xb)) && (*(int *)(param_1 + 0x1c) != 0)) {
    fn_8252AE68(*(unsigned int *)(param_1 + 0x20),1);
  }
  if ((param_2 == 2) || (param_2 == 3)) {
    fn_8252AE68(*(unsigned int *)(param_1 + 0x20),1);
    fn_8252AE68(*(unsigned int *)(param_1 + 0x24),1);
    goto LAB_82463fa8;
  }
  if (param_2 == 5) {
    fn_8252ACC0(*(unsigned int *)(param_1 + 0x24),*(unsigned int *)(param_1 + 8));
    if (*(int *)(param_1 + 0x1c) != 0) goto LAB_82463fa8;
  }
  else {
    if (param_2 != 6) {
      if (param_2 == 10) {
        fn_824645B8(param_1);
      }
      else if (param_2 == 0xc) {
        fn_82464660(param_1);
      }
      goto LAB_82463fa8;
    }
    if (*(int *)(param_1 + 0x1c) == 0) goto LAB_82463fa8;
  }
  fn_8252ACC0(*(unsigned int *)(param_1 + 0x20),*(unsigned int *)(param_1 + 8));
LAB_82463fa8:
  *(int *)(param_1 + 4) = param_2;
  return;
}

