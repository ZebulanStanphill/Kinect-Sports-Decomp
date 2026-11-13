extern int fn_830777C0();
extern int fn_83077848();


int fn_830783E0(int param_1,unsigned int param_2,unsigned int param_3)

{
  *(unsigned int *)(param_1 + 0x10) = param_2;
  *(unsigned int *)(param_1 + 0x14) = param_3;
  fn_830777C0();
  fn_83077848();
  return param_1;
}

