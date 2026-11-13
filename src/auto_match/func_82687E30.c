extern int fn_8267C4C8();
extern int fn_82687270(unsigned int);


void fn_82687E30(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
  if (param_2 != 0) {
    fn_8267C4C8(param_2);
  }
  if ((param_3 & 0xffffffff) != 0) {
    fn_8267C4C8(param_3);
  }
  if (*param_1 != 0) {
    fn_82687270(*param_1);
  }
  if (param_1[1] != 0) {
    fn_82687270(param_1[1]);
  }
  *param_1 = (int)param_2;
  param_1[1] = (int)param_3;
  return;
}

