extern int fn_82A58478();
extern int fn_82A58520();
extern int fn_82A58620();
extern int fn_82A586A8();
extern int fn_82A58730();
extern int fn_82A751F8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005344;
extern unsigned int lbl_82005CCC;


unsigned __int64
fn_82A590E0(unsigned __int64 param_1,int param_2,unsigned int *param_3,int *param_4,unsigned int *param_5,
             short *param_6)

{
  float fVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  short sVar4;
  unsigned int uVar5;
  
  if (((*param_4 != 0) && (param_4[1] != 0)) && (param_4[5] == 100)) {
    return 0;
  }
  uVar2 = fn_82A58478(*param_3,param_3[1],param_5,param_1,param_4);
  param_6[10] = (short)uVar2;
  param_6[0xb] = 0;
  uVar3 = *param_5;
  *(unsigned int *)(param_6 + 0xc) = uVar3;
  uVar3 = fn_82A751F8(*param_3,uVar3,param_1,uVar2);
  *(unsigned int *)(param_6 + 0xe) = uVar3;
  *(unsigned int *)(param_6 + 0x16) = (unsigned int)*(unsigned char *)(param_5 + 1);
  if ((*param_4 == 0) && (param_4[9] != 0)) {
    param_6[0x14] = 0;
    param_6[0x15] = 1;
    param_6[0x10] = 0;
    param_6[0x11] = 1;
    param_6[0x12] = 0;
    param_6[0x13] = 1;
  }
  else {
    *(unsigned int *)(param_6 + 0x14) = (unsigned int)*(unsigned short *)((int)param_5 + 5);
    *(unsigned int *)(param_6 + 0x10) = (unsigned int)*(unsigned char *)((int)param_5 + 7);
    if (param_4[2] != 0) {
      uVar3 = fn_82A586A8(*param_3,param_3[1],param_5,*param_4,param_1,param_6[10]);
      *(unsigned int *)(param_6 + 0x10) = uVar3;
    }
    if (((*param_4 != 0) && (param_4[1] == 0)) && ((param_4[4] != 0 || (param_4[3] != 0)))) {
      uVar5 = *(unsigned int *)(param_6 + 0x10);
      if (4 < uVar5) {
        uVar5 = 4;
      }
      *(unsigned int *)(param_6 + 0x10) = uVar5;
    }
    if ((param_1 & 0xffffffff) < 3) {
      param_6[0x12] = 0;
      param_6[0x13] = 0xf;
    }
    else {
      fVar1 = lbl_82005CCC;
      if ((float)(__int64)(int)(lbl_82005344 / ((float)*(unsigned int *)(param_6 + 0xe) / (float)*param_3))
          - lbl_82002AE0 <= lbl_82005CCC) {
        fVar1 = (float)(__int64)
                       (int)(lbl_82005344 / ((float)*(unsigned int *)(param_6 + 0xe) / (float)*param_3)) -
                lbl_82002AE0;
      }
      *(int *)(param_6 + 0x12) = (int)(__int64)fVar1;
    }
  }
  if ((param_1 & 0xffffffff) == 1) {
    sVar4 = 0x160;
  }
  else if ((param_1 & 0xffffffff) == 2) {
    sVar4 = 0x161;
  }
  else {
    if ((param_1 & 0xffffffff) != 3) {
      return 0;
    }
    if ((param_6[10] & 1U) == 0) {
      *param_6 = (-(unsigned short)(param_4[7] != 0) & 2) + 0x162;
      goto LAB_82a59340;
    }
    sVar4 = 0x163;
  }
  *param_6 = sVar4;
LAB_82a59340:
  if (param_2 != 0) {
    *param_6 = *param_6 + 4;
  }
  *(unsigned int *)(param_6 + 2) = *param_3;
  param_6[1] = (short)param_3[1];
  *(unsigned int *)(param_6 + 8) = param_3[2];
  param_6[7] = (unsigned short)*(unsigned char *)(param_5 + 5);
  uVar3 = fn_82A58620(*param_3,param_3[1],*(unsigned int *)(param_6 + 0xc),
                        *(unsigned int *)(param_6 + 0x10),param_1,param_6[10]);
  *(unsigned int *)(param_6 + 4) = uVar3;
  sVar4 = fn_82A58520(*param_3,param_3[1],*(unsigned int *)(param_6 + 0xc),
                        *(unsigned int *)(param_6 + 0x10),param_1,param_6[10]);
  param_6[6] = sVar4;
  if (param_4[7] != 0) {
    sVar4 = (short)*(int *)(param_6 + 0xe) << 2;
    if (*(int *)(param_6 + 0xe) == 0x1000) {
      sVar4 = 0x2000;
    }
    param_6[6] = sVar4;
  }
  *(unsigned int *)(param_6 + 0x18) = *(unsigned int *)((int)param_5 + 0x15) >> 2 & 1;
  if (((*param_4 != 0) && (param_4[1] == 0)) && (param_4[5] == 0)) {
    param_4[5] = param_5[4];
  }
  *(int *)(param_6 + 0x1a) = param_2;
  *(unsigned int *)(param_6 + 0x14) =
       (*(unsigned int *)(param_6 + 0x14) / *(unsigned int *)(param_6 + 0x10)) * *(unsigned int *)(param_6 + 0x10);
  uVar2 = fn_82A58730(param_1,param_3,param_4,param_5,param_6);
  return uVar2;
}

