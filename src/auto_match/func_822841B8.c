typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_822842B0();
extern int fn_82672C20();
extern unsigned int lbl_82192480;
extern unsigned int lbl_82192604;
extern unsigned int ltcg_pool_0_0f;


void fn_822841B8(double param_1,unsigned int *param_2)

{
  float fVar1;
  bool bVar2;
  unsigned __int64 uVar3;
  float *pfVar4;
  double dVar5;
  
  pfVar4 = (float *)(param_2 + 0xc);
  bVar2 = false;
  uVar3 = 0;
  dVar5 = (double)ltcg_pool_0_0f;
  do {
    if (pfVar4[-2] != 0.0) {
      if (pfVar4[-1] == 0.0) {
        bVar2 = true;
      }
      else {
        fVar1 = *pfVar4;
        *pfVar4 = (float)((double)fVar1 - param_1);
        if ((double)(float)((double)fVar1 - param_1) <= dVar5) {
          pfVar4[-1] = 0.0;
          fn_822842B0(param_2,uVar3);
        }
      }
    }
    uVar3 = uVar3 + 1;
    pfVar4 = pfVar4 + 0x8d;
  } while ((uVar3 & 0xffffffff) < 6);
  if (bVar2) {
    fVar1 = (float)param_2[2];
    param_2[2] = (float)((double)fVar1 - param_1);
    if ((double)(float)((double)fVar1 - param_1) < dVar5) {
      param_2[2] = lbl_82192604;
      fn_82672C20(*param_2,0xffffffff821a8c04,0,0);
    }
  }
  else {
    param_2[2] = lbl_82192480;
  }
  return;
}

