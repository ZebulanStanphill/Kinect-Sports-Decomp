extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_82684168();


void fn_826844B8(int param_1,unsigned int param_2)

{
  if (*(unsigned int *)(param_1 + 4) != 0) {
    if (param_2 != 0) {
      fn_8267C4C8(param_2);
    }
    if (*(unsigned int *)(param_1 + 8) != 0) {
      fn_8267C4F0(*(unsigned int *)(param_1 + 8));
    }
    *(unsigned int *)(param_1 + 8) = param_2;
    fn_82684168(*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_2 + 8));
  }
  return;
}

