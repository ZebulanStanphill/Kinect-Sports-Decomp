extern int fn_8280A550();
extern int fn_8280ADB0();
extern int fn_8280B0E8();
extern int fn_82810280();


void fn_82861078(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5)

{
  float fVar1;
  int iVar2;
  int iVar3;
  __int64 lVar4;
  int iVar5;
  unsigned __int64 uVar6;
  int iVar7;
  double dVar8;
  
  uVar6 = 0x80;
  lVar4 = 6;
  iVar5 = param_1;
  do {
    if ((uVar6 & param_3 & 0xff) != 0) {
      fn_8280ADB0(param_2,iVar5,(param_5 - param_1) + iVar5);
    }
    lVar4 = lVar4 + -1;
    uVar6 = uVar6 >> 1;
    iVar5 = iVar5 + 0xc;
  } while (lVar4 != 0);
  uVar6 = 0x80;
  iVar5 = 0;
  do {
    if ((uVar6 & param_4 & 0xff) != 0) {
      iVar7 = iVar5 * 0x10 + param_1;
      iVar2 = (iVar5 + 5) * 0x10;
      dVar8 = (double)fn_8280A550((double)(*(float *)(iVar2 + param_1) *
                                                 *(float *)(iVar2 + param_1) +
                                                *(float *)(iVar7 + 0x48) * *(float *)(iVar7 + 0x48)
                                                + *(float *)(iVar7 + 0x4c) *
                                                  *(float *)(iVar7 + 0x4c)));
      iVar3 = iVar5 * 0x10 + param_5;
      *(float *)(iVar7 + 0x48) = (float)((double)*(float *)(iVar7 + 0x48) * dVar8);
      fVar1 = *(float *)(iVar2 + param_1);
      *(float *)(iVar7 + 0x4c) = (float)(dVar8 * (double)*(float *)(iVar7 + 0x4c));
      *(float *)(iVar2 + param_1) = (float)((double)fVar1 * dVar8);
      iVar2 = iVar3 + 0x48;
      fn_8280B0E8(param_2,iVar7 + 0x48,iVar2);
      if (iVar5 == 4) {
        dVar8 = (double)fn_82810280(param_5 + 0x88,param_5);
        *(float *)(param_5 + 0x94) = (float)dVar8;
      }
      else if (iVar5 == 5) {
        dVar8 = (double)fn_82810280(param_5 + 0x98,param_5 + 0x3c);
        *(float *)(param_5 + 0xa4) = (float)dVar8;
      }
      else {
        dVar8 = (double)fn_82810280(iVar2,param_5 + 0x30);
        *(float *)(iVar3 + 0x54) = (float)dVar8;
      }
    }
    iVar5 = iVar5 + 1;
    uVar6 = uVar6 >> 1;
  } while (iVar5 < 6);
  return;
}

