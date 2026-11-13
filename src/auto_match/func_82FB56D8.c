extern int fn_82FA9600();
extern int fn_82FAA478();
extern int fn_82FAE150();
extern int fn_82FAE168();
extern int fn_82FB42A0();
extern int fn_82FB54D0();


int fn_82FB56D8(int param_1,int param_2,int param_3,unsigned __int64 param_4,int *param_5)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x58) + 4) + 0x1c);
  iVar3 = fn_82FB54D0(param_1,param_3,param_4,param_5);
  if (iVar3 != 0) {
    iVar6 = *(int *)(*(int *)(param_3 + 4) + 0x40);
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iVar6 + 0x60);
    }
    iVar7 = *(int *)(param_2 + 8);
    iVar5 = 0;
    if (iVar7 < 1) {
      if ((((*(unsigned int *)(param_2 + 0x14) & 0x4000000) != 0) && (iVar6 != 0)) &&
         (iVar4 = fn_82FAE168(iVar6), *param_5 == iVar4)) {
        iVar5 = fn_82FAE150(iVar6);
        fn_82FA9600(iVar3);
      }
    }
    else {
      iVar6 = *(int *)(iVar3 + 0x48);
      iVar5 = *(int *)(param_2 + 0x10) + (iVar7 * 3 & 0xfffffffU) * -0x10;
      if (iVar6 < -iVar5) {
        iVar7 = iVar6 + iVar7 + iVar5;
        iVar5 = -iVar6;
      }
    }
    uVar2 = *(unsigned int *)(param_2 + 0xc);
    *(int *)(iVar3 + 0x38) = iVar7;
    *(int *)(iVar3 + 0x34) = iVar5;
    *(unsigned int *)(iVar3 + 0x40) = uVar1;
    *(unsigned char *)(iVar3 + 0x44) = 1;
    *(unsigned int *)(iVar3 + 0x3c) = uVar2;
    if (iVar5 < *(int *)(iVar3 + 8)) {
      *(int *)(iVar3 + 8) = iVar5;
    }
    fn_82FAA478(*(unsigned int *)(param_3 + 4),*(unsigned int *)(param_2 + 0x14) >> 0x1a & 1);
    fn_82FB42A0(iVar3,param_2 + 0x18,-(unsigned __int64)(unsigned int)param_5[2]);
  }
  return iVar3;
}

