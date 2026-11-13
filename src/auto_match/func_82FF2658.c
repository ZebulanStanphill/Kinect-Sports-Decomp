extern int fn_8301E600();
extern int fn_8301EE18();
extern unsigned int lbl_82014898;
extern unsigned int lbl_821AAD20;


double fn_82FF2658(unsigned int *param_1)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  __int64 lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  uVar1 = (unsigned __int64)*(unsigned char *)((int)param_1 + 6);
  uVar3 = 0;
  dVar8 = (double)lbl_82014898;
  if (uVar1 != 0) {
    lVar2 = -0x7cd9b9d8;
    dVar9 = dVar8;
    do {
      dVar8 = dVar9;
      if ((uVar1 & 1) != 0) {
        if ((unsigned __int64)(unsigned int)((int)((unsigned int)*(unsigned char *)((int)param_1 + 7) << 0x1b) >> 0x1b) ==
            (uVar3 & 0xffffffff)) {
          return (double)lbl_821AAD20;
        }
        if (*(short *)(param_1 + 1) == 0) {
          dVar6 = (double)fn_8301E600(lVar2,0xffffffff831bc80c);
          dVar7 = (double)fn_8301EE18(uVar3);
          dVar8 = (double)(float)(dVar6 / dVar7);
          if ((float)(dVar9 - (double)(float)(dVar6 / dVar7)) < 0.0) {
            dVar8 = dVar9;
          }
        }
        else {
          uVar4 = 0;
          lVar5 = 0;
          do {
            dVar6 = (double)fn_8301E600(lVar2,lVar5 + (unsigned __int64)*param_1);
            dVar7 = (double)fn_8301EE18(uVar3);
            uVar4 = uVar4 + 1;
            lVar5 = lVar5 + 0x18;
            dVar8 = (double)(float)(dVar6 / dVar7);
            if ((float)(dVar9 - (double)(float)(dVar6 / dVar7)) < 0.0) {
              dVar8 = dVar9;
            }
            dVar9 = dVar8;
          } while (uVar4 < *(unsigned short *)(param_1 + 1));
        }
      }
      uVar1 = uVar1 >> 1;
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x90;
      dVar9 = dVar8;
    } while (uVar1 != 0);
  }
  return dVar8;
}

