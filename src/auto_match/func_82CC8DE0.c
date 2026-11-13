extern int fn_82CC6320();
extern int fn_82CC65D0();
extern int fn_82CC67D0();
extern int fn_82CC6A88();
extern int fn_82CC7008();
extern int fn_82CC74A8();
extern int fn_82CC7BB0();
extern int fn_82F68CC0();


unsigned __int64
fn_82CC8DE0(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5,int param_6)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int (**pcVar4)();
  int (**pcVar5)();
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar3 = (int)param_4;
  *(int *)(param_1 + 0x34) = (int)param_3;
  *(int *)(param_1 + 0x38) = iVar3;
  *(int *)(param_1 + 0x30) = param_2;
  if (param_6 < 0) {
    param_6 = -param_6;
  }
  if ((((param_5 < 0) || (param_2 == 0)) || ((param_3 & 0xffffffff) == 0)) || (iVar3 == 0)) {
    return 0;
  }
  iVar6 = *(int *)(param_2 + 0x10);
  if (((iVar6 == 0x56555949) || (iVar6 == 0x30323449)) || (iVar6 == 0x31313450)) {
    iVar8 = *(int *)(param_2 + 8);
    iVar6 = *(int *)(param_2 + 4);
    uVar1 = (unsigned int)*(unsigned short *)(param_2 + 0xe) * iVar8 * iVar6;
    iVar7 = ((int)uVar1 >> 3) + (unsigned int)((int)uVar1 < 0 && (uVar1 & 7) != 0);
  }
  else {
    iVar6 = *(int *)(param_2 + 4);
    iVar8 = *(int *)(param_2 + 8);
    uVar1 = (unsigned int)*(unsigned short *)(param_2 + 0xe) * iVar6;
    uVar1 = ((int)uVar1 >> 3) + (unsigned int)((int)uVar1 < 0 && (uVar1 & 7) != 0) + 3;
    iVar7 = (((int)uVar1 >> 2) + (unsigned int)((int)uVar1 < 0 && (uVar1 & 3) != 0)) * iVar8 * 4;
  }
  if (iVar7 != *(int *)(param_2 + 0x14)) {
    return 0;
  }
  if (param_5 == 0) {
    return 0;
  }
  if (param_6 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x3c) == 0) {
    return 0;
  }
  iVar7 = *(int *)(param_1 + 0x20);
  if (iVar7 != param_5) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0x24);
  if (iVar2 != param_6) {
    return 0;
  }
  if (iVar6 != *(int *)(param_1 + 0x18)) {
    return 0;
  }
  if (iVar8 != *(int *)(param_1 + 0x1c)) {
    return 0;
  }
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x3c);
  iVar6 = *(int *)(param_2 + 0x10);
  if (iVar6 != 0) {
    if (iVar6 == 0x32595559) {
      if (*(int *)(param_2 + 0x20) == 0) {
        pcVar5 = fn_82CC6320;
        pcVar4 = fn_82CC65D0;
      }
      else {
        pcVar5 = fn_82CC67D0;
        pcVar4 = fn_82CC6A88;
      }
    }
    else {
      if (iVar6 == 3) goto LAB_82cc8f9c;
      *(unsigned int *)(param_1 + 0x2c) = 1;
      if (iVar6 == 0x32323450) {
        *(unsigned int *)(param_1 + 0x2c) = 2;
      }
      pcVar5 = fn_82CC7008;
      pcVar4 = fn_82CC74A8;
    }
    *(int (***)())(param_1 + 0xc) = pcVar5;
    *(int (***)())(param_1 + 0x10) = pcVar4;
  }
LAB_82cc8f9c:
  *(unsigned int *)(param_1 + 0x1c) = *(unsigned int *)(param_2 + 8);
  iVar8 = *(int *)(param_2 + 4);
  *(int *)(param_1 + 0x18) = iVar8;
  *(unsigned int *)(param_1 + 4) = 1;
  *(unsigned int *)(param_1 + 8) = 1;
  if ((iVar7 == iVar8) && (iVar2 == *(int *)(param_1 + 0x1c))) {
    fn_82F68CC0(param_4,param_3,*(unsigned int *)(param_2 + 0x14));
    return 1;
  }
  if (iVar2 == *(int *)(param_1 + 0x1c)) {
    if (iVar6 == 0) {
      if ((0x17 < *(unsigned short *)(param_2 + 0xe)) || (*(unsigned short *)(param_2 + 0xe) == 8)) {
LAB_82cc9024:
        *(int *)(param_1 + 0x40) = iVar3;
        *(unsigned int *)(param_1 + 8) = 0;
      }
    }
    else if ((iVar6 == 0x56555949) || (iVar6 == 0x30323449)) goto LAB_82cc9024;
  }
  if (iVar7 == iVar8) {
    if (iVar6 == 0) {
      if ((*(unsigned short *)(param_2 + 0xe) < 0x18) && (*(unsigned short *)(param_2 + 0xe) != 8))
      goto LAB_82cc9050;
    }
    else if ((iVar6 != 0x56555949) && (iVar6 != 0x30323449)) goto LAB_82cc9050;
    *(int *)(param_1 + 0x40) = (int)param_3;
    *(unsigned int *)(param_1 + 4) = 0;
    if (*(int *)(param_1 + 8) == 0) {
      return 1;
    }
    if (*(int *)(param_1 + 0x14) != 1) {
      return 1;
    }
  }
  else {
LAB_82cc9050:
    if (*(int *)(param_1 + 0x14) != 1) {
      return 1;
    }
    if (*(int *)(param_1 + 0x44) == 0) {
      if (*(int *)(param_1 + 8) != 0) {
        fn_82CC7BB0(param_1,0);
        return 1;
      }
      (**(int (***)())(param_1 + 0xc))(param_1,0,*(int *)(param_1 + 0x1c));
    }
    if (*(int *)(param_1 + 8) == 0) {
      return 1;
    }
    iVar2 = *(int *)(param_1 + 0x24);
  }
  (**(int (***)())(param_1 + 0x10))(param_1,0,iVar2);
  return 1;
}

