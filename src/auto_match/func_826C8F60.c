extern int fn_8267BE38();
extern int fn_8267C498();


int fn_826C8F60(int param_1,unsigned int param_2)

{
  if (*(unsigned int *)(param_1 + 0x1c) != 0) {
    fn_8267C498(*(int *)(param_1 + 0x1c));
  }
  if ((param_2 & 1) != 0) {
    fn_8267BE38(param_1);
  }
  return param_1;
}

