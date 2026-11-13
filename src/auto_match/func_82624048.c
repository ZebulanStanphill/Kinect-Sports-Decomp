#define true 1
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_c0;
extern float fRam8326b4f4;
extern int fn_82588528();
extern int fn_82624218();
extern int fn_82A2A288();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_8326B850;
extern unsigned int lbl_8326B85C;
extern unsigned int lbl_8326B860;
extern unsigned int lbl_8326B874;
extern unsigned int lbl_8326B878;
extern unsigned int lbl_8326B8E8;
extern float lbl_83274AFC;
extern unsigned int uRam8326b858;
extern unsigned int uRam83274af4;
extern unsigned int uStack_128;


void fn_82624048(char *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  __int64 lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  float afStack_130 [2];
  unsigned __int64 uStack_128;
  __int64 lStack_120;
  __int64 lStack_118;
  __int64 lStack_110;
  char acStack_100 [64];
  unsigned char auStack_c0 [144];
  
  iVar6 = *param_2;
  iVar5 = *param_3;
  lbl_8326B85C = lbl_83274AFC;
  lbl_8326B860 = lbl_83274AFC;
  uRam8326b858 = uRam83274af4;
  lbl_8326B874 = *(float *)((&lbl_8326B8E8)[lbl_8326B850] + 0x10) * lbl_83274AFC * lbl_8218E8E8;
  lbl_8326B878 = *(float *)((&lbl_8326B8E8)[lbl_8326B850] + 0x10) * lbl_83274AFC * lbl_8218E8E8;
  cVar4 = *param_1;
  do {
    if (cVar4 == '\0') {
      *param_2 = iVar6;
      *param_3 = iVar5;
      return;
    }
    cVar4 = *param_1;
    iVar2 = 0;
    lVar3 = (__int64)cVar4;
    if (lVar3 != 0) {
      iVar1 = -(int)param_1;
      do {
        if (((int)lVar3 == 10) || (0x3e < iVar2)) break;
        param_1[(int)(acStack_100 + iVar1)] = cVar4;
        iVar2 = iVar2 + 1;
        param_1 = param_1 + 1;
        cVar4 = *param_1;
        lVar3 = (__int64)cVar4;
      } while (lVar3 != 0);
    }
    acStack_100[iVar2] = '\0';
    fn_82A2A288(0,0,acStack_100,0xffffffffffffffff,auStack_c0,0x40);
    lStack_120 = (__int64)iVar6;
    lStack_110 = (__int64)iVar5;
    uStack_128 = CONCAT44((float)lStack_110,(((unsigned __int64)(uStack_128) >> 32) & 0xFFFFFFFF));
    dVar7 = (double)lStack_120;
    afStack_130[0] = (float)lStack_120;
    fn_82588528(auStack_c0,afStack_130,&uStack_128);
    lVar3 = (__int64)*param_1;
    if (lVar3 != 0) {
      uStack_128 = (__int64)((double)afStack_130[0] - dVar7);
      iVar6 = (((unsigned __int64)(uStack_128) >> 32) & 0xFFFFFFFF) + iVar6;
      lStack_118 = (__int64)iVar6;
      if (fRam8326b4f4 < (float)lStack_118) {
        do {
          if ((int)lVar3 == 10) break;
          param_1 = param_1 + 1;
          lVar3 = (__int64)*param_1;
        } while (lVar3 != 0);
      }
    }
    if (*param_1 == '\n') {
      param_1 = param_1 + 1;
      iVar2 = fn_82624218();
      iVar6 = *param_2;
      iVar5 = iVar2 + iVar5;
    }
    cVar4 = *param_1;
  } while( true );
}

