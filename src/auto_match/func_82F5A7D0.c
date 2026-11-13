extern int fn_82A1DD38();
extern int fn_82F535C8();
extern int fn_8306ED30();
extern unsigned int lbl_82167C98;
extern unsigned int lbl_831BAFCC;
extern unsigned int lbl_832628C2;


void fn_82F5A7D0(int param_1,__int64 param_2,__int64 param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  unsigned int uVar4;
  __int64 lVar5;
  double dVar6;
  
  pfVar3 = param_4 + -1;
  lVar5 = 0x14;
  do {
    pfVar3 = pfVar3 + 1;
    *pfVar3 = 1.0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  if (*(int *)(param_1 + 0x10) == 2) {
    uVar4 = 0;
    pfVar3 = param_4;
    do {
      fn_8306ED30();
      dVar6 = (double)fn_82F535C8();
      iVar2 = *(int *)(((int)&lbl_82167C98 - (int)param_4) + (int)pfVar3);
      fVar1 = (float)((double)lbl_831BAFCC / (double)(float)((double)lbl_831BAFCC + dVar6));
      if (lbl_832628C2 == '\0') {
        *pfVar3 = fVar1;
      }
      else if (iVar2 != -1) {
        param_4[iVar2] = param_4[iVar2] * fVar1;
      }
      uVar4 = uVar4 + 1;
      pfVar3 = pfVar3 + 1;
    } while (uVar4 < 0x14);
  }
  fn_82A1DD38(param_1 + 0x10,param_3 * 0x1c0 + param_2 + 0x30,0x1c0);
  return;
}

