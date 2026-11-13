extern unsigned int fStack_40;
extern int fn_8280A668();


void fn_8281CEE8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,float *param_4)

{
  unsigned __int64 uVar1;
  float *in_r7;
  double dVar2;
  double dVar3;
  double dVar4;
  float fStack_40;
  float afStack_3c [9];
  
  uVar1 = fn_8280A668(param_4,&fStack_40,afStack_3c);
  dVar4 = (double)(param_4[2] * afStack_3c[0] + param_4[1] * fStack_40);
  dVar2 = (double)(param_4[1] * afStack_3c[0] - param_4[2] * fStack_40);
  uVar1 = fn_8280A668(param_2,uVar1,&fStack_40,afStack_3c);
  dVar3 = (double)(float)((double)*param_4 * (double)afStack_3c[0] +
                         (double)(float)(dVar4 * (double)fStack_40));
  in_r7[2] = (float)(dVar4 * (double)afStack_3c[0] -
                    (double)(float)((double)*param_4 * (double)fStack_40));
  fn_8280A668(param_3,uVar1,&fStack_40,afStack_3c);
  *in_r7 = (float)(dVar3 * (double)afStack_3c[0] - (double)(float)(dVar2 * (double)fStack_40));
  in_r7[1] = (float)(dVar3 * (double)fStack_40 + (double)(float)(dVar2 * (double)afStack_3c[0]));
  return;
}

