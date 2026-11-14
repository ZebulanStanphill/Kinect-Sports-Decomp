#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int sin();
extern int cos();
extern int fn_82F655D8();
extern int tan();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005340;
extern unsigned int lbl_82005344;
extern unsigned int lbl_82015468;
extern unsigned int lbl_82015618;
extern unsigned int lbl_8201DD74;
extern unsigned int lbl_82079FB8;
extern unsigned int lbl_82079FD0;
extern unsigned int lbl_82175460;


void fn_82FE3AE0(unsigned __int64 param_1,double param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  float fVar1;
  __int64 lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  double extraout_f1;
  double dVar10;
  double dVar11;
  
  uVar9 = (unsigned int)param_4;
  uVar8 = (unsigned int)((unsigned __int64)param_4 >> 0x20);
  pfVar7 = (float *)fn_82F6A548();
  dVar11 = (double)(param_5 & 0xffffffff);
  dVar10 = extraout_f1;
  if ((double)(float)(dVar11 * (double)lbl_82079FD0) <= extraout_f1) {
    dVar10 = (double)(float)(dVar11 * (double)lbl_82079FD0);
  }
  if (uVar9 < 7) {
    lVar2 = CONCAT44(uVar8,uVar9);
    if (uVar9 == 0) {
      fn_82F655D8(lbl_82015618,(double)(float)(param_2 * (double)lbl_82079FB8));
                    /* WARNING: Subroutine does not return */
      sin((double)(float)((double)(float)(dVar10 * (double)lbl_82015468) / dVar11));
    }
    if (lVar2 == 1) {
                    /* WARNING: Subroutine does not return */
      cos((double)(float)((double)(float)(dVar10 * (double)lbl_82015468) / dVar11));
    }
    if (lVar2 == 2) {
      fn_82F655D8(lbl_82015618,(double)(float)(param_2 * (double)lbl_82079FB8));
                    /* WARNING: Subroutine does not return */
      sin((double)(float)((double)(float)(dVar10 * (double)lbl_82015468) / dVar11));
    }
    if (lVar2 != 3) {
      if (lVar2 != 4) {
        if (lVar2 != 5) {
                    /* WARNING: Subroutine does not return */
          cos((double)(float)((double)(float)(dVar10 * (double)lbl_82015468) / dVar11)
                           );
        }
                    /* WARNING: Subroutine does not return */
        cos((double)(float)((double)(float)(dVar10 * (double)lbl_82015468) / dVar11));
      }
      dVar10 = (double)tan((double)(float)((double)(float)(dVar10 * (double)lbl_8201DD74) /
                                                   dVar11));
      fVar1 = (float)dVar10;
      fVar3 = fVar1 * fVar1 + lbl_82002AE0;
      fVar4 = lbl_82002AE0 / (fVar3 + fVar1 * lbl_82175460);
      fVar6 = fVar4 * lbl_82005340;
      fVar3 = (fVar3 - fVar1 * lbl_82175460) * fVar4;
      fVar1 = -((fVar1 * fVar1 - lbl_82002AE0) * fVar6);
      goto code_r0x82fe3f40;
    }
  }
  dVar10 = (double)tan((double)(float)((double)(float)(dVar10 * (double)lbl_8201DD74) /
                                               dVar11));
  fVar1 = lbl_82002AE0 / (float)dVar10;
  fVar3 = fVar1 * fVar1 + lbl_82002AE0;
  fVar4 = lbl_82002AE0 / (fVar3 + fVar1 * lbl_82175460);
  fVar6 = fVar4 * lbl_82005344;
  fVar3 = (fVar3 - fVar1 * lbl_82175460) * fVar4;
  fVar1 = (lbl_82002AE0 - fVar1 * fVar1) * fVar6;
code_r0x82fe3f40:
  fVar5 = lbl_82002AE0 / lbl_82002AE0;
  *pfVar7 = fVar5 * fVar4;
  pfVar7[1] = fVar5 * fVar6;
  pfVar7[2] = fVar5 * fVar4;
  pfVar7[3] = -(fVar5 * fVar1);
  pfVar7[4] = -(fVar5 * fVar3);
  fn_82F6A594();
  return;
}

