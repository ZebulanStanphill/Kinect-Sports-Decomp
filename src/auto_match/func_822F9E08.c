extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831CCADC;
extern unsigned int lbl_83265A28;


__int64 fn_822F9E08(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  __int64 lVar5;
  
  iVar4 = 0;
  lVar5 = 6;
  iVar3 = *(int *)(*param_1 + 0x844) * 6;
  fVar2 = ltcg_pool_0_0f;
  do {
    fVar2 = *(float *)(&lbl_831CCADC + (iVar3 + iVar4) * 0xc) + fVar2;
    iVar4 = iVar4 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  lVar5 = 0;
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  fVar1 = ltcg_pool_0_0f;
  do {
    fVar1 = *(float *)(&lbl_831CCADC + (iVar3 + (int)lVar5) * 0xc) * (lbl_821CA460 / fVar2) + fVar1;
    if ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460 < fVar1) {
      return lVar5;
    }
    lVar5 = lVar5 + 1;
  } while ((int)lVar5 < 6);
  return 2;
}

