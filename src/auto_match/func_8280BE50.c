extern unsigned int fStack_60;
extern unsigned int fStack_64;
extern unsigned int fStack_68;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern int fn_8280A668();
extern int fn_82F6A538();
extern int fn_82F6A584();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_8280BE50(unsigned __int64 param_1,double param_2,double param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,double param_7,double param_8,double param_9
                  )

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar7;
  unsigned __int64 uVar6;
  double dVar8;
  double extraout_f1;
  double dVar9;
  double dVar10;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float afStack_5c [19];
  
  pfVar7 = (float *)fn_82F6A538();
  dVar10 = extraout_f1;
  uVar6 = fn_8280A668(param_4,pfVar7,afStack_5c,&fStack_60);
  uVar6 = fn_8280A668(param_5,uVar6,&fStack_70,&fStack_6c);
  fn_8280A668(param_6,uVar6,&fStack_68,&fStack_64);
  fVar5 = lbl_82002AE0;
  dVar8 = (double)afStack_5c[0];
  dVar9 = (double)lbl_82002AE0;
  pfVar7[0xc] = (float)param_7;
  pfVar7[0xd] = (float)param_8;
  pfVar7[0xe] = (float)param_9;
  pfVar7[1] = fStack_68 * fStack_60;
  pfVar7[5] = fStack_64 * fStack_60;
  pfVar7[8] = fStack_70 * fStack_60;
  pfVar7[9] = (float)-dVar8;
  pfVar7[10] = fStack_6c * fStack_60;
  fVar1 = (float)((double)(fStack_68 * fStack_70) * dVar8 + (double)(fStack_64 * fStack_6c));
  *pfVar7 = fVar1;
  fVar2 = (float)((double)(fStack_64 * fStack_6c) * dVar8 + (double)(fStack_68 * fStack_70));
  pfVar7[6] = fVar2;
  fVar3 = (float)((double)(fStack_68 * fStack_6c) * dVar8 - (double)(fStack_64 * fStack_70));
  pfVar7[2] = fVar3;
  fVar4 = (float)((double)(fStack_64 * fStack_70) * dVar8 - (double)(fStack_68 * fStack_6c));
  pfVar7[4] = fVar4;
  if (dVar10 != dVar9) {
    *pfVar7 = (float)((double)fVar1 * dVar10);
    pfVar7[1] = (float)((double)(fStack_68 * fStack_60) * dVar10);
    pfVar7[2] = (float)((double)fVar3 * dVar10);
  }
  if (param_2 != dVar9) {
    pfVar7[4] = (float)((double)fVar4 * param_2);
    pfVar7[5] = (float)((double)(fStack_64 * fStack_60) * param_2);
    pfVar7[6] = (float)((double)fVar2 * param_2);
  }
  if (param_3 != dVar9) {
    pfVar7[8] = (float)((double)(fStack_70 * fStack_60) * param_3);
    pfVar7[9] = (float)(-dVar8 * param_3);
    pfVar7[10] = (float)((double)(fStack_6c * fStack_60) * param_3);
  }
  pfVar7[0xf] = fVar5;
  fVar1 = lbl_821AAD20;
  pfVar7[3] = lbl_821AAD20;
  pfVar7[7] = fVar1;
  pfVar7[0xb] = fVar1;
  fn_82F6A584();
  return;
}

