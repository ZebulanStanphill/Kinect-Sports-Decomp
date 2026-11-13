extern int fn_8267C4C8(unsigned int p);
extern int fn_8267C4F0(unsigned int p);
extern int fn_826EA058();
extern int fn_826EA248();
extern int fn_826EA410();


int * fn_826EA4C8(unsigned int *param_1,unsigned int param_2)

{
  param_1[5] = 0;
  if (param_2 != 0) {
    fn_8267C4C8(param_2);
  }
  if (param_1[5] != 0) {
    fn_8267C4F0(param_1[5]);
  }
  param_1[5] = (int)param_2;
  param_1[2] = (int)fn_826EA058;
  param_1[3] = (int)fn_826EA248;
  param_1[4] = (int)fn_826EA410;
  *param_1 = (int)(param_1 + 6);
  param_1[1] = 0x800;
  return param_1;
}

