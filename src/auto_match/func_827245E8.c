extern int fn_8265CA20();
extern int fn_8267C498();


int fn_827245E8(int param_1,unsigned int param_2)

{
  if (*(unsigned int *)(param_1 + 0x28) != 0) {
    fn_8267C498(*(int *)(param_1 + 0x28));
  }
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

