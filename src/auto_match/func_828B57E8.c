extern int fn_8288B4C0();
extern int fn_8288DD10();
extern int fn_828A12E8();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();


void fn_828B57E8(unsigned short *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned short uVar1;
  unsigned short uVar2;
  unsigned __int64 uVar3;
  short sVar6;
  int iVar4;
  int iVar5;
  unsigned short uVar7;
  
  uVar3 = fn_828A12E8(param_2);
  sVar6 = fn_8288B4C0(uVar3,param_3);
  param_1[1] = sVar6;
  if (sVar6 == -0x8000) {
    *(unsigned char *)((int)param_1 + 7) = 0;
    *param_1 = 0x8000;
    param_1[2] = 0x8000;
    param_1[1] = 0x8000;
  }
  else {
    *(unsigned char *)((int)param_1 + 7) = 1;
    iVar4 = fn_828E9DA8(param_3);
    iVar5 = fn_828E9D90(param_3);
    if (iVar4 - iVar5 < 2) {
      uVar7 = 0;
    }
    else {
      uVar7 = fn_828E9FF8(param_3,2);
    }
    uVar1 = param_1[1];
    *param_1 = uVar7;
    uVar3 = fn_828A12E8(param_2);
    iVar4 = fn_8288DD10(uVar3,uVar1);
    uVar2 = *(unsigned short *)(iVar4 + 0x20);
    iVar4 = fn_828E9DA8(param_3);
    iVar5 = fn_828E9D90(param_3);
    if (iVar4 - iVar5 < (int)(unsigned int)uVar2) {
      param_1[2] = 0;
    }
    else {
      uVar7 = fn_828E9FF8(param_3,uVar2);
      param_1[2] = uVar7;
    }
  }
  return;
}

