extern unsigned int *auStack_1a;
extern int fn_828171F8();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005344;
extern unsigned int uStack_1c;
extern unsigned int uStack_1e;
extern unsigned int uStack_20;


double fn_82817578(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  unsigned short uStack_20;
  unsigned short uStack_1e;
  unsigned short uStack_1c;
  unsigned short auStack_1a;
  
  dVar2 = (double)fn_828171F8(param_1,param_2,&auStack_1a,&uStack_1c,&uStack_1e,&uStack_20,param_4)
  ;
  dVar6 = (double)*(float *)((unsigned int)uStack_1e * 4 + param_3);
  dVar5 = (double)*(float *)((unsigned int)uStack_1c * 4 + param_3);
  dVar7 = (double)*(float *)((unsigned int)uStack_20 * 4 + param_3);
  dVar3 = (double)(float)(dVar6 - dVar5);
  dVar4 = (double)*(float *)((unsigned int)auStack_1a * 4 + param_3);
  dVar1 = (double)lbl_82002C5C;
  return (double)(float)((double)(float)((double)(float)((double)(float)((double)(float)((double)(
                                                  float)(dVar7 - dVar4) - dVar3) * dVar1 - dVar3) *
                                                  dVar2 + -(double)(float)((double)(float)(dVar5 + 
                                                  dVar7) * dVar1 -
                                                  (double)(float)(dVar3 * (double)lbl_82005344 +
                                                                 dVar4))) * dVar2 +
                                        (double)(float)((double)(float)(dVar6 - dVar4) * dVar1)) *
                         dVar2 + dVar5);
}

