extern unsigned int *auStack_1a;
extern int fn_828171F8();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_820151C0;
extern float lbl_8201E104;
extern unsigned int uStack_1c;
extern unsigned int uStack_1e;
extern unsigned int uStack_20;


double fn_82817628(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  unsigned short uStack_20;
  unsigned short uStack_1e;
  unsigned short uStack_1c;
  unsigned short auStack_1a;
  
  dVar6 = (double)fn_828171F8(param_1,param_2,&uStack_1c,&uStack_1e,&uStack_20,&auStack_1a,param_4)
  ;
  fVar1 = *(float *)((unsigned int)uStack_20 * 4 + param_3);
  fVar4 = fVar1 * lbl_82002C5C;
  fVar2 = *(float *)((unsigned int)uStack_1c * 4 + param_3);
  fVar3 = *(float *)((unsigned int)uStack_1e * 4 + param_3);
  fVar5 = fVar2 * lbl_82002C5C;
  fVar2 = fVar2 * lbl_8201E104;
  return (double)(float)((double)(float)((double)(float)((double)((*(float *)((unsigned int)auStack_1a *
                                                                              4 + param_3) *
                                                                   lbl_8201E104 +
                                                                  (fVar3 * lbl_82002C5C - fVar4)) -
                                                                 fVar2) * dVar6 +
                                                        (double)((fVar5 - fVar3) + fVar4)) * dVar6 +
                                        (double)(fVar4 - fVar5)) * dVar6 +
                        (double)(fVar3 * lbl_820151C0 + fVar1 * lbl_8201E104 + fVar2));
}

