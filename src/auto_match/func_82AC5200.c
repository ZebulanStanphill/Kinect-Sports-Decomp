extern int fn_82AC5088();
extern int fn_82AC50E0();
extern unsigned int uStack_30;


unsigned __int64 fn_82AC5200(unsigned int *param_1,__int64 param_2,unsigned __int64 param_3)

{
  unsigned short uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned int uStack_30;
  
  uVar5 = param_3;
  uVar4 = fn_82AC5088(param_2,*param_1,param_3,0xf0);
  if ((int)uVar4 < 0) {
    return uVar4;
  }
  uVar2 = param_1[3];
  if ((uVar5 & 0xffffffff) < (unsigned __int64)uVar2) {
    return 0xffffffff80004005;
  }
  if ((uVar5 & 0xffffffff) < (unsigned __int64)uVar2 + 0x10) {
    return 0xffffffff80004005;
  }
  uVar3 = param_1[4];
  uVar8 = (unsigned __int64)uVar3;
  uVar4 = fn_82AC50E0((unsigned __int64)uVar2 + param_2,param_2,param_3,0);
  if ((int)uVar4 < 0) {
    return uVar4;
  }
  uVar1 = *(unsigned short *)(param_1 + 1);
  if (uVar1 == 0) {
    uVar7 = 0x100;
    uVar6 = 4;
  }
  else {
    if (uVar1 == 1) {
      uVar7 = 0x40;
    }
    else {
      if (2 < uVar1) {
        if (uVar1 != 3) {
          return 0xffffffff80004005;
        }
        uVar7 = 0x20;
        if (uVar8 != 0) {
          return 0xffffffff80004005;
        }
        uVar6 = (unsigned __int64)uStack_30;
        goto LAB_82ac52b0;
      }
      uVar7 = 0x100;
    }
    uVar6 = 0x10;
  }
LAB_82ac52b0:
  if (((unsigned __int64)*(unsigned short *)(param_1 + 2) + (unsigned __int64)*(unsigned short *)((int)param_1 + 6) <= uVar7) &&
     ((uVar8 == 0 ||
      ((uVar8 <= (param_3 & 0xffffffff) &&
       (*(unsigned short *)(param_1 + 2) * uVar6 + (unsigned __int64)uVar3 <= (uVar5 & 0xffffffff))))))) {
    return 0;
  }
  return 0xffffffff80004005;
}

