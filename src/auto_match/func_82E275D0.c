extern int fn_82F68CC0();
extern unsigned int lbl_8208E050;
extern unsigned int lbl_8208E054;
extern unsigned int lbl_8208E058;
extern unsigned int lbl_8208E05C;
extern unsigned int lbl_8214C42C;
extern unsigned int lbl_8214C43C;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned __int64 fn_82E275D0(int *param_1,short *param_2,unsigned int param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned short uVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned char *pbVar6;
  unsigned char *pbVar7;
  short *psVar8;
  short *psVar9;
  unsigned __int64 uVar10;
  unsigned char abStack_60 [4];
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  
  uVar5 = (unsigned short)param_2[8] + 0x12;
  psVar8 = (short *)0x0;
  if (uVar5 < (unsigned short)param_2[8]) {
    uVar5 = 0xffffffff;
    uVar4 = 0xffffffff80070216;
  }
  else {
    uVar4 = 0;
  }
  if ((int)uVar4 < 0) {
    return uVar4;
  }
  if (param_3 < uVar5) {
    return 0xffffffff80070057;
  }
  uVar4 = (**(int (***)())(*param_1 + 0x50))(param_1);
  if ((int)uVar4 < 0) {
    return uVar4;
  }
  uVar4 = (**(int (***)())(*param_1 + 0x60))(param_1,0xffffffff82153478,0xffffffff821537a8);
  if ((int)uVar4 < 0) {
    return uVar4;
  }
  if (*param_2 == -2) {
    uVar3 = param_2[8];
    if ((unsigned __int64)uVar3 < 0x16) {
      return 0xffffffff80070057;
    }
    fn_82F68CC0(abStack_60,param_2 + 0xc,0x10);
    uVar10 = (unsigned __int64)uVar3 - 0x16;
    psVar9 = param_2 + 0x14;
    psVar8 = param_2;
  }
  else {
    uStack_50 = lbl_8208E050;
    uStack_4c = lbl_8208E054;
    uStack_48 = lbl_8208E058;
    uStack_44 = lbl_8208E05C;
    uStack_5c = lbl_8208E054;
    uStack_58 = lbl_8208E058;
    uStack_54 = lbl_8208E05C;
    uVar4 = (**(int (***)())(*param_1 + 0x54))(param_1,0xffffffff82153568,1);
    if ((int)uVar4 < 0) {
      return uVar4;
    }
    uVar10 = (unsigned __int64)(unsigned short)param_2[8];
    psVar9 = param_2 + 9;
  }
  uVar4 = (**(int (***)())(*param_1 + 0x60))(param_1,0xffffffff82153488,abStack_60);
  if ((int)uVar4 < 0) {
    return uVar4;
  }
  if ((param_2[1] != 0) &&
     (uVar4 = (**(int (***)())(*param_1 + 0x54))(param_1,0xffffffff821534d8), (int)uVar4 < 0)) {
    return uVar4;
  }
  if ((*(int *)(param_2 + 2) != 0) &&
     (uVar4 = (**(int (***)())(*param_1 + 0x54))(param_1,0xffffffff821534e8), (int)uVar4 < 0)) {
    return uVar4;
  }
  if ((param_2[6] != 0) &&
     (uVar4 = (**(int (***)())(*param_1 + 0x54))(param_1,0xffffffff82153508), (int)uVar4 < 0)) {
    return uVar4;
  }
  if ((*(int *)(param_2 + 4) != 0) &&
     (uVar4 = (**(int (***)())(*param_1 + 0x54))(param_1,0xffffffff821534f8), (int)uVar4 < 0)) {
    return uVar4;
  }
  if ((param_2[7] != 0) &&
     (uVar4 = (**(int (***)())(*param_1 + 0x54))(param_1,0xffffffff82153518), (int)uVar4 < 0)) {
    return uVar4;
  }
  pbVar7 = abStack_60;
  pbVar6 = &lbl_8214C43C;
  do {
    bVar1 = *pbVar7;
    bVar2 = *pbVar6;
    if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
    pbVar7 = pbVar7 + 1;
    pbVar6 = pbVar6 + 1;
  } while (pbVar7 != (unsigned char *)&uStack_50);
  if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
LAB_82e278b8:
    uVar4 = (**(int (***)())(*param_1 + 0x54))(param_1,0xffffffff82153498,1);
    if ((int)uVar4 < 0) {
      return uVar4;
    }
  }
  else {
    pbVar7 = abStack_60;
    pbVar6 = &lbl_8214C42C;
    do {
      bVar1 = *pbVar7;
      bVar2 = *pbVar6;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      pbVar7 = pbVar7 + 1;
      pbVar6 = pbVar6 + 1;
    } while (pbVar7 != (unsigned char *)&uStack_50);
    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) goto LAB_82e278b8;
  }
  if (((uVar10 & 0xffffffff) != 0) &&
     (uVar4 = (**(int (***)())(*param_1 + 0x68))(param_1,0xffffffff821536d8,psVar9,uVar10),
     (int)uVar4 < 0)) {
    return uVar4;
  }
  if (psVar8 == (short *)0x0) {
    return uVar4;
  }
  if (psVar8[9] != 0) {
    if (param_2[7] == 0) {
      uVar4 = 0xffffffff82153538;
    }
    else {
      if (psVar8[9] == param_2[7]) goto LAB_82e2796c;
      uVar4 = 0xffffffff82153528;
    }
    uVar4 = (**(int (***)())(*param_1 + 0x54))(param_1,uVar4);
    if ((int)uVar4 < 0) {
      return uVar4;
    }
  }
LAB_82e2796c:
  if (*(int *)(psVar8 + 10) != 0) {
    uVar4 = (**(int (***)())(*param_1 + 0x54))(param_1,0xffffffff82153548);
  }
  return uVar4;
}

