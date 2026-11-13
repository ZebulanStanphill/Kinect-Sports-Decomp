extern int fn_824EA798();
extern int fn_824EAEA0();
extern int fn_8266F580();


void fn_8227DB10(float *param_1)

{
  double dVar1;
  
  dVar1 = (double)param_1[6];
  if (param_1[8] == 0.0) {
    fn_8266F580(param_1[0xf]);
    fn_824EA798((double)*param_1,(double)param_1[1],(double)param_1[2],(double)param_1[4],
                      (double)param_1[5],dVar1);
  }
  else {
    fn_8266F580(param_1[0xf]);
    fn_824EAEA0((double)*param_1,(double)param_1[1],(double)param_1[2],(double)param_1[4],
                      (double)param_1[5],dVar1);
  }
  return;
}

