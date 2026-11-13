extern int fn_827A9620();


void fn_827A96C0(unsigned int *param_1,unsigned int *param_2)

{
  if (((unsigned __int64)param_2[2] < (unsigned __int64)param_1[2]) && (param_1[3] != 0)) {
    fn_827A9620(((unsigned __int64)param_2[2] & 0x1fffffff) * 8 + (unsigned __int64)*param_2,
                  (unsigned __int64)param_1[2] - (unsigned __int64)param_2[2],
                  ((unsigned __int64)param_2[4] & 0x3fffffff) * 4 + (unsigned __int64)param_2[1]);
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  return;
}

