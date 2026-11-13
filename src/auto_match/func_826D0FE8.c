extern int fn_826CBFF0();
extern int fn_826D0878();


void fn_826D0FE8(int param_1,unsigned int param_2)

{
  *(unsigned int *)(param_1 + 0xb8) = param_2;
  if ((*(int *)(param_1 + 0x14) >= -1) && ((*(unsigned char *)(param_1 + 0x66) & 0x10) == 0)) {
    fn_826CBFF0(param_1,*(unsigned int *)(param_1 + 0xa0));
  }
  if (*(int *)(param_1 + 0xb8) == 1) {
    fn_826D0878(param_1,0);
  }
  return;
}

