extern unsigned int lbl_8205743C;
extern unsigned int lbl_82057AC0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832187EC;


unsigned __int64 fn_829E3D18(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  __int64 lVar8;
  
  fVar4 = lbl_8205743C;
  iVar6 = 0;
  fVar2 = lbl_821AAD20;
  fVar3 = lbl_821AAD20;
  do {
    iVar7 = 0;
    lVar8 = 5;
    do {
      iVar5 = iVar6 + iVar7;
      iVar7 = iVar7 + 1;
      fVar1 = *(float *)(iVar5 * 4 + *(int *)(param_1 + 0xc));
      fVar3 = fVar1 + fVar3;
      fVar2 = (float)(&lbl_82057AC0)[iVar5] * fVar1 + fVar2;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    iVar6 = iVar6 + 5;
  } while (iVar6 < 0x19);
  *param_2 = fVar2 / lbl_832187EC;
  *param_3 = fVar3 * fVar4;
  return 0;
}

