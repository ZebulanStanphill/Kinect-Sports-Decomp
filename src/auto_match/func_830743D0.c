#define true 1
extern int fn_8306F320();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82186E58;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_830743D0(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  int *piVar2;
  __int64 lVar3;
  float *pfVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar7 = (double)lbl_82002AE0;
  lVar3 = 0;
  dVar5 = (double)lbl_82186E58;
  pfVar4 = (float *)(param_1 + 0x3c0);
  dVar6 = (double)lbl_821AAD20;
  piVar2 = (int *)0x831bcba0;
  do {
    if (*piVar2 == 0) {
LAB_83074460:
      *pfVar4 = (float)dVar7;
    }
    else {
      iVar1 = fn_8306F320(param_1,param_2,lVar3);
      if (iVar1 == 1) {
        *pfVar4 = (float)((double)*pfVar4 * dVar5);
      }
      else {
        if (iVar1 == 2) goto LAB_83074460;
        *pfVar4 = (float)dVar6;
      }
    }
    piVar2 = piVar2 + 3;
    lVar3 = lVar3 + 1;
    pfVar4 = pfVar4 + 1;
    if (-0x7ce43371 < (int)piVar2) {
      return;
    }
  } while( true );
}

