extern int fn_8251FA58();
extern int fn_8265CA20();


void fn_82454F08(int *param_1)

{
  if (*(int *)(*param_1 + 0x14) != 0) {
    fn_8251FA58(*(unsigned int *)(*param_1 + 4));
    fn_8251FA58(*(unsigned int *)(*param_1 + 8));
    fn_8251FA58(*(unsigned int *)(*param_1 + 0xc));
    fn_8251FA58(*(unsigned int *)(*param_1 + 0x10));
    *(unsigned int *)(*param_1 + 4) = 0;
    *(unsigned int *)(*param_1 + 8) = 0;
    *(unsigned int *)(*param_1 + 0xc) = 0;
    *(unsigned int *)(*param_1 + 0x10) = 0;
  }
  fn_8265CA20(*param_1);
  return;
}

