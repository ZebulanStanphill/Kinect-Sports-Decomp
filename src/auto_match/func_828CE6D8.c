extern unsigned int *auStack_20;
extern int fn_828CCD48();
extern int fn_828CE118();


void fn_828CE6D8(unsigned __int64 param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned char auStack_20 [8];
  
  if (param_2 != (unsigned int *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    fn_828CCD48(param_2 + 3,auStack_20,auStack_20);
    fn_828CE118(param_2 + 3,param_3 + 3);
  }
  return;
}

