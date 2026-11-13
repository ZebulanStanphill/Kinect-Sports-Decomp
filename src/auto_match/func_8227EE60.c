#define true 1
#define NAN(x) ((x) != (x))
extern int fn_8227E950();
extern int fn_8227EA48();
extern int fn_8227EB10();
extern int fn_8227F020();
extern unsigned int lbl_82005748;
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_30;


void fn_8227EE60(double param_1,int param_2,int *param_3)

{
  float fVar1;
  unsigned int uVar2;
  int iVar3;
  int *piVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  unsigned __int64 uStack_30;
  
  uStack_30 = ((((unsigned __int64)(uStack_30)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)(-1)) & ((unsigned __int64)0xFFFFFFFF)) << 0));
  if (*(int *)(param_2 + 0x34) == 0) {
    iVar3 = fn_8227F020(param_2,param_3,&uStack_30);
    if (iVar3 == 0) {
      if (param_3 != (int *)0x0) {
        fn_8227E950(param_2,param_3,0xffffffffffffffff);
      }
    }
    else {
      if ((((unsigned __int64)(uStack_30) >> 0) & 0xFFFFFFFF) != *(int *)(param_2 + 0x2c)) {
        fn_8227E950(param_2,param_3);
      }
      fVar1 = (float)((double)*(float *)(param_2 + 0x50) + param_1);
      dVar7 = (double)fVar1;
      *(float *)(param_2 + 0x50) = fVar1;
      dVar6 = (double)*(float *)(param_2 + 0x54);
      dVar9 = (double)ltcg_pool_0_0f;
      dVar5 = (double)lbl_82005748;
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((dVar7 < dVar9) << 2) | (unsigned int)(NAN(dVar7) || NAN(dVar9)) << 2)) <
          0.0) {
        dVar7 = dVar9;
      }
      dVar8 = dVar6;
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)(((double)(float)(dVar7 - dVar6) < dVar9) << 2) |
                    (unsigned int)(NAN((double)(float)(dVar7 - dVar6)) || NAN(dVar9)) << 2)) < 0.0) {
        dVar8 = dVar7;
      }
      *(float *)(param_2 + 0x50) = (float)dVar8;
      uStack_30 = (__int64)((double)(float)(dVar8 * dVar5) / dVar6);
      uVar2 = (((unsigned __int64)(uStack_30) >> 32) & 0xFFFFFFFF);
      fn_8227EB10(param_2,(((unsigned __int64)(uStack_30) >> 32) & 0xFFFFFFFF));
      param_3[0xf] = uVar2;
      if (99 < uVar2) {
        piVar4 = (int *)param_3[0x13];
        while( true ) {
          if (piVar4 == (int *)param_3[0x14]) break;
          iVar3 = *piVar4;
          piVar4 = piVar4 + 1;
          *(float *)((*param_3 + 0xf) * 4 + iVar3) = (float)dVar9;
        }
        fn_8227EA48(param_2);
      }
    }
  }
  return;
}

