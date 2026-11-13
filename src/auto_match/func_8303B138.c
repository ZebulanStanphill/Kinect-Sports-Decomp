extern int fn_8303A888();
extern unsigned int lbl_8217BA98;


void fn_8303B138(unsigned __int64 param_1,unsigned __int64 param_2,__int64 param_3)

{
  float *pfVar1;
  float fVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  
  uVar5 = 0;
  for (uVar4 = *(unsigned int *)((int)param_2 + 0x1c); uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
    uVar5 = uVar5 + 1;
  }
  uVar3 = 0;
  if ((uVar5 & 0xffffffff) != 0) {
    param_3 = param_3 + 0xc;
    do {
      if (*(char *)((int)param_2 + 0x21) == '\0') {
        fn_8303A888(param_3 + -0xc);
      }
      fVar2 = lbl_8217BA98;
      pfVar1 = (float *)param_3;
      uVar3 = uVar3 + 1;
      pfVar1[-1] = (pfVar1[-1] + lbl_8217BA98) - lbl_8217BA98;
      *pfVar1 = (*pfVar1 + fVar2) - fVar2;
      param_3 = param_3 + 0x10;
    } while ((uVar3 & 0xffffffff) < (uVar5 & 0xffffffff));
  }
  return;
}

