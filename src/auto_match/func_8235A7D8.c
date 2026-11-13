extern void fn_822315A0(void *);
extern int fn_823BC2C8();
extern int fn_8265CA20();


int fn_8235A7D8(int param_1,unsigned int param_2)

{
  if (*(unsigned int *)(param_1 + 0x44) != 0) {
    fn_822315A0(*(void **)(param_1 + 0x44));
  }
  if (*(unsigned int *)(param_1 + 0x3c) != 0) {
    fn_822315A0(*(void **)(param_1 + 0x3c));
  }
  if (*(unsigned int *)(param_1 + 0x34) != 0) {
    fn_822315A0(*(void **)(param_1 + 0x34));
  }
  fn_823BC2C8(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

