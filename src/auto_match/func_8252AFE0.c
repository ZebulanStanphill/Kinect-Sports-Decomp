extern unsigned int lbl_821CA460;


void fn_8252AFE0(double param_1,int param_2)

{
  float fVar1;
  float *pfVar2;
  unsigned int uVar3;
  int iVar4;
  __int64 lVar5;
  double dVar6;
  
  fVar1 = lbl_821CA460;
  iVar4 = 0x10;
  pfVar2 = (float *)(param_2 + 0x1fc);
  lVar5 = 2;
  dVar6 = (double)lbl_821CA460;
  do {
    *pfVar2 = (float)param_1;
    *(float *)(param_2 + 0x200 + iVar4) = fVar1;
    uVar3 = *(unsigned int *)(iVar4 + param_2 + 0x1d0);
    if (dVar6 <= param_1) {
      uVar3 = uVar3 & 0xffffffdf;
    }
    else {
      uVar3 = uVar3 | 0x20;
    }
    *(unsigned int *)(iVar4 + param_2 + 0x1d0) = uVar3;
    iVar4 = iVar4 + 4;
    pfVar2 = pfVar2 + 4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}

