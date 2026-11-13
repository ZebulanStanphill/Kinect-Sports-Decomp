extern int fn_826F69C8();
extern float lbl_8200571C;


void fn_826F9CA0(double param_1,double param_2,__int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7)

{
  int iVar1;
  float fVar2;
  float fVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  
  iVar1 = (int)param_3;
  fVar2 = (float)((double)*(float *)(iVar1 + 0xb0) * param_1 + (double)*(float *)(iVar1 + 0xb8)) *
          lbl_8200571C;
  fVar3 = (float)((double)*(float *)(iVar1 + 0xb4) * param_2 + (double)*(float *)(iVar1 + 0xbc)) *
          lbl_8200571C;
  if ((param_7 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar1 + 0x9d4)) {
    param_3 = param_3 + 0x144;
    uVar4 = 1;
    if ((param_7 & 0xffffffff) < 4) {
      *(unsigned int *)(iVar1 + 0x93c) = 1 << ((unsigned int)param_7 & 0x3f) | *(unsigned int *)(iVar1 + 0x93c);
      *(float *)((int)((param_7 + 0xfb & 0xffffffff) << 3) + (int)param_3) = fVar2;
      *(float *)((int)((param_7 & 0xffffffff) << 3) + (int)param_3 + 0x7dc) = fVar3;
    }
    lVar5 = 0x10;
    uVar6 = (unsigned __int64)*(unsigned int *)((unsigned int)param_7 * 0x24 + iVar1 + 0x950);
    do {
      if ((((uVar4 & param_6) != 0) && ((uVar4 & uVar6) == 0)) ||
         (((uVar4 & uVar6) != 0 && ((uVar4 & param_6) == 0)))) {
        fn_826F69C8(param_3);
      }
      lVar5 = lVar5 + -1;
      uVar4 = (uVar4 & 0x7fffffff) << 1;
    } while (lVar5 != 0);
  }
  return;
}

