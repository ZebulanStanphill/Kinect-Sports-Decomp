extern int fn_8251E4D0();
extern int fn_825C2DC0();
extern int fn_82F65FE0();
extern unsigned int ltcg_pool_0_0f;


double fn_8262F3A0(double param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,float *param_5
                    )

{
  float fVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  dVar11 = (double)ltcg_pool_0_0f;
  if (param_5 != (float *)0x0) {
    *param_5 = ltcg_pool_0_0f;
  }
  lVar6 = (unsigned __int64)*(unsigned int *)(param_2 + 0x4c) + 0xbbc;
  if (*(unsigned int *)(param_2 + 0x380) < *(unsigned int *)(param_2 + 900)) {
    fn_82F65FE0(*(unsigned int *)(param_2 + 0x380),*(unsigned short *)(param_2 + 0x390),
                      *(unsigned short *)(param_2 + 0x38c),0xffffffff825731d8);
  }
  *(unsigned short *)(param_2 + 0x3a4) = 0;
  *(unsigned int *)(param_2 + 0x398) = *(unsigned int *)(param_2 + 0x394);
  if (*(unsigned int *)(param_2 + 0x380) < *(unsigned int *)(param_2 + 900)) {
                    /* WARNING: Subroutine does not return */
    fn_8251E4D0(param_2 + 0x394);
  }
  uVar5 = (unsigned __int64)*(unsigned int *)(param_2 + 0x394);
  uVar2 = *(unsigned int *)(param_2 + 0x398);
  uVar8 = 0;
  uVar7 = 0;
  dVar10 = dVar11;
  dVar12 = dVar11;
  if (uVar5 < uVar2) {
    do {
      uVar4 = uVar7;
      if ((*(unsigned int *)uVar5 & 4) == 0) {
        uVar3 = (__int64)
                (((int)(unsigned int *)uVar5 - *(int *)(param_2 + 0x394)) /
                (int)(unsigned int)*(unsigned short *)(param_2 + 0x3a0)) *
                (__int64)(int)(unsigned int)*(unsigned short *)(param_2 + 0x38c) +
                (unsigned __int64)*(unsigned int *)(param_2 + 0x380);
        uVar4 = (unsigned __int64)*(unsigned int *)((int)uVar3 + 0x94);
        dVar9 = (double)fn_825C2DC0(lVar6,uVar3,param_3);
        if ((param_5 != (float *)0x0) && (fVar1 = *(float *)((int)uVar3 + 0xa4), *param_5 < fVar1))
        {
          *param_5 = fVar1;
        }
        if ((uVar4 & 0xffffffff) == (uVar7 & 0xffffffff)) {
          if (dVar9 <= dVar10) goto LAB_8262f51c;
        }
        else if ((uVar8 & 0xffffffff) != 0) {
          if (param_1 < dVar10) {
            dVar12 = (double)(float)(dVar10 + dVar12);
          }
          if (dVar11 < dVar10) {
            dVar11 = dVar12;
          }
        }
        uVar8 = uVar3;
        dVar10 = dVar9;
      }
LAB_8262f51c:
      uVar5 = uVar5 + 0xc;
      uVar7 = uVar4;
    } while ((uVar5 & 0xffffffff) < (unsigned __int64)uVar2);
    if (((uVar8 & 0xffffffff) != 0) &&
       (dVar11 = (double)fn_825C2DC0(lVar6,uVar8,param_3), param_1 < dVar11)) {
      dVar12 = (double)(float)(dVar11 + dVar12);
    }
  }
  return dVar12;
}

