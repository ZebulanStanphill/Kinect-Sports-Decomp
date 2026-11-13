extern int fn_82A49AC8();
extern int fn_82A5ED20();
extern int fn_82A687F0();
extern int fn_82A68878();


__int64 fn_82A4CEB0(int param_1,unsigned __int64 param_2,int *param_3,unsigned __int64 param_4,int *param_5)

{
  short sVar1;
  __int64 lVar2;
  unsigned int uVar4;
  short sVar5;
  unsigned __int64 uVar3;
  short sVar6;
  
  *(unsigned int *)(param_1 + 0x20) = 0;
  sVar1 = *(short *)(*param_5 + 0xe);
  lVar2 = fn_82A5ED20(param_1,1,param_3,1);
  if (-1 < lVar2) {
    *(unsigned int *)(param_1 + 0x28) = (unsigned int)*(unsigned short *)(*param_3 + 2);
    sVar6 = sVar1;
    if (*(short *)*param_5 == -2) {
      sVar6 = ((short *)*param_5)[9];
    }
    uVar4 = fn_82A68878();
    *(unsigned int *)(param_1 + 0x24) = uVar4;
    sVar5 = fn_82A49AC8(*param_5);
    if (sVar5 == 1) {
      if (sVar1 == 0x20) {
        if (sVar6 == 0x20) {
          uVar3 = 6;
        }
        else if (sVar6 == 0x18) {
          uVar3 = 5;
        }
        else {
          uVar3 = 3;
        }
      }
      else if (sVar1 == 0x18) {
        if (sVar6 == 0x18) {
          uVar3 = 4;
        }
        else {
          uVar3 = 2;
        }
      }
      else if (sVar1 == 0x10) {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 7;
    }
    uVar4 = fn_82A687F0(uVar3);
    *(unsigned int *)(param_1 + 0x20) = uVar4;
  }
  return lVar2;
}

