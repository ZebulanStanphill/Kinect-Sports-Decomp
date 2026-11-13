extern unsigned int *auStack_50;
extern float fRam8326b868;
extern unsigned int fStack_54;
extern unsigned int fStack_58;
extern int fn_82588280();
extern int fn_825E4A78();
extern int fn_825E4CA8();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8326B8E8;
extern unsigned int lbl_8326B8F0;
extern unsigned int uRam8326b858;
extern unsigned int uStack_60;


void fn_825889E0(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  float *param_5,float *param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned int uVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  unsigned int in_stack_00000054;
  unsigned __int64 uStack_60;
  float fStack_58;
  float fStack_54;
  unsigned __int64 auStack_50 [10];
  
  dVar4 = (double)ltcg_pool_0_0f;
  fStack_58 = ltcg_pool_0_0f;
  uStack_60 = ((((unsigned __int64)(uStack_60)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)(ltcg_pool_0_0f)) & ((unsigned __int64)0xFFFFFFFF)) << 0));
  dVar3 = (double)fn_825E4A78(param_2,param_7,param_1,param_4,&fStack_58,&uStack_60);
  uVar1 = (unsigned int)param_1 & 0xffff;
  fStack_54 = (float)((double)(*param_6 + (((unsigned __int64)(uStack_60) >> 0) & 0xFFFFFFFF)) - dVar3);
  iVar2 = *(int *)(&lbl_8326B8E8)[param_2];
  fStack_58 = *param_5 + fStack_58;
  if (((int)uVar1 < iVar2) ||
     (iVar2 = uVar1 - iVar2, ((int *)(&lbl_8326B8E8)[param_2])[1] < (int)uVar1)) {
    iVar2 = 0;
  }
  iVar2 = *(int *)(&lbl_8326B8F0 + param_2 * 4) + iVar2 * 0x18;
  uStack_60 = *(unsigned __int64 *)(iVar2 + 8);
  auStack_50[0] = *(unsigned __int64 *)(iVar2 + 0x10);
  fn_825E4CA8((double)fRam8326b868,param_8,&fStack_58,param_4,&uStack_60,auStack_50,uStack_60,
                  uRam8326b858,in_stack_00000054);
  dVar3 = (double)fn_82588280(dVar4,param_2,param_1,param_7);
  *param_5 = (float)(dVar3 + (double)*param_5);
  return;
}

