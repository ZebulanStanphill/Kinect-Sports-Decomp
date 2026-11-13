typedef unsigned char bool;
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern int fn_8280A5D8();
extern int fn_82810328();
extern int fn_8306B530();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_82862BC8(double param_1,unsigned __int64 param_2,float *param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned int param_6)

{
  float fVar1;
  bool bVar2;
  double dVar3;
  struct { float first; float second; } stack_pair_40;

  float fStack_38;
  
  fn_82810328(param_2,param_3,&stack_pair_40.first);
  bVar2 = fStack_38 == lbl_821AAD20;
  *(bool *)param_6 = bVar2;
  if (!bVar2) {
    dVar3 = (double)fn_8280A5D8();
    fVar1 = (float)((double)(float)(param_1 - (double)param_3[2]) * dVar3);
    fn_8306B530((double)(stack_pair_40.first * fVar1 + *param_3),(double)(stack_pair_40.second * fVar1 + param_3[1]),
                 param_1,(double)lbl_82002AE0,param_5);
  }
  return;
}

