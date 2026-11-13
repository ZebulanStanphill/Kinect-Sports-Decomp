extern unsigned int lbl_821AAD20;


void fn_82CEC540(int param_1,int *param_2,unsigned int *param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  __int64 lVar5;
  
  pfVar3 = (float *)(param_1 + 0x20);
  iVar4 = 0;
  lVar5 = 3;
  fVar2 = lbl_821AAD20;
  do {
    if ((iVar4 < 0) && (fVar1 = pfVar3[-8], fVar2 <= ABS(fVar1))) {
      *param_2 = iVar4;
      *param_3 = 0;
      fVar2 = ABS(fVar1);
    }
    if ((iVar4 < 1) && (fVar1 = pfVar3[-4], fVar2 <= ABS(fVar1))) {
      *param_2 = iVar4;
      *param_3 = 1;
      fVar2 = ABS(fVar1);
    }
    if ((iVar4 < 2) && (fVar1 = *pfVar3, fVar2 <= ABS(fVar1))) {
      *param_2 = iVar4;
      *param_3 = 2;
      fVar2 = ABS(fVar1);
    }
    iVar4 = iVar4 + 1;
    pfVar3 = pfVar3 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}

