unsigned __int64
fn_827FE978(double param_1,double param_2,int param_3,unsigned int param_4,unsigned int *param_5,int param_6,
             unsigned int param_7,unsigned __int64 param_8,unsigned __int64 param_9,char param_10)

{
  unsigned int uVar1;
  float *pfVar2;
  unsigned int uVar3;
  double dVar4;
  double dVar5;
  
  uVar1 = 0;
  if (param_7 != 0) {
    pfVar2 = (float *)(param_6 + 8);
    if (param_10 == '\0') {
      do {
        dVar4 = (double)pfVar2[-1];
        uVar3 = 0;
        dVar5 = (double)*pfVar2;
        if (dVar4 < param_1) {
code_r0x827fe9b0:
          if ((dVar4 <= param_2) && (param_2 < dVar5)) {
            uVar3 = uVar3 | 2;
          }
        }
        else if (dVar4 <= param_2) {
          uVar3 = 1;
          goto code_r0x827fe9b0;
        }
        if ((param_1 < dVar5) && (dVar5 <= param_2)) {
          uVar3 = uVar3 | 4;
        }
        if (uVar3 != 0) {
          if (param_4 <= *param_5) {
code_r0x827fea38:
            *param_5 = 0;
            return 1;
          }
          *(unsigned int *)(*param_5 * 0xc + param_3) = (unsigned int)*(unsigned short *)(pfVar2 + -2);
          *(unsigned int *)(*param_5 * 0xc + param_3 + 4) = uVar1;
          *(unsigned int *)(*param_5 * 0xc + param_3 + 8) = uVar3;
          *param_5 = *param_5 + 1;
        }
        uVar1 = uVar1 + 1;
        pfVar2 = pfVar2 + 4;
      } while (uVar1 < param_7);
    }
    else {
      do {
        dVar4 = (double)*pfVar2;
        uVar3 = 0;
        dVar5 = (double)pfVar2[-1];
        if ((dVar4 <= param_1) && (param_2 <= dVar4)) {
          uVar3 = 1;
        }
        if ((dVar5 < param_2) && (param_2 <= dVar4)) {
          uVar3 = uVar3 | 2;
        }
        if ((dVar5 < param_1) && (param_2 <= dVar5)) {
          uVar3 = uVar3 | 4;
        }
        if (uVar3 != 0) {
          if (param_4 <= *param_5) goto code_r0x827fea38;
          *(unsigned int *)(*param_5 * 0xc + param_3) = (unsigned int)*(unsigned short *)(pfVar2 + -2);
          *(unsigned int *)(*param_5 * 0xc + param_3 + 4) = uVar1;
          *(unsigned int *)(*param_5 * 0xc + param_3 + 8) = uVar3;
          *param_5 = *param_5 + 1;
        }
        uVar1 = uVar1 + 1;
        pfVar2 = pfVar2 + 4;
      } while (uVar1 < param_7);
    }
  }
  return 0;
}

