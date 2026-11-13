extern int fn_83022530();


void fn_830226E0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int *param_4,
                  unsigned int *param_5)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (double)(float)param_5[0xd];
  dVar1 = (double)((float)((double)(float)param_5[5] - dVar2) * (float)param_4[3]);
  fn_83022530((double)(float)param_5[0xc],
                    (double)((float)((double)(float)param_5[4] - (double)(float)param_5[0xc]) *
                            (float)param_4[3]),param_3,dVar1,param_4,*param_5,
                    *(unsigned int *)*param_4);
  fn_83022530(dVar2,dVar1,param_4,
                    (unsigned __int64)*(unsigned short *)(param_5 + 3) * 4 + (unsigned __int64)*param_5,
                    (unsigned __int64)*(unsigned short *)((unsigned int *)*param_4 + 3) * 4 + (unsigned __int64)*(unsigned int *)*param_4)
  ;
  return;
}

