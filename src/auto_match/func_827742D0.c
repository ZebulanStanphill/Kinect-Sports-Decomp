extern int fn_8265CA20();
extern int fn_82761DE8();


int fn_827742D0(int param_1,unsigned int param_2)

{
  if (*(unsigned int *)(param_1 + 0x10) != 0) {
    fn_82761DE8(*(int *)(param_1 + 0x10));
  }
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

