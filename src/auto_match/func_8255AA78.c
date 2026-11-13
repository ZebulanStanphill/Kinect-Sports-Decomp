extern double sqrt(double);
#define SQRT(x) sqrt(x)
#define _fStack00000030 ((*(unsigned __int64*)&fStack00000030))
#define _fStack00000038 ((*(unsigned __int64*)&fStack00000038))
#define _fStack00000040 ((*(unsigned __int64*)&fStack00000040))
#define _fStack00000048 ((*(unsigned __int64*)&fStack00000048))
extern unsigned int fStack00000030;
extern unsigned int fStack00000034;
extern unsigned int fStack00000038;
extern unsigned int fStack00000040;
extern unsigned int fStack00000044;
extern unsigned int fStack00000048;
extern int fn_8253FD80();
extern int fn_82809D40();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int register0x0000000c;
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000050;


float * fn_8255AA78(float *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                     unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  __int64 lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  float fStack00000030;
  float fStack00000034;
  float fStack00000038;
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  unsigned __int64 uStack00000050;
  float afStack_30 [8];
  
  fVar3 = lbl_821CA460;
  pfVar6 = afStack_30;
  pfVar5 = (float *)((int)register0x0000000c + 0x24);
  dVar11 = (double)ltcg_pool_0_0f;
  lVar8 = 3;
  do {
    dVar9 = (double)(pfVar5[-1] * pfVar5[-1] + pfVar5[1] * pfVar5[1] + *pfVar5 * *pfVar5);
    if (dVar9 == dVar11) {
      *pfVar6 = fVar3;
    }
    else {
      fVar2 = fVar3 / (float)SQRT(dVar9);
      *pfVar6 = fVar2;
      if ((double)fVar2 != dVar11) {
        *pfVar6 = fVar2;
      }
    }
    pfVar5 = pfVar5 + 4;
    pfVar6 = pfVar6 + 1;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  iVar4 = 0;
  do {
    iVar7 = 0;
    lVar8 = 3;
    do {
      iVar1 = (iVar4 + iVar7) * 4;
      iVar7 = iVar7 + 1;
      *(float *)((int)&stack0x00000020 + iVar1) =
           *(float *)((int)afStack_30 + iVar4) * *(float *)((int)&stack0x00000020 + iVar1);
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    iVar4 = iVar4 + 4;
  } while (iVar4 < 0xc);
  fStack00000044 = (float)param_6;
  dVar9 = (double)fStack00000044;
  uStack00000020 = param_2;
  uStack00000028 = param_3;
  _fStack00000030 = param_4;
  _fStack00000038 = param_5;
  _fStack00000040 = param_6;
  _fStack00000048 = param_7;
  uStack00000050 = param_8;
  dVar10 = (double)fn_8253FD80(-dVar9);
  dVar9 = (double)fStack00000040;
  *param_1 = (float)dVar10;
  if ((dVar9 == dVar11) && ((double)fStack00000048 == dVar11)) {
    dVar9 = (double)fStack00000030;
    if ((dVar9 == dVar11) && ((double)fStack00000038 == dVar11)) {
      param_1[1] = (float)dVar11;
      goto LAB_8255abb4;
    }
  }
  dVar9 = (double)fn_82809D40(dVar9);
  param_1[1] = (float)dVar9;
LAB_8255abb4:
  if (((double)(((unsigned __int64)(uStack00000020) >> 32) & 0xFFFFFFFF) == dVar11) && ((double)fStack00000034 == dVar11)) {
    param_1[2] = (float)dVar11;
  }
  else {
    dVar11 = (double)fn_82809D40();
    param_1[2] = (float)dVar11;
  }
  return param_1;
}

