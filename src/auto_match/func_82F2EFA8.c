extern int fn_82F2CD38();
extern int fn_82F2CF10();
extern int fn_82F2D130();
extern int fn_82F2D370();
extern int fn_82F2D5A0();
extern int fn_82F2D778();
extern int fn_82F2DAA0();
extern int fn_82F2E0E8();
extern int fn_82F2E2D0();
extern int fn_82F2E488();
extern int fn_82F2E6D0();
extern int fn_82F2E900();
extern int fn_82F2EC80();
extern int fn_82F2EDA8();
extern int fn_82F68CC0();


unsigned __int64
fn_82F2EFA8(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5,int param_6)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int (**pcVar7)();
  int iVar8;
  int (**pcVar9)();
  
  iVar8 = (int)param_4;
  *(int *)(param_1 + 0x74) = param_2;
  *(int *)(param_1 + 0x78) = (int)param_3;
  *(int *)(param_1 + 0x7c) = iVar8;
  if (param_6 < 0) {
    param_6 = -param_6;
  }
  if ((((((param_5 < 0) || (param_2 == 0)) || ((param_3 & 0xffffffff) == 0)) ||
       ((iVar8 == 0 || (param_5 == 0)))) ||
      ((param_6 == 0 ||
       ((*(int *)(param_1 + 0x80) == 0 || (iVar2 = *(int *)(param_1 + 0x60), iVar2 != param_5))))))
     || ((iVar3 = *(int *)(param_1 + 100), iVar3 != param_6 ||
         ((*(int *)(param_2 + 4) != *(int *)(param_1 + 0x58) ||
          (*(int *)(param_2 + 8) != *(int *)(param_1 + 0x5c))))))) {
    return 0;
  }
  *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x80);
  iVar4 = *(int *)(param_2 + 0x10);
  if (iVar4 == 0) {
    sVar1 = *(short *)(param_2 + 0xe);
    if (sVar1 == 0x18) {
      pcVar9 = fn_82F2E2D0;
      pcVar7 = fn_82F2E488;
      goto LAB_82f2f1d0;
    }
    if (sVar1 == 0x20) {
      pcVar9 = fn_82F2E0E8;
      pcVar7 = fn_82F2E488;
      goto LAB_82f2f1d0;
    }
    if (sVar1 == 0x10) {
      pcVar9 = fn_82F2E6D0;
      pcVar7 = fn_82F2E900;
      goto LAB_82f2f1d0;
    }
    if (sVar1 == 8) {
      pcVar9 = fn_82F2EC80;
      pcVar7 = fn_82F2EDA8;
      goto LAB_82f2f1d0;
    }
  }
  else {
    if (iVar4 == 0x32595559) {
      pcVar9 = fn_82F2CD38;
      pcVar7 = fn_82F2D370;
    }
    else if (iVar4 == 0x59565955) {
      pcVar9 = fn_82F2D5A0;
      pcVar7 = fn_82F2D370;
    }
    else if (iVar4 == 0x56323136) {
      pcVar9 = fn_82F2CF10;
      pcVar7 = fn_82F2D130;
    }
    else if (iVar4 == 3) {
      if (*(short *)(param_2 + 0xe) == 0x10) {
        pcVar9 = fn_82F2E6D0;
        pcVar7 = fn_82F2E900;
      }
      else {
        if (*(short *)(param_2 + 0xe) != 0x20) goto LAB_82f2f1d8;
        pcVar9 = fn_82F2E0E8;
        pcVar7 = fn_82F2E488;
      }
    }
    else if (iVar4 == 0x41595556) {
      pcVar9 = fn_82F2E0E8;
      pcVar7 = fn_82F2E488;
    }
    else {
      *(unsigned int *)(param_1 + 0x6c) = 1;
      if (iVar4 == 0x50343232) {
        *(unsigned int *)(param_1 + 0x6c) = 2;
      }
      pcVar9 = fn_82F2D778;
      pcVar7 = fn_82F2DAA0;
    }
LAB_82f2f1d0:
    *(int (***)())(param_1 + 0x4c) = pcVar9;
    *(int (***)())(param_1 + 0x50) = pcVar7;
  }
LAB_82f2f1d8:
  iVar5 = *(int *)(param_2 + 8);
  *(int *)(param_1 + 0x5c) = iVar5;
  iVar6 = *(int *)(param_2 + 4);
  *(int *)(param_1 + 0x58) = iVar6;
  *(unsigned int *)(param_1 + 0x44) = 1;
  *(unsigned int *)(param_1 + 0x48) = 1;
  if ((iVar2 == iVar6) && (iVar3 == iVar5)) {
    fn_82F68CC0(param_4,param_3,*(unsigned int *)(param_2 + 0x14));
    return 1;
  }
  if ((*(int *)(param_1 + 0x88) == 0) && (iVar3 == *(int *)(param_1 + 0x5c))) {
    if (iVar4 == 0) {
      if ((0x17 < *(unsigned short *)(param_2 + 0xe)) || (*(unsigned short *)(param_2 + 0xe) == 8)) {
LAB_82f2f2a0:
        *(int *)(param_1 + 0x84) = iVar8;
        *(unsigned int *)(param_1 + 0x48) = 0;
      }
    }
    else if ((((iVar4 == 0x39555659) || (iVar4 == 0x32315659)) || (iVar4 == 0x56555949)) ||
            (iVar4 == 0x30323449)) goto LAB_82f2f2a0;
  }
  if (iVar2 == iVar6) {
    if (iVar4 == 0) {
      if ((*(unsigned short *)(param_2 + 0xe) < 0x18) && (*(unsigned short *)(param_2 + 0xe) != 8))
      goto LAB_82f2f2cc;
    }
    else if (((iVar4 != 0x39555659) && (iVar4 != 0x32315659)) &&
            ((iVar4 != 0x56555949 && (iVar4 != 0x30323449)))) goto LAB_82f2f2cc;
    if (1 < *(unsigned int *)(param_1 + 0x54)) {
      *(unsigned int *)(param_1 + 0x44) = 0;
    }
    *(int *)(param_1 + 0x84) = (int)param_3;
    *(unsigned int *)(param_1 + 0x44) = 0;
  }
  else {
LAB_82f2f2cc:
    if ((*(int *)(param_1 + 0x54) == 1) && (*(int *)(param_1 + 0x88) == 0)) {
      (**(int (***)())(param_1 + 0x4c))(param_1,0,*(unsigned int *)(param_1 + 0x5c));
    }
  }
  if (*(int *)(param_1 + 0x48) == 0) {
    if (1 < *(unsigned int *)(param_1 + 0x54)) {
      *(unsigned int *)(param_1 + 0x48) = 0;
    }
  }
  else if (*(unsigned int *)(param_1 + 0x54) == 1) {
    (**(int (***)())(param_1 + 0x50))(param_1,0,*(unsigned int *)(param_1 + 100));
    return 1;
  }
  return 1;
}

