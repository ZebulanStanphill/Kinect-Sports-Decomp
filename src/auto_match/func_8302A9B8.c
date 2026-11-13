extern int fn_8302A8F0();
extern unsigned int lbl_83264368;


void fn_8302A9B8(float *param_1,float *param_2)

{
  double dVar1;
  
  dVar1 = (double)fn_8302A8F0((double)*param_1,lbl_83264368);
  *param_1 = (float)dVar1;
  dVar1 = (double)fn_8302A8F0((double)*param_2,lbl_83264368);
  *param_2 = (float)dVar1;
  return;
}

