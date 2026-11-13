extern unsigned int *auStack_130;
extern int fn_82CEDE90();
extern int fn_82CFBB60();
extern float lbl_82005748;
extern unsigned int lbl_821AAD20;


void fn_82CF01E0(double param_1,unsigned __int64 param_2,unsigned __int64 param_3,float *param_4)

{
  unsigned short uVar1;
  unsigned short uVar2;
  float *pfVar3;
  __int64 lVar4;
  unsigned char auStack_130 [240];
  
  uVar1 = *(unsigned short *)(param_4 + 8);
  pfVar3 = param_4 + 8;
  uVar2 = 0;
  if ((uVar1 != 0) && (uVar1 != 0)) {
    uVar2 = uVar1;
  }
  uVar1 = *(unsigned short *)((int)param_4 + 0x22);
  if ((uVar1 != 0) && (uVar2 < uVar1)) {
    uVar2 = uVar1;
  }
  uVar1 = *(unsigned short *)(param_4 + 9);
  if ((uVar1 != 0) && (uVar2 < uVar1)) {
    uVar2 = uVar1;
  }
  uVar1 = *(unsigned short *)((int)param_4 + 0x26);
  if ((uVar1 != 0) && (uVar2 < uVar1)) {
    uVar2 = uVar1;
  }
  uVar1 = *(unsigned short *)(param_4 + 10);
  if ((uVar1 != 0) && (uVar2 < uVar1)) {
    uVar2 = uVar1;
  }
  uVar1 = *(unsigned short *)((int)param_4 + 0x2a);
  if ((uVar1 != 0) && (uVar2 < uVar1)) {
    uVar2 = uVar1;
  }
  uVar1 = *(unsigned short *)(param_4 + 0xb);
  if ((uVar1 != 0) && (uVar2 < uVar1)) {
    uVar2 = uVar1;
  }
  uVar1 = *(unsigned short *)((int)param_4 + 0x2e);
  if ((uVar1 != 0) && (uVar2 < uVar1)) {
    uVar2 = uVar1;
  }
  if (param_1 <= (double)lbl_821AAD20) {
    fn_82CFBB60(auStack_130,200,0xffffffff82132fec,param_4[0x13],uVar2);
  }
  else {
    fn_82CFBB60(auStack_130,200,0xffffffff82132ff4,param_4[0x13],uVar2,
                      (double)((float)((double)param_4[1] / param_1) * lbl_82005748));
  }
  fn_82CEDE90(param_2,0xffffffff82132fe0,auStack_130,0xffffffff82132fe8);
  lVar4 = 8;
  do {
    if (*(short *)pfVar3 != 0) {
      fn_82CEDE90(param_2,0xffffffff82132fd4,(double)*param_4);
    }
    lVar4 = lVar4 + -1;
    pfVar3 = (float *)((int)pfVar3 + 2);
    param_4 = param_4 + 1;
  } while (lVar4 != 0);
  fn_82CEDE90(param_2,0xffffffff821cc86c);
  return;
}

