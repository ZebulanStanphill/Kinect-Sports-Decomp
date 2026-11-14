#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_826EBD10();
extern int sin();
extern int fn_82F65018();
extern int fn_82F65E18();
extern int fn_82F6A538();
extern int fn_82F6A584();
extern unsigned int lbl_82002C28;
extern unsigned int lbl_82005344;
extern unsigned int lbl_82015468;
extern unsigned int uStack_70;


void fn_82779FD8(unsigned __int64 param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,unsigned __int64 param_7,__int64 param_8)

{
  int iVar1;
  float *pfVar2;
  double extraout_f1;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  unsigned __int64 uStack_70;
  
  iVar1 = fn_82F6A538();
  dVar4 = extraout_f1;
  dVar3 = (double)fn_82F65018(param_4,param_3);
  dVar5 = (double)(float)dVar3;
  dVar3 = (double)fn_82F65018(param_6,param_5);
  pfVar2 = (float *)param_8;
  dVar6 = (double)(float)dVar3;
  dVar3 = (double)fn_82F65E18((double)(*(float *)(iVar1 + 4) /
                                       (*pfVar2 * lbl_82002C28 + *(float *)(iVar1 + 4))));
  uStack_70 = CONCAT44((float)(dVar4 + param_3),(float)(param_2 + param_4));
  dVar3 = (double)((float)dVar3 * lbl_82005344);
  fn_826EBD10(param_8 + 8,&uStack_70);
  *(int *)((int)pfVar2[10] + 4) = *(int *)((int)pfVar2[10] + 4) + 1;
  if (dVar6 < dVar5) {
    dVar6 = (double)(float)(dVar6 + (double)lbl_82015468);
  }
  iVar1 = (int)((double)(float)(dVar6 - dVar5) / dVar3);
  uStack_70 = (__int64)(iVar1 + 1);
  if (0 < iVar1) {
                    /* WARNING: Subroutine does not return */
    sin((double)(float)((double)(float)((double)(float)(dVar6 - dVar5) /
                                                     (double)uStack_70) + dVar5));
  }
  uStack_70 = CONCAT44((float)(dVar4 + param_5),(float)(param_2 + param_6));
  fn_826EBD10(param_8 + 8,&uStack_70);
  *(int *)((int)pfVar2[10] + 4) = *(int *)((int)pfVar2[10] + 4) + 1;
  fn_82F6A584();
  return;
}

