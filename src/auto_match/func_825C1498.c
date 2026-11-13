#define true 1
extern float fRam831d4648;
extern int fn_825529B0();
extern int fn_82552B50();
extern unsigned int ltcg_pool_0_0f;


void fn_825C1498(double param_1,int param_2,unsigned __int64 param_3,int param_4)

{
  int iVar1;
  __int64 lVar2;
  int iVar3;
  float *pfVar4;
  double dVar5;
  double dVar6;
  
  pfVar4 = (float *)(param_2 + 0x10);
  dVar6 = (double)ltcg_pool_0_0f;
  iVar3 = param_2 + 0x1c;
  lVar2 = 3;
  do {
    if (pfVar4[0xc] != 0.0) {
      if (param_4 == 0) {
        iVar1 = fn_825529B0(iVar3);
        if (iVar1 != 0) goto LAB_825c150c;
      }
      fn_82552B50(iVar3,1);
      pfVar4[0xc] = 0.0;
    }
LAB_825c150c:
    if (dVar6 < (double)*pfVar4) {
      *pfVar4 = -(float)((double)fRam831d4648 * param_1 - (double)*pfVar4);
    }
    lVar2 = lVar2 + -1;
    pfVar4 = pfVar4 + 1;
    iVar3 = iVar3 + 0xc;
    if (lVar2 == 0) {
      dVar5 = (double)*(float *)(param_2 + 0x50);
      if (dVar6 < dVar5) {
        if (dVar5 <= param_1) {
          *(float *)(param_2 + 0x50) = (float)dVar6;
          *(unsigned int *)(param_2 + 0x4c) = 0xffffffff;
        }
        else {
          *(float *)(param_2 + 0x50) = (float)(dVar5 - param_1);
        }
      }
      return;
    }
  } while( true );
}

